#include <tiny/SenderApi.h>
#include <pe/Measurement.h>

using namespace tiny;

struct OrderFields
{
    const char * const orderId;
    unsigned orderIdLen;

    const char * const symbol;
    unsigned symbolLen;

    const char * const account;
    unsigned accountLen;

    SideEnums::ValueType side;
    unsigned qty;
    double price;
};

OrderFields orders[] =
{
    { "OID12345", 8, "GBP/USD", 7, "TRADER1", 7, SideEnums::BUY.value , 1000000, 1.30 },
    { "OID12345", 8, "EUR/USD", 7, "TRADER3", 7, SideEnums::SELL.value, 2000000, 1.20 },
    { "OID12345", 8, "GBP/USD", 7, "TRADER2", 7, SideEnums::BUY.value , 2500000, 1.31 },
    { "OID12345", 8, "GBP/EUR", 7, "TRADER4", 7, SideEnums::SELL.value, 4000000, 1.21 },
    {}
};

int main( int args, const char ** argv )
{
    pe::Measurement m;
    m.pinToCpuCore( 3 );
    m.addEvent( pe::EventType::cpuCycles );
    m.addEvent( pe::EventType::hwInstructions );
    m.addEvent( pe::EventType::branchInstructions );
    m.addEvent( pe::EventType::llCacheReadMisses );
    m.addEvent( pe::EventType::branchMisses );
    m.initialize( 100 );

    ReusableMessageBuilder order( MessageExecutionReport::getMessageType(), 512, 128 );
    order.addConstantHeaderField<FieldSenderCompID>("ASENDER");
    order.addConstantHeaderField<FieldTargetCompID>("ATARGET");
    order.addConstantHeaderTag<FieldMsgSeqNum>();
    order.finalizeConstantHeader();

    //auto constexpr tsLen  = TimestampKeeper::DATE_TIME_SECONDS_LENGTH;
    //auto constexpr tsFrac = TimestampKeeper::Precision::SECONDS;
    auto constexpr tsLen  = TimestampKeeper::DATE_TIME_MILLIS_LENGTH;
    auto constexpr tsFrac = TimestampKeeper::Precision::MILLISECONDS;
    //auto constexpr tsLen  = TimestampKeeper::DATE_TIME_MICROS_LENGTH;
    //auto constexpr tsFrac = TimestampKeeper::Precision::MICROSECONDS;
    //auto constexpr tsLen  = TimestampKeeper::DATE_TIME_NANOS_LENGTH;
    //auto constexpr tsFrac = TimestampKeeper::Precision::NANOSECONDS;
    order.append<FieldSendingTime>( TimestampKeeper::PLACE_HOLDER, tsLen );
    order.sendingTime.setup( order.end - tsLen, tsFrac );
    order.sendingTime.update();
    const unsigned sendingTimeLength = order.end - order.begin;

    unsigned seqnum = 1000;
    {
        const OrderFields & of = orders[0];
        order.rewind( sendingTimeLength );
        order.sendingTime.update();
        order.append<FieldAccount>( of.account );
        order.append<FieldClOrdID>( of.orderId );
        order.append<FieldSymbol>( of.symbol );
        order.append<FieldSide>( of.side );
        order.append<FieldOrderQty>( of.qty );
        order.append<FieldPrice>( of.price, 6 );
        order.setSeqnumAndUpdateHeaderAndChecksum(seqnum);
        std::cout << fixstr( order.start, ttyRgbStyle ) << std::endl;
    }

    for( int i = 0; i < m.getMaxCaptures(); ++i )
    {
        const OrderFields & of = orders[ i % 4 ];
        m.startCapture();
        order.rewind( sendingTimeLength );
        order.sendingTime.update();
        order.append<FieldAccount>( of.account, of.accountLen );
        order.append<FieldClOrdID>( of.orderId, of.orderIdLen );
        order.append<FieldSymbol>( of.symbol, of.symbolLen );
        order.append<FieldSide>( of.side );
        order.append<FieldOrderQty>( of.qty );
        order.append<FieldPrice>( of.price, 6 );
        order.setSeqnumAndUpdateHeaderAndChecksum(++seqnum);
        m.stopCapture();
    }

    std::cout << "\n -- Build order -- " << std::endl;
    m.prepareResults();
    // m.printCaptures();
    m.showAverageValues( std::cout );
    m.rewind();

    for( int i = 0; i < m.getMaxCaptures(); ++i )
    {
        order.rewind( sendingTimeLength );
        m.startCapture();
        order.sendingTime.update();
        m.stopCapture();
    }

    std::cout << "\n -- Timestamp update -- " << std::endl;
    m.prepareResults();
    m.showAverageValues( std::cout );
    m.rewind();

    for( int i = 0; i < m.getMaxCaptures(); ++i )
    {
        const OrderFields & of = orders[ i % 4 ];
        order.rewind( sendingTimeLength );
        m.startCapture();
        order.append<FieldClOrdID>( of.orderId, of.orderIdLen );
        m.stopCapture();
    }

    std::cout << "\n -- Set order id -- " << std::endl;
    m.prepareResults();
    m.showAverageValues( std::cout );
    m.rewind();

    for( int i = 0; i < m.getMaxCaptures(); ++i )
    {
        const OrderFields & of = orders[ i % 4 ];
        order.rewind( sendingTimeLength );
        m.startCapture();
        order.append<FieldPrice>( of.price, 6 );
        m.stopCapture();
    }

    std::cout << "\n -- Set price -- " << std::endl;
    m.prepareResults();
    m.showAverageValues( std::cout );
    m.rewind();

    for( int i = 0; i < m.getMaxCaptures(); ++i )
    {
        const OrderFields & of = orders[ i % 4 ];
        order.rewind( sendingTimeLength );
        m.startCapture();
        order.append<FieldOrderQty>( of.qty );
        m.stopCapture();
    }

    std::cout << "\n -- Set qty -- " << std::endl;
    m.prepareResults();
    m.showAverageValues( std::cout );
    m.rewind();

    for( int i = 0; i < m.getMaxCaptures(); ++i )
    {
        const OrderFields & of = orders[ i % 4 ];
        order.rewind( sendingTimeLength );
        order.sendingTime.update();
        order.append<FieldAccount>( of.account, of.accountLen );
        order.append<FieldClOrdID>( of.orderId, of.orderIdLen );
        order.append<FieldSymbol>( of.symbol, of.symbolLen );
        order.append<FieldSide>( of.side );
        order.append<FieldOrderQty>( of.qty );
        order.append<FieldPrice>( of.price, 6 );
        m.startCapture();
        order.setSeqnumAndUpdateHeaderAndChecksum(++seqnum);
        m.stopCapture();
    }

    std::cout << "\n -- setSeqnumAndUpdateHeaderAndChecksum -- " << std::endl;
    m.prepareResults();
    m.showAverageValues( std::cout );
    m.rewind();

    return 0;
}
