// Generated by https://github.com/sashamakarenko/fixpp
// Copyright (c) 2021 sashamakarenko
// https://github.com/sashamakarenko/fixpp/blob/main/LICENSE

#include <fix44/FixFloat.h>
#include <cstring>
#include <charconv>

namespace fix44
{

void Float::parse( const char * ptr )
{
    _flags = Flag::CLEAR;
    int sign = 1;
    if( *ptr == '-' )
    {
        sign = -1;
        ++ptr;
    }

    unsigned intlen = 0;
    _int = sign * parseUInt<Int>( ptr, intlen );
    if( ptr[intlen] != '.' )
    {
        if( intlen > MAX_DIGITS )
        {
            setFlag<Flag::OVER_FLOW>();
        }
        if( intlen == 0 )
        {
            setFlag<Flag::NOTANUMBER>();
        }
        return;
    }

    unsigned mantissaLength = 0;
    Int mantissa = parseUInt<Int>( ptr + intlen + 1, mantissaLength );
    _int = _int * (Int)uintPow10[mantissaLength] + ( sign * mantissa );
    _dot = mantissaLength;
    if( intlen + mantissaLength > MAX_DIGITS )
    {
        setFlag<Flag::OVER_FLOW>();
    }
}

std::string Float::toString( bool withDetails ) const
{
    std::string result;
    if( _flags != Flag::CLEAR )
    {
        if( isFlagSet<Flag::OVER_FLOW>() )
        {
            result.append( "Ovf" );
        }
        if( isFlagSet<Flag::DIVBYZERO>() )
        {
            result.append( "Div0" );
        }
        if( isFlagSet<Flag::INFINITE>() )
        {
            result.append( "Inf" );
        }
        if( isFlagSet<Flag::NOTANUMBER>() )
        {
            result.append( "NaN" );
        }
        if( isFlagSet<Flag::NOTSUPPORTED>() )
        {
            result.append( "Nsup" );
        }
    }
    else
    {
        if( _dot > MAX_DIGITS )
        {
            withDetails = true;
            result = std::to_string( _int );
        }
        else
        {
            Int integer = _int / (Int)uintPow10[_dot];
            if( integer == 0 and _int < 0 )
            {
                result.append( 1, '-' );
            }
            result.append( std::to_string( integer ) );
        }
        if( _dot > 0 )
        {
            result.append( 1, '.' );
            result.append( (size_t)_dot, '0' );
            Int mantissa = std::abs( _int % (Int)uintPow10[_dot] );
            char * ptr = &result[0] + result.size();
            do
            {
                *(--ptr) = '0' + (mantissa % 10);
                mantissa /= 10;
            } while ( mantissa > 0 );
        }
    }
    if( withDetails )
    {
        result.append( "=[" ).append( std::to_string(_int) ).append( ":" ).append( std::to_string((unsigned)_dot) ).append( "]" );
    }
    return result;
}

char * Float::format( char * ptr ) const
{
    if( _flags != Flag::CLEAR or _dot > MAX_DIGITS )
    {
        return ptr;
    }

    Int integer = _int / (Int)uintPow10[_dot];
    if( integer == 0 and _int < 0 )
    {
        *ptr++ = '-';
    }

    std::to_chars_result res = std::to_chars( ptr, ptr + 20, integer );
    ptr = res.ptr;

    if( _dot > 0 )
    {
        *ptr++ = '.';
        std::memset( ptr, '0', (size_t)_dot );
        Int mantissa = std::abs( _int % (Int)uintPow10[_dot] );
        ptr += (size_t)_dot;
        char * fptr = ptr;
        do
        {
            *(--fptr) = '0' + (mantissa % 10);
            mantissa /= 10;
        } while ( mantissa > 0 );
    }
    *ptr = 0;
    return ptr;
}

inline bool Float::rescale( const Float & other, Int & myValue, Int & otherValue, Dot & highestDot ) const
{
    myValue    = _int;
    otherValue = other._int;
    if( _dot < other._dot )
    {
        int signWas = signOf( myValue );
        myValue *= (Int)uintPow10[ other._dot - _dot ];
        highestDot = other._dot;
        return signWas == signOf( myValue );
    }
    else if( _dot > other._dot )
    {
        int signWas = signOf( otherValue );
        otherValue *= (Int)uintPow10[ _dot - other._dot ];
        highestDot = _dot;
        return signWas == signOf( otherValue );
    }
    else
    {
        highestDot = _dot;
    }
    return true;
}


Float Float::plus( const Float & other ) const
{
    bool wasSameSign = areOfSameSign( _int, other._int );
    Int myValue, otherValue;
    Dot newDot;
    bool overflow = not rescale( other, myValue, otherValue, newDot );
    volatile Int sum = myValue + otherValue;
    Float res = { sum, newDot };
    if( overflow or ( wasSameSign and not areOfSameSign( _int, sum ) ) )
    {
        Float left  = *this;
        Float right = other;
        left.squeeze();
        right.squeeze();
        overflow = not left.rescale( right, myValue, otherValue, newDot );
        sum = myValue + otherValue;
        if( overflow or ( wasSameSign and not areOfSameSign( _int, sum ) ) )
        {
            res.setFlag<Flag::OVER_FLOW>();
        }
        else
        {
            res._int = sum;
            res._dot = newDot;
        }
    }
    return res;
}

Float Float::mul( const Float & other ) const
{
    Float left = *this;
    Float right = other;
    left.squeeze();
    right.squeeze();
    Dot newDot( left._dot + right._dot );
    volatile Int intRes = left._int * right._int;
    Float res{ intRes, newDot };
    if( intRes != 0 and intRes / right._int != left._int )
    {
        res.setFlag<Flag::OVER_FLOW>();
    }
    else if( newDot > OP_PRECISION )
    {
        res.shift( int(OP_PRECISION) - int(newDot) );
    }
    return res;
}

Float Float::div( const Float & other ) const
{
    if( other._int == 0 )
    {
        if( _int == 0 )
        {
            return Float( Flag::NOTANUMBER );
        }
        Float res( Flag::DIVBYZERO );
        res.setFlag<Flag::INFINITE>();
        return res;
    }

    if( _int == 0 )
    {
        return FLOAT_0;
    }

#ifdef FIXPP_FLOAT_PRECISE_DIVISION_SUPPORTED
    // todo: check flags
    Int myValue, otherValue;
    Dot newDot;
    rescale( other, myValue, otherValue, newDot );
    if( myValue == otherValue )
    {
        return FLOAT_1;
    }

    __int128_t left = myValue * __int128_t(MAX_VALUE);
    __int128_t div = left / otherValue;
    __int128_t udiv = div < 0 ? -div : div;
    unsigned precision = std::max( MAX_DIGITS, (unsigned)newDot );
    newDot = MAX_DIGITS;
    while( newDot > 0 and ( udiv > MAX_VALUE or newDot > precision ) )
    {
        div /= 10LL;
        udiv /= 10LL;
        --newDot;
    }
    if( div > MAX_VALUE )
    {
        return Float( Flag::OVER_FLOW );
    }
    Float res( (Int)div, newDot );
    return res.squeeze();
#else
    Float res( this->asDouble() / other.asDouble(), OP_PRECISION );
    return res.squeeze();
#endif
}

}