#pragma once
#ifndef fix44_FIXAPI_H
#define fix44_FIXAPI_H

#include <map>
#include <stdint.h>

#define FIXPP_SOH 1
#define SOHSTR(S) #S "\1"

namespace fix44
{

// ------------------------------ primitives -----------------------------
    
// use uint32 if all tags < 10000
typedef uint64_t raw_tag_t;

// use 64bits if your venue has wider enum values
// typedef uint64_t raw_enum_t;
typedef uint32_t raw_enum_t;

// use 16bits if all your venue messages are short
// typedef int16_t offset_t;
typedef int32_t offset_t;


// max 5 decimal digits in tags
constexpr unsigned tag_key_width( unsigned K )
{
    if( K < 10U    ) return 1;
    if( K < 100U   ) return 2;
    if( K < 1000U  ) return 3;
    if( K < 10000U ) return 4;
    return 5;
}


template< unsigned K >
constexpr raw_tag_t tag_as_raw()
{
    if( tag_key_width(K) == 1 )
    {
        return K + raw_tag_t('0');
    }
    
    return ( ( raw_tag_t('0') + K % 10U ) << ( 8 * ( tag_key_width(K) - 1 ) ) ) + tag_as_raw<K/10U>();    
}

namespace
{
constexpr static const unsigned uintPow10[] =
{
    1U,
    10U,
    100U,
    1000U,
    10000U,
    100000U,
    1000000U,
    10000000U,
    100000000U,
    1000000000U
};
}

// used to scan integers of type T
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

unsigned parseUInt( const char * ptr, unsigned & len );

double parseDouble( const char * ptr );

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
        // we trust the venue not to exceed 9 digits
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

// FIXPP_SOH terminated string
struct sohstr
{
    sohstr( const char * buf = nullptr ): ptr( buf ){}
    const char * ptr;
};


template<typename V>
V fromString( const char * ptr );

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

inline unsigned copyRawEnum( const char * from, char * to )
{
    unsigned len = 0;
    for( ; from[len] != FIXPP_SOH && len < sizeof( raw_enum_t ); ++len )
    {
        to[ len ] = from[ len ];
    }
    return len;
}

inline raw_enum_t toRawEnum( char c )
{
    return (raw_enum_t)c;
}

inline raw_enum_t toRawEnum( int i )
{
    unsigned u = (unsigned)i;
    if( tag_key_width(u) == 1 )
    {
        return u + raw_enum_t('0');
    }
    return ( ( raw_enum_t('0') + u % 10U ) << ( 8 * ( tag_key_width(u) - 1 ) ) ) + toRawEnum( i/10 );    
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

// ------------------------------ classes -----------------------------

struct FieldEnumBase
{
    FieldEnumBase( const char * const n, raw_enum_t r ): name{n}, raw{r} 
    {
    }
    const char * const name;
    const raw_enum_t   raw;
};

template<typename ValueType>
struct FieldEnum: FieldEnumBase
{
    FieldEnum( const char * const name, ValueType v ): FieldEnumBase{ name, toRawEnum(v) }, value{v}
    {
    }
    const ValueType value;
};

typedef std::map< raw_enum_t, const FieldEnumBase * > FieldEnumMap; 

struct FieldEnumsBase
{
    virtual ~FieldEnumsBase(){}
    
    virtual const char * getFieldName() const = 0;
    
    virtual const FieldEnumBase * getEnumByRaw( raw_enum_t raw ) const = 0;
    
    virtual const FieldEnumMap & getEnumMapByRaw() const = 0;

    virtual const FieldEnumBase * const * const getEnums() const = 0;
    
    const char * getEnumNameByRaw( raw_enum_t raw ) const
    {
        const FieldEnumBase * e = getEnumByRaw(raw);
        return e ? e->name : nullptr;
    }
};


struct FieldBase
{
    offset_t offset = -1;
};

template< const char * const & N, unsigned K, typename Type >
struct Field: FieldBase
{
    typedef Type ValueType;
    
    static constexpr raw_tag_t RAW = tag_as_raw<K>();
    static constexpr unsigned  KEY = K;
    
    static constexpr const char * tagName()
    {
        return N;
    }

    static constexpr unsigned tagKey()
    {
        return K;
    }
    
    static constexpr unsigned tagWidth()
    {
        return tag_key_width(K);
    }
    
    ValueType getValue( const char * buf ) const
    {
        return fromString<ValueType>( buf + offset );
    }
    
    unsigned getValueOffset() const
    {
        return tagWidth() + 1;
    }
    
    typedef FieldEnum<ValueType> EnumType;
    static const FieldEnumBase * const * enumItems;
};


inline raw_tag_t nextRawTag( const char * ptr, offset_t & pos )
{
    raw_tag_t value = *reinterpret_cast<const raw_tag_t *>(ptr);
    if( ptr[1] == '=' )
    {
        pos += 2;
        return value & 0xff;
    }
    else if( ptr[2] == '=' )
    {
        pos += 3;
        return value & 0xff'ff;
    }
    else if( ptr[3] == '=' )
    {
        pos += 4;
        return value & 0xff'ff'ff;
    }
    else if( ptr[4] == '=' )
    {
        pos += 5;
        return value & 0xff'ff'ff'ff;
    }
    else if( ptr[5] == '=' )
    {
        pos += 6;
        return value & 0xff'ff'ff'ff'ff;
    }
    
    return 0;
}

struct MessageBase
{
    protected: const char * buf = nullptr;
    public: const char * getMessageBuffer() const { return buf; }
};

/*
struct FieldInfo
{
    const unsigned tagKey;
    const char * const tagName;
    const FieldEnumBase * const * enumItems;
};
template<typename MsgType> 
class iterator
{
    public: 
        iterator( const MsgType & msg ): _msg{msg}, _field{0} {}
        
    private:
        const MsgType & _msg;
        unsigned        _field;
};
*/

typedef unsigned   AMT;
typedef char       BOOLEAN;
typedef char       CHAR;
typedef sohstr     COUNTRY;
typedef sohstr     CURRENCY;
typedef sohstr     DATA;
typedef sohstr     EXCHANGE;
typedef double     FLOAT;
typedef int        INT;
typedef unsigned   LENGTH;
typedef sohstr     LOCALMKTDATE;
typedef sohstr     DAYOFMONTH;
typedef sohstr     MONTHYEAR;
typedef sohstr     MULTIPLEVALUESTRING;
typedef unsigned   NUMINGROUP;
typedef double     PERCENTAGE;
typedef double     PRICE;
typedef double     PRICEOFFSET;
typedef unsigned   QTY;
typedef unsigned   SEQNUM;
typedef sohstr     STRING;
typedef sohstr     MULTIPLECHARVALUE;
typedef sohstr     MULTIPLESTRINGVALUE;
typedef sohstr     UTCDATEONLY;
typedef sohstr     UTCTIMEONLY;
typedef sohstr     UTCTIMESTAMP;
typedef sohstr     UTCDATE;
typedef sohstr     TZTIMEONLY;
typedef sohstr     LANGUAGE;
typedef sohstr     TZTIMESTAMP;
typedef sohstr     XMLDATA;

} // namespace fix44

#endif /* fix44_FIXAPI_H */

