__COPYRIGHT__
#pragma once
#ifndef DSTHEADERGUARD_FixTypes_h
#define DSTHEADERGUARD_FixTypes_h

#include <cstdint>
#include <string>
#include <cstring>
#include <limits>
#include <cstddef>
#include <type_traits>

#define FIXPP_SOH 1U
#define SOHSTR(S) #S "\1"

namespace DSTNAMESPACE
{

// ------------------------------ primitives -----------------------------

// 'raw' below means represented as is by an integer in memory with little endian byte order.
// We are using 'raw' for tags and enum values.
// This avoids unnecessary transformations involving arithmetics,

// A FIX field is |tag=value| where tag is a digital number.

// field key or tag type
using tag_t = uint32_t;

// use uint32 if all tags < 10000
using raw_tag_t = uint64_t;

// raw tag surrounded by SOH and =
using insertable_tag_t = uint64_t;

// use 64bits if your venue has wider enum values
// typedef uint64_t raw_enum_t;
using raw_enum_t = uint32_t;

// use 16bits if all your venue messages are short
// typedef int16_t offset_t;
using offset_t = int32_t;


// max 5 decimal digits in tags
template<tag_t K>
constexpr unsigned tag_width()
{
    static_assert( K < 100'000U, "too high tag number" );
    if( K < 10U    ) return 1;
    if( K < 100U   ) return 2;
    if( K < 1000U  ) return 3;
    if( K < 10000U ) return 4;
    return 5;
}

constexpr unsigned tag_width( tag_t K )
{
    if( K < 10U     ) return 1;
    if( K < 100U    ) return 2;
    if( K < 1000U   ) return 3;
    if( K < 10000U  ) return 4;
    if( K < 100000U ) return 5;
    return 0; // todo: ?
}

template< tag_t K >
constexpr raw_tag_t tag_as_raw()
{
    if( tag_width<K>() == 1 )
    {
        return K + raw_tag_t('0');
    }

    return ( ( raw_tag_t('0') + K % 10U ) << ( 8 * ( tag_width<K>() - 1 ) ) ) + tag_as_raw<K/10U>();
}

// insertable := as uint64_t * pointing to "\001" "TAG" "="
// Thus we can insert a tag along with leading SOH and followed by equal sign with a single integer assignment.
template< tag_t K >
constexpr insertable_tag_t tag_as_insertable()
{
    return ( insertable_tag_t('=') << ( 8 * ( tag_width<K>() + 1 ) ) ) + ( insertable_tag_t(tag_as_raw<K>()) << 8 ) + 1;
}

namespace
{

constexpr static const uint64_t uintPow10[] =
{
    1U,
    10U,
    100U,
    1000U,
    1000'0U,
    1000'00U,
    1000'000U,
    1000'000'0U,
    1000'000'00U,
    1000'000'000U,
    1000'000'000'0U,
    1000'000'000'00U,
    1000'000'000'000U,
    1000'000'000'000'0U,
    1000'000'000'000'00U,
    1000'000'000'000'000U,
    1000'000'000'000'000'0U,
    1000'000'000'000'000'00U,
    1000'000'000'000'000'000U,
};

constexpr unsigned MAX_NUMBER_PRECISION = sizeof(uintPow10) / sizeof(uintPow10[0]) - 1;

constexpr static const double div10Pow[] =
{
    1,
    0.1,
    0.01,
    0.001,
    0.000'1,
    0.000'01,
    0.000'001,
    0.000'000'1,
    0.000'000'01,
    0.000'000'001,
    0.000'000'000'1,
    0.000'000'000'01,
    0.000'000'000'001,
    0.000'000'000'000'1,
    0.000'000'000'000'01,
    0.000'000'000'000'001,
    0.000'000'000'000'000'1,
    0.000'000'000'000'000'01,
    0.000'000'000'000'000'001,
};

static_assert( MAX_NUMBER_PRECISION == sizeof(div10Pow) / sizeof(div10Pow[0]) - 1 );

// Valid for FIX values only.
// An integer is supposed to be closed either by SOH or by decimal dot '.'
constexpr bool isNotDecDigit( char c )
{
    return c < '0';
}

}

// Used to scan integers of type T to reduce the number of arithmetic operations.
// As if T was filled by N zero chars '0' (not zeros 0).
// Ex: dec_zeros<uint32_t,2> is an unsigned built of four bytes: \0 \0 '0' '0'
template< typename T, T N >
constexpr T dec_zeros()
{
    return ( dec_zeros<T,T(N-1)>() * T(10) ) + T( '0' );
}

template<>
constexpr unsigned short dec_zeros<unsigned short,0U>()
{
    return 0U;
}

template<>
constexpr short dec_zeros<short,0>()
{
    return 0;
}

template<>
constexpr unsigned dec_zeros<unsigned,0U>()
{
    return 0U;
}

template<>
constexpr int dec_zeros<int,0>()
{
    return 0;
}

template<>
constexpr int64_t dec_zeros<int64_t,0L>()
{
    return 0L;
}

template<>
constexpr uint64_t dec_zeros<uint64_t,0UL>()
{
    return 0UL;
}

// Three improvements:
// 1 - Rely on micro parallelism to find quickly last digit.
// 2 - Intel multiplication by 10 is LEA + ADD.
// 3 - Instead of subtracting '0' from every char we do it only once with dec_zeros.
template< typename T = unsigned, bool isTag = false >
inline T parseUInt( const char * ptr, unsigned & len )
{
    if( isNotDecDigit( ptr[0] ) )
    {
        return 0;
    }
    if( isNotDecDigit( ptr[1] ) )
    {
        len += 1;
        return T( ptr[0] ) - dec_zeros<T,T(1)>();
    }
    if( isNotDecDigit( ptr[2] ) )
    {
        len += 2;
        return T( ptr[0] ) * 10 + T( ptr[1] ) - dec_zeros<T,T(2)>();
    }
    if( isNotDecDigit( ptr[3] ) )
    {
        len += 3;
        return ( T( ptr[0] ) * 10 + T( ptr[1] ) ) * 10 + T( ptr[2] ) - dec_zeros<T,T(3)>();
    }
    if( isNotDecDigit( ptr[4] ) )
    {
        len += 4;
        return ( (
               T( ptr[0] )   * 10 +
               T( ptr[1] ) ) * 10 +
               T( ptr[2] ) ) * 10 +
               T( ptr[3] ) - dec_zeros<T,T(4)>();
    }
    if( isNotDecDigit( ptr[5] ) )
    {
        len += 5;
        return ( ( (
               T( ptr[0] )   * 10 +
               T( ptr[1] ) ) * 10 +
               T( ptr[2] ) ) * 10 +
               T( ptr[3] ) ) * 10 +
               T( ptr[4] ) - dec_zeros<T,T(5)>();
    }
    if( isNotDecDigit( ptr[6] ) )
    {
        len += 6;
        return ( ( ( (
               T( ptr[0] )   * 10 +
               T( ptr[1] ) ) * 10 +
               T( ptr[2] ) ) * 10 +
               T( ptr[3] ) ) * 10 +
               T( ptr[4] ) ) * 10 +
               T( ptr[5] ) - dec_zeros<T,T(6)>();
    }
    if( isNotDecDigit( ptr[7] ) )
    {
        len += 7;
        return ( ( ( ( (
               T( ptr[0] )   * 10 +
               T( ptr[1] ) ) * 10 +
               T( ptr[2] ) ) * 10 +
               T( ptr[3] ) ) * 10 +
               T( ptr[4] ) ) * 10 +
               T( ptr[5] ) ) * 10 +
               T( ptr[6] ) - dec_zeros<T,T(7)>();
    }
    T tmp =    ( ( ( ( ( (
               T( ptr[0] )   * 10 +
               T( ptr[1] ) ) * 10 +
               T( ptr[2] ) ) * 10 +
               T( ptr[3] ) ) * 10 +
               T( ptr[4] ) ) * 10 +
               T( ptr[5] ) ) * 10 +
               T( ptr[6] ) ) * 10 +
               T( ptr[7] ) - dec_zeros<T,T(8)>();
    if( isTag or isNotDecDigit( ptr[8] ) )
    {
        len += 8;
        return tmp;
    }

    unsigned tmplen = 0;
    T next = parseUInt<T>( ptr + 8, tmplen );
    len += tmplen + 8;
    return tmp * (T)uintPow10[ tmplen ] + next;
}

inline tag_t raw_to_tag( raw_tag_t raw )
{
    unsigned len = 0;
    return parseUInt<unsigned,true>( reinterpret_cast<const char *>( &raw ), len );
}

inline double parseDouble( const char * ptr )
{
    double sign = 1;
    if( *ptr == '-' )
    {
        sign = -1;
        ++ptr;
    }
    unsigned intlen = 0;
    unsigned integer = parseUInt( ptr, intlen );
    double mantissa = 0.0;
    if( ptr[intlen] == '.' )
    {
        unsigned mantissaLength = 0;
        mantissa = parseUInt( ptr + intlen + 1, mantissaLength );
        mantissa *= div10Pow[ mantissaLength ];
    }
    return sign * ( (double)integer + mantissa );
}

template< typename T = unsigned >
inline const char * parseYYYYMMDD( const char * ptr, T & year, T & month, T & day )
{
    year  = T( ptr[0] ) * 1000 + T( ptr[1] ) * 100 + T( ptr[2] ) * 10 + T( ptr[3] ) - dec_zeros<T,(T)4>();
    month = T( ptr[4] ) * 10   + T( ptr[5] ) - dec_zeros<T,(T)2>();
    day   = T( ptr[6] ) * 10   + T( ptr[7] ) - dec_zeros<T,(T)2>();
    return ptr + 8;
}

template< typename T = unsigned >
inline T parseYYYYMMDD( const char * ptr )
{
    return T( ptr[0] ) * 10000000 + T( ptr[1] ) * 1000000 + T( ptr[2] ) * 100000 + T( ptr[3] ) * 10000 +
           T( ptr[4] ) * 1000     + T( ptr[5] ) * 100 +
           T( ptr[6] ) * 10       + T( ptr[7] ) - dec_zeros<T,(T)8>();
}

// HH:MM:SS[.mmmuuunnn]
template< typename T = unsigned, typename NT = T >
inline const char * parseTime( const char * ptr, T & hour, T & minute, T & second, NT & nanoseconds )
{
    hour   = T( ptr[0] ) * 10   + T( ptr[1] ) - dec_zeros<T,(T)2>();
    minute = T( ptr[3] ) * 10   + T( ptr[4] ) - dec_zeros<T,(T)2>();
    second = T( ptr[6] ) * 10   + T( ptr[7] ) - dec_zeros<T,(T)2>();
    if( ptr[8] == '.' )
    {
        // we trust the FIX engines not to exceed 9 digits (at most nanoseconds)
        unsigned len = 0;
        nanoseconds = (NT)parseUInt( ptr + 9, len );
        nanoseconds *= (NT)uintPow10[ 9 - len ];
        return ptr + 9 + len;
    }
    nanoseconds = 0;
    return ptr + 8;
}

template< typename T = unsigned, typename NT = T >
inline const char * parseTimestamp( const char * ptr, T & year, T & month, T & day, T & hour, T & minute, T & second, NT & nanoseconds )
{
    return parseTime( parseYYYYMMDD( ptr, year, month, day ) + 1, hour, minute, second, nanoseconds );
}

unsigned getValueLength( const char * ptr );

// SOH terminated string
struct sohstr
{
    sohstr( const char * buf = nullptr )
    : ptr( buf )
    {
    }

    const char * data() const
    {
        return ptr;
    }

    size_t size() const
    {
        return getValueLength( ptr );
    }

    bool operator == ( const sohstr & other ) const
    {
        if( ptr == other.ptr )
        {
            return true;
        }
        if( ptr == nullptr or other.ptr == nullptr )
        {
            return false;
        }
        size_t mySize    = size();
        size_t otherSize = other.size();
        return mySize == otherSize and std::strncmp( ptr, other.ptr, mySize ) == 0;
    }

    bool operator != ( const sohstr & other ) const
    {
        return not ( *this == other );
    }

    const char * ptr;
};

template<typename V>
V fromString( const char * ptr );

template<>
inline bool fromString<bool>( const char * ptr )
{
    return 'Y' == *ptr;
}

template<>
inline unsigned fromString<unsigned>( const char * ptr )
{
    unsigned len;
    return parseUInt( ptr, len );
}

template<>
inline int fromString<int>( const char * ptr )
{
    unsigned len;
    if( *ptr == '-' )
    {
        return - (int)parseUInt( ptr+1, len );
    }
    return parseUInt( ptr, len );
}

template<>
inline double fromString<double>( const char * ptr )
{
    return parseDouble( ptr );
}

template<>
inline char fromString<char>( const char * ptr )
{
    return *ptr;
}

template<>
inline const char * fromString<const char *>( const char * ptr )
{
    return ptr;
}

template<>
inline sohstr fromString<sohstr>( const char * ptr )
{
    return ptr;
}

// Looks for the next SOH char distance from ptr.
// "...;123=ABC|56=value|"
//          |
//          ptr
inline unsigned getValueLength( const char * ptr )
{
    unsigned len = 0;
    do
    {
        if( FIXPP_SOH == ptr[0] )
        {
            return len;
        }
        else if( FIXPP_SOH == ptr[1] )
        {
            return len + 1;
        }
        else if( FIXPP_SOH == ptr[2] )
        {
            return len + 2;
        }
        else if( FIXPP_SOH == ptr[3] )
        {
            return len + 3;
        }
        else if( FIXPP_SOH == ptr[4] )
        {
            return len + 4;
        }
        len += 5;
        ptr += 5;
    } while( true );
}

// Moves pos to the next tag.
// @param fix points to the FIX buffer.
// "...|123=whatever|56=nextvalue|"
//          |        |
//          pos in   pos out
inline void gotoNextField( const char * fix, offset_t & pos )
{
    const char * ptr = fix + pos;
    do
    {
        if( FIXPP_SOH == ptr[0] )
        {
            pos += 1;
            return;
        }
        else if( FIXPP_SOH == ptr[1] )
        {
            pos += 2;
            return;
        }
        else if( FIXPP_SOH == ptr[2] )
        {
            pos += 3;
            return;
        }
        else if( FIXPP_SOH == ptr[3] )
        {
            pos += 4;
            return;
        }
        else if( FIXPP_SOH == ptr[4] )
        {
            pos += 5;
            return;
        }
        else if( FIXPP_SOH == ptr[5] )
        {
            pos += 6;
            return;
        }
        else if( FIXPP_SOH == ptr[6] )
        {
            pos += 7;
            return;
        }
        else if( FIXPP_SOH == ptr[7] )
        {
            pos += 8;
            return;
        }
        pos += 8;
        ptr += 8;
    } while( true );
}


// Converts string pointed to by ptr to raw tag and moves pos to the value.
// @param ptr points to the next tag to read
// @param pos initially pos = ptr - fix, on return pos shifts to value.
// "|1=value|12=value|..."
//   | |
//   | pos out
//   ptr = fix + pos in
inline raw_tag_t loadRawTag( const char * ptr, offset_t & pos )
{
    raw_tag_t rtag = *reinterpret_cast<const raw_tag_t *>(ptr);
    if( ptr[1] == '=' )
    {
        pos += 2;
        return rtag & 0xff;
    }
    else if( ptr[2] == '=' )
    {
        pos += 3;
        return rtag & 0xff'ff;
    }
    else if( ptr[3] == '=' )
    {
        pos += 4;
        return rtag & 0xff'ff'ff;
    }
    else if( ptr[4] == '=' )
    {
        pos += 5;
        return rtag & 0xff'ff'ff'ff;
    }
    else if( ptr[5] == '=' )
    {
        pos += 6;
        return rtag & 0xff'ff'ff'ff'ff;
    }
    return 0;
}

inline tag_t parseTag( const char * ptr )
{
    if( ptr[0] == '=' )
    {
        return 0;
    }
    else if( ptr[1] == '=' )
    {
        return tag_t( ptr[0] ) - dec_zeros<tag_t,tag_t(1)>();
    }
    else if( ptr[2] == '=' )
    {
        return tag_t( ptr[0] ) * 10 + tag_t( ptr[1] ) - dec_zeros<tag_t,tag_t(2)>();
    }
    else if( ptr[3] == '=' )
    {
        return ( tag_t( ptr[0] ) * 10 + tag_t( ptr[1] ) ) * 10 + tag_t( ptr[2] ) - dec_zeros<tag_t,tag_t(3)>();
    }
    else if( ptr[4] == '=' )
    {
        return ( (
               tag_t( ptr[0] )   * 10 +
               tag_t( ptr[1] ) ) * 10 +
               tag_t( ptr[2] ) ) * 10 +
               tag_t( ptr[3] ) - dec_zeros<tag_t,tag_t(4)>();
    }
    else if( ptr[5] == '=' )
    {
        return ( ( (
               tag_t( ptr[0] )   * 10 +
               tag_t( ptr[1] ) ) * 10 +
               tag_t( ptr[2] ) ) * 10 +
               tag_t( ptr[3] ) ) * 10 +
               tag_t( ptr[4] ) - dec_zeros<tag_t,tag_t(5)>();
    }
    return 0;
}

inline bool isGoodTag( const char * ptr )
{
    if( ptr[0] == '=' or ptr[0] == '0' )
    {
        return false;
    }
    else if( ptr[1] == '=' )
    {
        return std::isdigit( ptr[0] );
    }
    else if( ptr[2] == '=' )
    {
        return std::isdigit( ptr[0] ) and
               std::isdigit( ptr[1] );
    }
    else if( ptr[3] == '=' )
    {
        return std::isdigit( ptr[0] ) and
               std::isdigit( ptr[1] ) and
               std::isdigit( ptr[2] );
    }
    else if( ptr[4] == '=' )
    {
        return std::isdigit( ptr[0] ) and
               std::isdigit( ptr[1] ) and
               std::isdigit( ptr[2] ) and
               std::isdigit( ptr[3] );
    }
    else if( ptr[5] == '=' )
    {
        return std::isdigit( ptr[0] ) and
               std::isdigit( ptr[1] ) and
               std::isdigit( ptr[2] ) and
               std::isdigit( ptr[3] ) and
               std::isdigit( ptr[4] );
    }
    return false;
}

// |268=4|
//      |
//      ptr
inline int parseGroupNoValue( const char * ptr )
{
    if( not std::isdigit( *ptr ) )
    {
        return -1;
    }
    int ret = 0;
    while( std::isdigit( *ptr ) )
    {
        ret = ret * 10 + int(*ptr-'0');
    }
    if( *ptr != 1 )
    {
        return -2;
    }
    return ret;
}

template<typename V>
inline std::string toString( const V & value )
{
    return std::to_string(value);
}

template<>
inline std::string toString<sohstr>( const sohstr & value )
{
    offset_t pos = 0;
    gotoNextField( value.ptr, pos );
    return std::string( value.ptr, (std::size_t)pos-1 );
}


template<>
inline std::string toString<char>( const char & value )
{
    return std::string( &value, 1 );
}

inline raw_enum_t toRawEnum( char c )
{
    return (raw_enum_t)c;
}

inline raw_enum_t toRawEnum( unsigned i )
{
    unsigned u = i;
    if( tag_width(u) == 1 )
    {
        return u + raw_enum_t('0');
    }
    return ( ( raw_enum_t('0') + u % 10U ) << ( 8 * ( tag_width(u) - 1 ) ) ) + toRawEnum( i/10 );
}

inline raw_enum_t toRawEnum( int i )
{
    return toRawEnum( (unsigned)i );
}

inline raw_enum_t toRawEnum( const char * str )
{
    raw_enum_t value{0};
    char * to = reinterpret_cast<char *>( &value );
    for( unsigned len = 0; str[len] != FIXPP_SOH && len < sizeof( value ); ++len )
    {
        to[ len ] = str[ len ];
    }
    return value;
}

inline raw_enum_t toRawEnum( const sohstr & str )
{
    return toRawEnum( str.ptr );
}

}

#endif /* DSTHEADERGUARD_FixTypes_h */
