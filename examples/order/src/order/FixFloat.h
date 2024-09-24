// Generated by https://github.com/sashamakarenko/fixpp
// Copyright (c) 2021 sashamakarenko
// https://github.com/sashamakarenko/fixpp/blob/main/LICENSE
#pragma once
#ifndef order_FixFloat_h
#define order_FixFloat_h

#include <order/FixTypes.h>
#include <cmath>

#ifdef __SIZEOF_INT128__
#ifndef FIXPP_FLOAT_PRECISE_DIVISION_SUPPORTED
#define FIXPP_FLOAT_PRECISE_DIVISION_SUPPORTED
#endif
#else
#endif

namespace order
{

class Float
{

    public:

        using Int = int64_t;
        using Dot = uint8_t;

        constexpr static unsigned MAX_DIGITS          = 15; // FIX specs
        constexpr static unsigned OP_PRECISION        = 9; //
        constexpr static unsigned DEFAULT_PRECISION   = 6;
        constexpr static Int      MAX_VALUE           = uintPow10[MAX_DIGITS];
        constexpr static double   MAX_DOUBLE_VALUE    = double(MAX_VALUE);

        #ifdef FIXPP_FLOAT_PRECISE_DIVISION_SUPPORTED
        constexpr static bool     PRECISE_DIVISION_SUPPORTED  = true;
        #else
        constexpr static bool     PRECISE_DIVISION_SUPPORTED  = false;
        #endif

        static_assert( MAX_NUMBER_PRECISION >= MAX_DIGITS );
        static_assert( MAX_DIGITS > OP_PRECISION );

        enum class Flag: uint8_t
        {
            CLEAR        = 0,
            OVERFLOW     = 1,
            DIVBYZERO    = OVERFLOW   << 1,
            INFINITE_     = DIVBYZERO  << 1,
            NOTANUMBER   = INFINITE_   << 1,
            NOTSUPPORTED = NOTANUMBER << 1
        };

        Float() = default;

        // todo: round properly
        template< typename V, std::enable_if_t< std::is_floating_point<V>::value, int > = 0 >
        constexpr Float( V real, Dot dotPos = DEFAULT_PRECISION )
        : _int{ Int( real * uintPow10[dotPos] ) }
        , _dot{ dotPos }
        , _flags{ dotPos > MAX_DIGITS or std::abs(real * uintPow10[dotPos]) > MAX_DOUBLE_VALUE ? Flag::OVER_FLOW : Flag::CLEAR }
        {
        }

        template< typename V, std::enable_if_t< std::is_integral<V>::value, int > = 0 >
        constexpr Float( V integer, Dot dotPos = 0 )
        : _int{ integer }
        , _dot{ dotPos }
        , _flags{ Flag::CLEAR }
        {
        }

        Float( const char * str )
        {
            parse( str );
        }

        Float( const sohstr & str )
        {
            parse( str.data() );
        }

        Float( const std::string & str )
        {
            parse( str.data() );
        }

        Float( const std::string_view & str )
        {
            parse( str.data() );
        }

        bool isInteger() const
        {
            return _dot == 0 and _flags == Flag::CLEAR;
        }

        bool isZero() const
        {
            return _int == 0 and _flags == Flag::CLEAR;
        }

        std::string toString( bool withDetails = false ) const;

        char * format( char * ptr ) const;

        // todo: check flags in all ops
        
        // conversions

        double asDouble() const
        {
            return _int * div10Pow[_dot];
        }

        Int asInt() const
        {
            return _int / uintPow10[_dot];
        }

        template< typename V, std::enable_if_t< std::is_floating_point<V>::value, int > = 0 >
        V as() const
        {
            return asDouble();
        }

        template< typename V, std::enable_if_t< std::is_integral<V>::value, int > = 0 >
        V as() const
        {
            return asInt();
        }

        // comparisons

        bool operator < ( const Float & other ) const
        {
            return compare( other ) < 0;
        }

        bool operator > ( const Float & other ) const
        {
            return compare( other ) > 0;
        }

        bool operator == ( const Float & other ) const
        {
            return _flags == other._flags and compare( other ) == 0;
        }

        bool operator != ( const Float & other ) const
        {
            return _flags != other._flags or compare( other ) != 0;
        }

        template< typename V >
        bool operator < ( V number ) const
        {
            return as<double>() < double(number);
        }

        template< typename V >
        bool operator > ( V number ) const
        {
            return as<double>() > double(number);
        }

        template< typename V >
        bool operator == ( V number ) const
        {
            return as<V>() == number;
        }

        template< typename V >
        bool operator != ( V number ) const
        {
            return as<V>() != number;
        }

        // arithmetics

        Float operator + ( const Float & other ) const
        {
            return plus( other );
        }

        Float operator - ( const Float & other ) const
        {
            Float neg{ -other._int, other._dot, other._flags };
            return plus( neg );
        }

        Float operator * ( const Float & other ) const
        {
            return mul( other );
        }

        Float operator / ( const Float & other ) const
        {
            return div( other );
        }

        int compare( const Float & other ) const
        {
            Int myValue, otherValue;
            rescale( other, myValue, otherValue );
            return myValue < otherValue ? -1 :
                   myValue > otherValue ?  1 : 0;
        }

        bool isCloseTo( double real, double accuracy ) const
        {
            double myDouble = asDouble();
            if( myDouble != 0 )
            {
                return std::abs( myDouble - real ) / myDouble <= accuracy;
            }
            return std::abs( real ) <= accuracy;
        }

        void parse( const char * ptr );

        // todo:
        // void truncate();
        // void round();

        Float & shift( int pos )
        {
            if( pos > 0 )
            {
                for( ; pos > 0; --pos )
                {
                    _int *= 10;
                    ++_dot;
                }
            }
            else if( pos < 0 )
            {
                for( ; _dot > 0 and pos < 0; ++pos )
                {
                    _int /= 10;
                    --_dot;
                }
            }
            return *this;
        }

        Float & squeeze()
        {
            if( _int == 0 )
            {
                _dot = 0;
            }
            else
            {
                for( ; _dot > 0 and _int % 10 == 0; --_dot )
                {
                    _int /= 10;
                }
            }
            return *this;
        }

        Dot getDotPosition() const
        {
            return _dot;
        }

        Int getUnderlyingInteger() const
        {
            return _int;
        }

        // flags

        bool isGood() const
        {
            return _flags == Flag::CLEAR;
        }

        bool isOverflow() const
        {
            return isFlagSet<Flag::OVER_FLOW>();
        }

        bool isInfinite() const
        {
            return isFlagSet<Flag::INFINITE_>();
        }

        bool isNotANumber() const
        {
            return isFlagSet<Flag::NOTANUMBER>();
        }

        template<Flag flag>
        bool isFlagSet() const
        {
            auto res = uint8_t(_flags) & uint8_t(flag);
            return res != 0;
        }

    private:

        constexpr Float( Flag flag )
        : _int  ( 0 )
        , _dot  { 0 }
        , _flags{ flag }
        {
        }

        constexpr Float( Int i, Dot d, Flag f )
        : _int  ( i )
        , _dot  { d }
        , _flags{ f }
        {
        }

        template<Flag flag>
        void setFlag()
        {
            _flags = (Flag)( uint8_t(_flags) | uint8_t(flag) );
        }

        static bool areOfSameSign( Int a, Int b )
        {
            return ( a > 0 and b > 0 ) or ( a < 0 and b < 0 );
        }

        static int signOf( Int i )
        {
            return i < 0 ? -1 :
                   i > 0 ?  1 : 0;
        }

        void rescale( const Float & other, Int & myValue, Int & otherValue ) const
        {
            myValue    = _int;
            otherValue = other._int;
            if( _dot < other._dot )
            {
                myValue *= (Int)uintPow10[ other._dot - _dot ];
            }
            else if( _dot > other._dot )
            {
                otherValue *= (Int)uintPow10[ _dot - other._dot ];
            }
        }

        bool rescale( const Float & other, Int & myValue, Int & otherValue, Dot & highestDot ) const;

        Float plus( const Float & other ) const;
        Float mul( const Float & other ) const;
        Float div( const Float & other ) const;

    private:

        Int  _int   = 0;
        Dot  _dot   = 0;
        Flag _flags = Flag::CLEAR;
};

constexpr Float FLOAT_0  ( 0,0);
constexpr Float FLOAT_1  ( 1,0);
constexpr Float FLOAT_2  ( 2,0);
constexpr Float FLOAT_10 (10,0);

template<typename T>
inline Float operator + ( const T & number, const Float & f )
{
    return Float(number) + f;
}

template<typename T>
inline Float operator - ( const T & number, const Float & f )
{
    return  Float(number) - f;
}

template<typename T>
inline Float operator * ( const T & number, const Float & f )
{
    return Float(number) * f;
}

template<typename T>
inline Float operator / ( const T & number, const Float & f )
{
    return Float(number) / f;
}

inline order::Float operator "" _ff( long double q )
{
    return { (double)q };
}

#if __arm__ == 1
#define FIXPP_OP_TYPE unsigned int
#else
#define FIXPP_OP_TYPE unsigned long
#endif

inline order::Float operator "" _ff( const char * ptr, FIXPP_OP_TYPE )
{
    return order::Float( ptr );
}

} // namespace order


inline std::ostream & operator << ( std::ostream & os, const order::Float & f )
{
    return os << f.toString();
}

namespace std
{

inline std::string to_string( const order::Float & f ) noexcept
{
    return f.toString();
}

}

#endif

