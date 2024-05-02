__COPYRIGHT__
#pragma once
#ifndef DSTHEADERGUARD_SENDERAPI_H
#define DSTHEADERGUARD_SENDERAPI_H

#include <DSTINCDIR/Messages.h>
#include <cstring>
#include <chrono>

#ifndef likely
#define likely(x)      __builtin_expect(!!(x), 1)
#endif

#ifndef unlikely
#define unlikely(x)    __builtin_expect(!!(x), 0)
#endif

namespace DSTNAMESPACE
{

// in below inserts we admit 1 byte overflow which is supposed to be overwritten by the value

// "\1" "1="
// "\1" "12="
template< typename FIELD, std::enable_if_t< (FIELD::INSERTABLE_TAG_WIDTH<5), int > = 0 >
inline char * insert( char * p )
{
    *reinterpret_cast<uint32_t*>(p) = (uint32_t)FIELD::INSERTABLE_TAG;
    return p + FIELD::INSERTABLE_TAG_WIDTH;
}

// "\1" "123= " 5
// "\1" "1234= " 6
template< typename FIELD, std::enable_if_t< FIELD::INSERTABLE_TAG_WIDTH == 5 or FIELD::INSERTABLE_TAG_WIDTH == 6, int > = 0 >
inline char * insert( char * p )
{
    *reinterpret_cast<uint32_t*>(p)   = (uint32_t)FIELD::INSERTABLE_TAG;
    *reinterpret_cast<uint16_t*>(p+4) = (uint16_t)(FIELD::INSERTABLE_TAG>>32);
    return p + FIELD::INSERTABLE_TAG_WIDTH;
}

// "\1" "12345= " 7
template< typename FIELD, std::enable_if_t< is_less(6,FIELD::INSERTABLE_TAG_WIDTH), int > = 0 >
inline char * insert( char * p )
{
    *reinterpret_cast<insertable_tag_t*>(p) = FIELD::INSERTABLE_TAG;
    return p + FIELD::INSERTABLE_TAG_WIDTH;
}

template<>
inline char * insert<FieldBeginString>( char * p )
{
    memcpy( p, FixBeginStringInsertableTag, FixBeginStringInsertableTagLength );
    return p + FixBeginStringInsertableTagLength;
}

inline int uintWidth( unsigned value )
{
    if( value < 1000U )
    {
        if( value < 100U )
        {
            return value < 10U ? 1 : 2;
        }
        return 3;
    }
    else if( value < 1000'000U )
    {
        if( value < 10'000U )
        {
            return 4;
        }
        return value < 100'000U ? 5 : 6;
    }
    else if( value < 1000'000'000U )
    {
        if( value < 10'000'000U )
        {
            return 7;
        }
        return value < 100'000'000U ? 8 : 9;
    }
    return 10;
}

// Suitable for seqnums and message length.
// value < 1000000
inline int smallUintWidth( unsigned value )
{
    if( value < 1000U )
    {
        if( value >= 100U )
        {
            return 3;
        }
        return value < 10U ? 1 : 2;
    }
    else if( value < 10'000U )
    {
        return 4;
    }
    else if( value < 1000'000U )
    {
        return value < 100'000U ? 5 : 6;
    }
    return 7;
}

// Formats value from right to left.
// @return next left most position.
inline char * reverseUIntToString( char * ptr, unsigned value )
{
    do
    {
        *(--ptr) = '0' + (value % 10);
        value /= 10;
    } while ( value > 0 );
    return ptr;
}

// Formats value from right to left and computes check sum of the inserted string.
// @return next left most position.
inline char * reverseUIntToString( char * ptr, unsigned value, unsigned & chksum )
{
    do
    {
        char c = '0' + (value % 10);
        *(--ptr) = c;
        chksum += (unsigned)c;
        value /= 10;
    } while ( value > 0 );
    return ptr;
}

// Formats value from right to left, zero pads it if necesary, and computes check sum of the inserted string.
// @return next left most position.
inline char * reversePaddedUIntToString( char * ptr, unsigned value, unsigned width, unsigned & chksum )
{
    char * oldptr = ptr;
    ptr = reverseUIntToString( ptr, value, chksum );
    for( unsigned insertedWidth = (unsigned)( oldptr - ptr ); insertedWidth < width; ++insertedWidth )
    {
        *(--ptr) = '0';
        chksum += (unsigned)'0';
    }
    return ptr;
}

struct TimestampKeeper;
using ClockType = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<ClockType>;

enum class ClockPrecision: unsigned
{
    SECONDS      = 0,
    MILLISECONDS = 3,
    MICROSECONDS = 6,
    NANOSECONDS  = 9
};

// Used to build FIX messages.
struct FixBufferStream
{
    explicit FixBufferStream( char * buf )
    : begin{ buf }
    , end  { buf }
    {
    }

    template< typename FIELD >
    FixBufferStream & pushTag()
    {
        end = insert<FIELD>(end);
        return *this;
    }

    FixBufferStream & pushTag( unsigned tag )
    {
        *end++ = FIXPP_SOH;
        pushValue( tag );
        *end++ = '=';
        return *this;
    }

    FixBufferStream & pushValue( const char * src, unsigned len )
    {
        memcpy( end, src, len );
        end += len;
        return *this;
    }

    FixBufferStream & pushValue( const char * src )
    {
        while( *src )
        {
            *end++ = *src++;
        }
        return *this;
    }

    FixBufferStream & pushValue( const std::string & src )
    {
        return pushValue( src.c_str(), src.size() );
    }

    FixBufferStream & pushValue( const sohstr & src )
    {
        for( const char * ptr = src.ptr; *ptr != FIXPP_SOH and *ptr; )
        {
            *end++ = *ptr++;
        }
        return *this;
    }

    FixBufferStream & pushValue( char v )
    {
        *end++ = v;
        return *this;
    }

    FixBufferStream & pushValue( unsigned v )
    {
        end += uintWidth( v );
        reverseUIntToString( end, v );
        return *this;
    }

    FixBufferStream & pushValue( long unsigned v )
    {
        end += uintWidth( v );
        reverseUIntToString( end, v );
        return *this;
    }

    FixBufferStream & pushValue( int v )
    {
        unsigned uv = v;
        if( v < 0 )
        {
            uv = -v;
            *end++ = '-';
        }
        end += uintWidth( uv );
        reverseUIntToString( end, uv );
        return *this;
    }

    FixBufferStream & pushValue( double v, unsigned precision )
    {
        if( v < 0 )
        {
            *end++ = '-';
            v = -v;
        }
        unsigned i = (unsigned)v;
        end += uintWidth( i );
        reverseUIntToString( end, i );
        *end++ = '.';
        char * first = end;
        i = ( v - i ) * uintPow10[ precision ] + 0.5;
        end += precision;
        for( char * last = reverseUIntToString( end, i ) - 1; last >= first; --last )
        {
            *last = '0';
        }
        return *this;
    }

    FixBufferStream & pushValue( const Float & v )
    {
        end = v.format( end );
        return *this;
    }

    inline FixBufferStream & pushValue( TimestampKeeper & tk, const TimePoint & tp );

    template< typename FIELD >
    FixBufferStream & append( const char * v, unsigned len )
    {
        end = insert<FIELD>(end);
        return pushValue( v, len );
    }

    template< typename FIELD, typename VALUE >
    FixBufferStream & append( const VALUE & v )
    {
        end = insert<FIELD>(end);
        return pushValue( v );
    }

    template< typename FIELD >
    FixBufferStream & append( double v, unsigned precision )
    {
        end = insert<FIELD>(end);
        return pushValue( v, precision );
    }

    template< typename FIELD >
    FixBufferStream & append( TimestampKeeper & v, const TimePoint & tp = ClockType::now() )
    {
        end = insert<FIELD>(end);
        return pushValue( v, tp );
    }

    template< typename FIELD >
    FixBufferStream & append( const FieldEnum< typename FIELD::ValueType > & item  )
    {
        return append<FIELD>( item.value );
    }

    // not efficient
    template< typename FIELD >
    FixBufferStream & append( const TimePoint & tp, ClockPrecision precision );

    char * begin;
    char * end;
};

constexpr unsigned BODY_LENGTH_OFFSET = FixBeginStringInsertableTagLength + FieldBodyLength::INSERTABLE_TAG_WIDTH;

// Precompute Header per session and msg type and insert as a single memcpy only if seqnum width changes.
//
//  buffer   start                msgType                                    sendingTime                  body
//  |        |                    |                                          |                            |
//  "..."   "8=FIX.4.4" I "9=315" I "35=W" I "49=foo" I "56=bar" I "34=1234" I "52=20190101-01:01:01.000" I "..."
//           ----------------***  -------------------------------------****              --------========
//
struct HeaderTemplate: FixBufferStream
{
    HeaderTemplate( unsigned capacity, const std::string & msgType )
    : FixBufferStream( nullptr )
    , buffer( capacity, (char)0 )
    , chksum( 0 )
    , countableLength( 0 )
    {
        begin = end = &buffer[0];
        end = insert<FieldBeginString>( end );
        end = insert<FieldBodyLength>( end );
        append<FieldMsgType>( msgType );
    }

    HeaderTemplate()
    : FixBufferStream( nullptr )
    , buffer()
    , chksum( 0 )
    {
    }

    // Returns countable body length [I 35=.....34=]
    unsigned finalize()
    {
        chksum = computeChecksum( begin, end );
        return countableLength = ( end - begin ) - BODY_LENGTH_OFFSET;
    }

    std::vector<char> buffer;
    unsigned          chksum;
    unsigned          countableLength;
};

// Reusable timestamp strcuture.
// Updates only changed values - mostly time since date doesn't change often.
struct TimestampKeeper
{
    using Precision = ClockPrecision;

    // YYYYMMDD-HH:MM:SS.mmmnnnuuu
    constexpr static unsigned DATE_LENGTH              = 8;
    constexpr static unsigned DATE_TIME_SECONDS_LENGTH = 17;
    constexpr static unsigned DATE_TIME_MILLIS_LENGTH  = 21;
    constexpr static unsigned DATE_TIME_MICROS_LENGTH  = 24;
    constexpr static unsigned DATE_TIME_NANOS_LENGTH   = 27;
    constexpr static const char * const PLACE_HOLDER   = "11112233-44:55:66.777888999";

    inline unsigned length() const
    {
        return DATE_TIME_SECONDS_LENGTH + ( secFraction != Precision::SECONDS ? 1 : 0 ) + (unsigned)secFraction;
    }

    explicit TimestampKeeper( char * buffer = nullptr, Precision secPrecision = Precision::SECONDS )
    : startOfDay  { 0 }
    , endOfDay    { 0 }
    , begin       { buffer }
    , lastSecond  { 0 }
    , lastFraction{ 0 }
    , secFraction { secPrecision }
    {
    }

    unsigned getWidth() const
    {
        return DATE_TIME_SECONDS_LENGTH + 1 + (unsigned)secFraction;
    }

    unsigned fill( char * buffer, Precision secPrecision, const TimePoint & tp = ClockType::now() )
    {
        if( begin != buffer or secFraction != secPrecision )
        {
            begin = buffer;
            secFraction = secPrecision;
            startOfDay = 0;
            endOfDay = 0;
            lastSecond = 0;
            lastFraction = 0;
        }
        if( buffer )
        {
            update( tp );
            return getWidth();
        }
        return 0;
    }

    unsigned setup( char * buffer, Precision secPrecision )
    {
        begin = buffer;
        secFraction = secPrecision;
        if( buffer )
        {
            memcpy( buffer, PLACE_HOLDER, getWidth() );
            update();
        }
        return getWidth();
    }

    char * update( const TimePoint & tp = ClockType::now() )
    {
        const std::time_t tpt = ClockType::to_time_t( tp );
        if( tpt < startOfDay or tpt >= endOfDay )
        {
            startOfDay = tpt - ( tpt % ( 3600 * 24 ) );
            endOfDay = startOfDay + 3600 * 24;
            using namespace std::chrono;

            strncpy(begin, std::format("{:%Y%m%d}-{:%H:%M:%S}",
                       year_month_day(time_point_cast<days>(tp)),
                       time_point_cast<milliseconds>(tp)).c_str(),64);
         }

        unsigned diff = tpt - startOfDay;
        if( lastSecond != diff )
        {
            uint16_t hours   = diff / 3600;
            uint16_t minutes = ( ( diff / 60 ) % 60 );
            uint16_t seconds = ( diff % 60 );
            char * ptr = begin + DATE_LENGTH + 1;
            ptr[0] = hours   / 10 + '0';
            ptr[1] = hours   % 10 + '0';
            ptr[3] = minutes / 10 + '0';
            ptr[4] = minutes % 10 + '0';
            ptr[6] = seconds / 10 + '0';
            ptr[7] = seconds % 10 + '0';
            lastSecond = diff;
        }

        if( secFraction != Precision::SECONDS )
        {
            begin[DATE_TIME_SECONDS_LENGTH] = '.';
            unsigned fraction = 0;
            if( secFraction == Precision::MILLISECONDS )
            {
                fraction = std::chrono::time_point_cast<std::chrono::milliseconds>(tp).time_since_epoch().count() % 1000;
            }
            else if( secFraction == Precision::MICROSECONDS )
            {
                fraction = std::chrono::time_point_cast<std::chrono::microseconds>(tp).time_since_epoch().count() % 1000'000;
            }
            else // nanos
            {
                fraction = std::chrono::time_point_cast<std::chrono::nanoseconds>(tp).time_since_epoch().count() % 1000'000'000;
            }
            if( fraction != lastFraction )
            {
                char * first = begin + DATE_TIME_SECONDS_LENGTH + 1;
                for( char * last = reverseUIntToString( first + (unsigned)secFraction, fraction ) - 1; last >= first; --last )
                {
                    *last = '0';
                }
                lastFraction = fraction;
            }
        }
        unsigned len = DATE_TIME_SECONDS_LENGTH + 1 + (unsigned)secFraction;
        begin[len] = FIXPP_SOH;
        return begin + len;
    }

    time_t    startOfDay;
    time_t    endOfDay;
    char    * begin;
    unsigned  lastSecond;
    unsigned  lastFraction;
    Precision secFraction;
};

FixBufferStream & FixBufferStream::pushValue( TimestampKeeper & tk, const TimePoint & tp )
{
    tk.fill( end, tk.secFraction, tp );
    end += tk.length();
    return *this;
}

template< typename FIELD >
inline FixBufferStream & FixBufferStream::append( const TimePoint & tp, ClockPrecision precision )
{
    end = insert<FIELD>(end);
    TimestampKeeper tmp( nullptr, precision );
    return pushValue( tmp, tp );
}

// basic types
template< typename VALUE >
constexpr unsigned valueMaxLength( const VALUE & v )
{
    return 16;
}

inline unsigned valueMaxLength( const std::string & v )
{
    return v.size();
}

inline unsigned valueMaxLength( const TimestampKeeper & v )
{
    return v.length();
}

inline unsigned valueMaxLength( const sohstr & v )
{
    offset_t pos = 0;
    gotoNextField( v.ptr, pos );
    return pos-1;
}

inline unsigned valueMaxLength( const Float & v )
{
    return Float::MAX_DIGITS + 5;
}

inline unsigned valueMaxLength( const char * & v )
{
    return strlen(v);
}

/*

Convenience class to reuse header, timestamps and the buffer.

buffer   start                msgType                                    sendingTime                  body
|        |                    |                                          |                            |
"..."   "8=FIX.4.4" I "9=315" I "35=W" I "49=foo" I "56=bar" I "34=1234" I "52=20190101-01:01:01.000" I "..."
                         ---                                       ----  |                            |
                         | body length and seqno will be updated   |     begin                        end

Since header length depends on seqnum and body length, start is not usable before calling setSeqnumAndUpdateHeaderAndChecksum().
*/
struct ReusableMessageBuilder: FixBufferStream
{
    ReusableMessageBuilder( const std::string & messageType, unsigned maxBodyLength, unsigned headerTemplateCapacity = 128 )
    : FixBufferStream    ( nullptr )
    , msgType            ( messageType )
    , buffer             ( maxBodyLength + 1, (char)0 )
    , start              ( nullptr )
    , lastSeqnumWidth    ( 0 )
    , minSeqnumWidth     ( 1 )
    , lastBodyLengthWidth( 0 )
    , minBodyLengthWidth ( 2 )
    , bufferGrowChunk    ( 1024 )
    , header             ( headerTemplateCapacity, messageType )
    {
        begin = end = &buffer[0] + headerTemplateCapacity;
    }

    ReusableMessageBuilder( const ReusableMessageBuilder & ) = delete;

    // To be called just before sending.
    // Header is supposed to be updated by this time.
    const char * setSeqnumAndUpdateHeaderAndChecksum( unsigned seqnum )
    {
        unsigned chksum = header.chksum;
        char * ptr = reversePaddedUIntToString( begin, seqnum, minSeqnumWidth, chksum );
        unsigned seqnumWidth = begin - ptr;
        unsigned bodyLength = header.countableLength + seqnumWidth + ( end - begin );

        char * msgTypePtr = begin - header.countableLength - seqnumWidth;
        ptr = reversePaddedUIntToString( msgTypePtr, bodyLength, minBodyLengthWidth, chksum );
        unsigned bodyLengthWidth = msgTypePtr - ptr;

        start = begin - seqnumWidth - header.countableLength - bodyLengthWidth - BODY_LENGTH_OFFSET;
        if( unlikely( seqnumWidth != lastSeqnumWidth ) )
        {
            lastBodyLengthWidth = bodyLengthWidth;
            lastSeqnumWidth = seqnumWidth;
            memcpy( start, header.begin, BODY_LENGTH_OFFSET );
            memcpy( msgTypePtr, header.begin + BODY_LENGTH_OFFSET, header.countableLength );
        }
        else if( unlikely( bodyLengthWidth != lastBodyLengthWidth ) )
        {
            lastBodyLengthWidth = bodyLengthWidth;
            memcpy( start, header.begin, BODY_LENGTH_OFFSET );
        }
        chksum += computeChecksum( begin, end ) + 1; // 1 = last SOH not inserted yet
        pushTag<FieldCheckSum>();
        chksum = chksum & 0xff;
        end[0] = '0' + chksum / 100;
        end[1] = '0' + ( chksum / 10 ) % 10;
        end[2] = '0' + chksum % 10;
        end[3] = 1;
        end += 4;
        return start;
    }

    void rewind( unsigned pos = 0 )
    {
        end = begin + pos;
    }

    // Resizes the buffer if necessary to receive next value.
    // start will be updated in setSeqnumAndUpdateHeaderAndChecksum().
    void resizeIfNecessary( unsigned valueLength )
    {
        valueLength += 8; // max "|tag=" length ?
        auto endOffset = end - &buffer[0];
        if( endOffset + (ssize_t)valueLength >= (ssize_t)buffer.size() )
        {
            auto beginOffset = begin - &buffer[0];
            buffer.resize( ( 1 + ( endOffset + valueLength ) / bufferGrowChunk ) * bufferGrowChunk );
            begin = &buffer[0] + beginOffset;
            end   = &buffer[0] + endOffset;
        }
    }

    // Methods resizing the buffer if necessary.
    // Otherwise use FixBufferStream::append().

    template< typename FIELD >
    FixBufferStream & appendSafely( const char * v, unsigned len )
    {
        resizeIfNecessary( len );
        end = insert<FIELD>(end);
        return pushValue( v, len );
    }

    template< typename FIELD, typename VALUE >
    FixBufferStream & appendSafely( const VALUE & v )
    {
        resizeIfNecessary( valueMaxLength(v) );
        end = insert<FIELD>(end);
        return pushValue( v );
    }

    template< typename FIELD >
    FixBufferStream & appendSafely( double v, unsigned precision )
    {
        resizeIfNecessary( 16 ); // formatted floating point max length ?
        end = insert<FIELD>(end);
        return pushValue( v, precision );
    }

    template< typename FIELD >
    FixBufferStream & appendSafely( const FieldEnum< typename FIELD::ValueType > & item  )
    {
        resizeIfNecessary( valueMaxLength( item.value ) );
        return append<FIELD>( item.value );
    }

    const std::string             msgType;
    std::vector<char>             buffer;
    char                        * start;
    unsigned                      lastSeqnumWidth;
    unsigned                      minSeqnumWidth;
    unsigned                      lastBodyLengthWidth;
    unsigned                      minBodyLengthWidth;
    unsigned                      bufferGrowChunk;
    HeaderTemplate                header;
    TimestampKeeper               sendingTime;
    TimestampKeeper               userTime1; // user defined timestamps
    TimestampKeeper               userTime2;
    TimestampKeeper               userTime3;
    TimestampKeeper               userTime4;
};

}

#endif // DSTHEADERGUARD_SENDERAPI_H
