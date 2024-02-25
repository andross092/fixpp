// Generated by https://github.com/sashamakarenko/fixpp
// Copyright (c) 2021 sashamakarenko
// https://github.com/sashamakarenko/fixpp/blob/main/LICENSE
#pragma once
#ifndef order_MESSAGES_H
#define order_MESSAGES_H

#include <order/Fields.h>
#include <order/Groups.h>
#include <vector>
#include <string_view>

namespace order
{

GetDepthMethod getTagDepthMethodByRawMsgType( raw_enum_t rawMsgType );


// start of Messages.hxx

// Generated


class MessageHeader: public MessageBase
{
  
// Methods

   public:
   static const char * getMessageName();
   static const std::string & getMessageType();
   offset_t scan( const char * fix, unsigned len );
   offset_t skip( const char * fix, unsigned len ) const;
   void reset();
   const char * getFieldValue( tag_t tag ) const;
   static FieldDepth getFieldDepth( raw_tag_t tag );
   static const std::vector<tag_t> & getKnownFields();
   private: static GetDepthMethod groupGetDepthMethods[];

// Fields

   public:
   bool isSetBeginString() const { return fieldBeginString.offset >= 0; }
   FieldBeginString::ValueType getBeginString() const { return fieldBeginString.getValue( buf ); }
   std::string_view getBeginStringView() const { return fieldBeginString.offset >= 0 ? std::string_view{ buf + fieldBeginString.offset, getValueLength( buf + fieldBeginString.offset ) } : std::string_view{}; }
   const char * ptrToBeginString() const { return buf + fieldBeginString.offset; }
   const char * getIfSetBeginString() const { return fieldBeginString.offset >= 0 ? buf + fieldBeginString.offset : nullptr; }
   private: FieldBeginString fieldBeginString;

   public:
   bool isSetBodyLength() const { return fieldBodyLength.offset >= 0; }
   FieldBodyLength::ValueType getBodyLength() const { return fieldBodyLength.getValue( buf ); }
   std::string_view getBodyLengthView() const { return fieldBodyLength.offset >= 0 ? std::string_view{ buf + fieldBodyLength.offset, getValueLength( buf + fieldBodyLength.offset ) } : std::string_view{}; }
   const char * ptrToBodyLength() const { return buf + fieldBodyLength.offset; }
   const char * getIfSetBodyLength() const { return fieldBodyLength.offset >= 0 ? buf + fieldBodyLength.offset : nullptr; }
   private: FieldBodyLength fieldBodyLength;

   public:
   bool isSetMsgType() const { return fieldMsgType.offset >= 0; }
   FieldMsgType::ValueType getMsgType() const { return fieldMsgType.getValue( buf ); }
   raw_enum_t getRawMsgType() const { return toRawEnum( buf + fieldMsgType.offset ); }
   std::string_view getMsgTypeView() const { return fieldMsgType.offset >= 0 ? std::string_view{ buf + fieldMsgType.offset, getValueLength( buf + fieldMsgType.offset ) } : std::string_view{}; }
   const char * ptrToMsgType() const { return buf + fieldMsgType.offset; }
   const char * getIfSetMsgType() const { return fieldMsgType.offset >= 0 ? buf + fieldMsgType.offset : nullptr; }
   private: FieldMsgType fieldMsgType;

   public:
   bool isSetSenderCompID() const { return fieldSenderCompID.offset >= 0; }
   FieldSenderCompID::ValueType getSenderCompID() const { return fieldSenderCompID.getValue( buf ); }
   std::string_view getSenderCompIDView() const { return fieldSenderCompID.offset >= 0 ? std::string_view{ buf + fieldSenderCompID.offset, getValueLength( buf + fieldSenderCompID.offset ) } : std::string_view{}; }
   const char * ptrToSenderCompID() const { return buf + fieldSenderCompID.offset; }
   const char * getIfSetSenderCompID() const { return fieldSenderCompID.offset >= 0 ? buf + fieldSenderCompID.offset : nullptr; }
   private: FieldSenderCompID fieldSenderCompID;

   public:
   bool isSetTargetCompID() const { return fieldTargetCompID.offset >= 0; }
   FieldTargetCompID::ValueType getTargetCompID() const { return fieldTargetCompID.getValue( buf ); }
   std::string_view getTargetCompIDView() const { return fieldTargetCompID.offset >= 0 ? std::string_view{ buf + fieldTargetCompID.offset, getValueLength( buf + fieldTargetCompID.offset ) } : std::string_view{}; }
   const char * ptrToTargetCompID() const { return buf + fieldTargetCompID.offset; }
   const char * getIfSetTargetCompID() const { return fieldTargetCompID.offset >= 0 ? buf + fieldTargetCompID.offset : nullptr; }
   private: FieldTargetCompID fieldTargetCompID;

   public:
   bool isSetMsgSeqNum() const { return fieldMsgSeqNum.offset >= 0; }
   FieldMsgSeqNum::ValueType getMsgSeqNum() const { return fieldMsgSeqNum.getValue( buf ); }
   std::string_view getMsgSeqNumView() const { return fieldMsgSeqNum.offset >= 0 ? std::string_view{ buf + fieldMsgSeqNum.offset, getValueLength( buf + fieldMsgSeqNum.offset ) } : std::string_view{}; }
   const char * ptrToMsgSeqNum() const { return buf + fieldMsgSeqNum.offset; }
   const char * getIfSetMsgSeqNum() const { return fieldMsgSeqNum.offset >= 0 ? buf + fieldMsgSeqNum.offset : nullptr; }
   private: FieldMsgSeqNum fieldMsgSeqNum;

   public:
   bool isSetSendingTime() const { return fieldSendingTime.offset >= 0; }
   FieldSendingTime::ValueType getSendingTime() const { return fieldSendingTime.getValue( buf ); }
   std::string_view getSendingTimeView() const { return fieldSendingTime.offset >= 0 ? std::string_view{ buf + fieldSendingTime.offset, getValueLength( buf + fieldSendingTime.offset ) } : std::string_view{}; }
   const char * ptrToSendingTime() const { return buf + fieldSendingTime.offset; }
   const char * getIfSetSendingTime() const { return fieldSendingTime.offset >= 0 ? buf + fieldSendingTime.offset : nullptr; }
   private: FieldSendingTime fieldSendingTime;

 
   public:
   bool isSetCheckSum() const { return fieldCheckSum.offset >= 0; }
   FieldCheckSum::ValueType getCheckSum() const { return fieldCheckSum.getValue( buf ); }
   std::string_view getCheckSumView() const { return fieldCheckSum.offset >= 0 ? std::string_view{ buf + fieldCheckSum.offset, getValueLength( buf + fieldCheckSum.offset ) } : std::string_view{}; }
   const char * ptrToCheckSum() const { return buf + fieldCheckSum.offset; }
   const char * getIfSetCheckSum() const { return fieldCheckSum.offset >= 0 ? buf + fieldCheckSum.offset : nullptr; }
   private: FieldCheckSum fieldCheckSum;
};

class MessageNewOrderSingle: public MessageBase
{
  
// Methods

   public:
   static const char * getMessageName();
   static const std::string & getMessageType();
   offset_t scan( const char * fix, unsigned len );
   offset_t skip( const char * fix, unsigned len ) const;
   void reset();
   const char * getFieldValue( tag_t tag ) const;
   static FieldDepth getFieldDepth( raw_tag_t tag );
   static const std::vector<tag_t> & getKnownFields();
   private: static GetDepthMethod groupGetDepthMethods[];

// Fields

   public:
   bool isSetClOrdID() const { return fieldClOrdID.offset >= 0; }
   FieldClOrdID::ValueType getClOrdID() const { return fieldClOrdID.getValue( buf ); }
   std::string_view getClOrdIDView() const { return fieldClOrdID.offset >= 0 ? std::string_view{ buf + fieldClOrdID.offset, getValueLength( buf + fieldClOrdID.offset ) } : std::string_view{}; }
   const char * ptrToClOrdID() const { return buf + fieldClOrdID.offset; }
   const char * getIfSetClOrdID() const { return fieldClOrdID.offset >= 0 ? buf + fieldClOrdID.offset : nullptr; }
   private: FieldClOrdID fieldClOrdID;

   public:
   bool isSetAccount() const { return fieldAccount.offset >= 0; }
   FieldAccount::ValueType getAccount() const { return fieldAccount.getValue( buf ); }
   std::string_view getAccountView() const { return fieldAccount.offset >= 0 ? std::string_view{ buf + fieldAccount.offset, getValueLength( buf + fieldAccount.offset ) } : std::string_view{}; }
   const char * ptrToAccount() const { return buf + fieldAccount.offset; }
   const char * getIfSetAccount() const { return fieldAccount.offset >= 0 ? buf + fieldAccount.offset : nullptr; }
   private: FieldAccount fieldAccount;

   public:
   bool isSetSymbol() const { return fieldSymbol.offset >= 0; }
   FieldSymbol::ValueType getSymbol() const { return fieldSymbol.getValue( buf ); }
   std::string_view getSymbolView() const { return fieldSymbol.offset >= 0 ? std::string_view{ buf + fieldSymbol.offset, getValueLength( buf + fieldSymbol.offset ) } : std::string_view{}; }
   const char * ptrToSymbol() const { return buf + fieldSymbol.offset; }
   const char * getIfSetSymbol() const { return fieldSymbol.offset >= 0 ? buf + fieldSymbol.offset : nullptr; }
   private: FieldSymbol fieldSymbol;

   public:
   bool isSetSecurityID() const { return fieldSecurityID.offset >= 0; }
   FieldSecurityID::ValueType getSecurityID() const { return fieldSecurityID.getValue( buf ); }
   std::string_view getSecurityIDView() const { return fieldSecurityID.offset >= 0 ? std::string_view{ buf + fieldSecurityID.offset, getValueLength( buf + fieldSecurityID.offset ) } : std::string_view{}; }
   const char * ptrToSecurityID() const { return buf + fieldSecurityID.offset; }
   const char * getIfSetSecurityID() const { return fieldSecurityID.offset >= 0 ? buf + fieldSecurityID.offset : nullptr; }
   private: FieldSecurityID fieldSecurityID;

   public:
   bool isSetSide() const { return fieldSide.offset >= 0; }
   FieldSide::ValueType getSide() const { return fieldSide.getValue( buf ); }
   std::string_view getSideView() const { return fieldSide.offset >= 0 ? std::string_view{ buf + fieldSide.offset, getValueLength( buf + fieldSide.offset ) } : std::string_view{}; }
   const char * ptrToSide() const { return buf + fieldSide.offset; }
   const char * getIfSetSide() const { return fieldSide.offset >= 0 ? buf + fieldSide.offset : nullptr; }
   private: FieldSide fieldSide;

   public:
   bool isSetQtyType() const { return fieldQtyType.offset >= 0; }
   FieldQtyType::ValueType getQtyType() const { return fieldQtyType.getValue( buf ); }
   std::string_view getQtyTypeView() const { return fieldQtyType.offset >= 0 ? std::string_view{ buf + fieldQtyType.offset, getValueLength( buf + fieldQtyType.offset ) } : std::string_view{}; }
   const char * ptrToQtyType() const { return buf + fieldQtyType.offset; }
   const char * getIfSetQtyType() const { return fieldQtyType.offset >= 0 ? buf + fieldQtyType.offset : nullptr; }
   private: FieldQtyType fieldQtyType;

   public:
   bool isSetOrderQty() const { return fieldOrderQty.offset >= 0; }
   FieldOrderQty::ValueType getOrderQty() const { return fieldOrderQty.getValue( buf ); }
   std::string_view getOrderQtyView() const { return fieldOrderQty.offset >= 0 ? std::string_view{ buf + fieldOrderQty.offset, getValueLength( buf + fieldOrderQty.offset ) } : std::string_view{}; }
   const char * ptrToOrderQty() const { return buf + fieldOrderQty.offset; }
   const char * getIfSetOrderQty() const { return fieldOrderQty.offset >= 0 ? buf + fieldOrderQty.offset : nullptr; }
   private: FieldOrderQty fieldOrderQty;

   public:
   bool isSetOrdType() const { return fieldOrdType.offset >= 0; }
   FieldOrdType::ValueType getOrdType() const { return fieldOrdType.getValue( buf ); }
   std::string_view getOrdTypeView() const { return fieldOrdType.offset >= 0 ? std::string_view{ buf + fieldOrdType.offset, getValueLength( buf + fieldOrdType.offset ) } : std::string_view{}; }
   const char * ptrToOrdType() const { return buf + fieldOrdType.offset; }
   const char * getIfSetOrdType() const { return fieldOrdType.offset >= 0 ? buf + fieldOrdType.offset : nullptr; }
   private: FieldOrdType fieldOrdType;

   public:
   bool isSetPrice() const { return fieldPrice.offset >= 0; }
   FieldPrice::ValueType getPrice() const { return fieldPrice.getValue( buf ); }
   std::string_view getPriceView() const { return fieldPrice.offset >= 0 ? std::string_view{ buf + fieldPrice.offset, getValueLength( buf + fieldPrice.offset ) } : std::string_view{}; }
   const char * ptrToPrice() const { return buf + fieldPrice.offset; }
   const char * getIfSetPrice() const { return fieldPrice.offset >= 0 ? buf + fieldPrice.offset : nullptr; }
   private: FieldPrice fieldPrice;

   public:
   bool isSetStopPx() const { return fieldStopPx.offset >= 0; }
   FieldStopPx::ValueType getStopPx() const { return fieldStopPx.getValue( buf ); }
   std::string_view getStopPxView() const { return fieldStopPx.offset >= 0 ? std::string_view{ buf + fieldStopPx.offset, getValueLength( buf + fieldStopPx.offset ) } : std::string_view{}; }
   const char * ptrToStopPx() const { return buf + fieldStopPx.offset; }
   const char * getIfSetStopPx() const { return fieldStopPx.offset >= 0 ? buf + fieldStopPx.offset : nullptr; }
   private: FieldStopPx fieldStopPx;

   public:
   bool isSetTransactTime() const { return fieldTransactTime.offset >= 0; }
   FieldTransactTime::ValueType getTransactTime() const { return fieldTransactTime.getValue( buf ); }
   std::string_view getTransactTimeView() const { return fieldTransactTime.offset >= 0 ? std::string_view{ buf + fieldTransactTime.offset, getValueLength( buf + fieldTransactTime.offset ) } : std::string_view{}; }
   const char * ptrToTransactTime() const { return buf + fieldTransactTime.offset; }
   const char * getIfSetTransactTime() const { return fieldTransactTime.offset >= 0 ? buf + fieldTransactTime.offset : nullptr; }
   private: FieldTransactTime fieldTransactTime;

 
   public:
   bool isSetCheckSum() const { return fieldCheckSum.offset >= 0; }
   FieldCheckSum::ValueType getCheckSum() const { return fieldCheckSum.getValue( buf ); }
   std::string_view getCheckSumView() const { return fieldCheckSum.offset >= 0 ? std::string_view{ buf + fieldCheckSum.offset, getValueLength( buf + fieldCheckSum.offset ) } : std::string_view{}; }
   const char * ptrToCheckSum() const { return buf + fieldCheckSum.offset; }
   const char * getIfSetCheckSum() const { return fieldCheckSum.offset >= 0 ? buf + fieldCheckSum.offset : nullptr; }
   private: FieldCheckSum fieldCheckSum;
};

class MessageExecutionReport: public MessageBase
{
  
// Methods

   public:
   static const char * getMessageName();
   static const std::string & getMessageType();
   offset_t scan( const char * fix, unsigned len );
   offset_t skip( const char * fix, unsigned len ) const;
   void reset();
   const char * getFieldValue( tag_t tag ) const;
   static FieldDepth getFieldDepth( raw_tag_t tag );
   static const std::vector<tag_t> & getKnownFields();
   private: static GetDepthMethod groupGetDepthMethods[];

// Fields

   public:
   bool isSetOrderID() const { return fieldOrderID.offset >= 0; }
   FieldOrderID::ValueType getOrderID() const { return fieldOrderID.getValue( buf ); }
   std::string_view getOrderIDView() const { return fieldOrderID.offset >= 0 ? std::string_view{ buf + fieldOrderID.offset, getValueLength( buf + fieldOrderID.offset ) } : std::string_view{}; }
   const char * ptrToOrderID() const { return buf + fieldOrderID.offset; }
   const char * getIfSetOrderID() const { return fieldOrderID.offset >= 0 ? buf + fieldOrderID.offset : nullptr; }
   private: FieldOrderID fieldOrderID;

   public:
   bool isSetClOrdID() const { return fieldClOrdID.offset >= 0; }
   FieldClOrdID::ValueType getClOrdID() const { return fieldClOrdID.getValue( buf ); }
   std::string_view getClOrdIDView() const { return fieldClOrdID.offset >= 0 ? std::string_view{ buf + fieldClOrdID.offset, getValueLength( buf + fieldClOrdID.offset ) } : std::string_view{}; }
   const char * ptrToClOrdID() const { return buf + fieldClOrdID.offset; }
   const char * getIfSetClOrdID() const { return fieldClOrdID.offset >= 0 ? buf + fieldClOrdID.offset : nullptr; }
   private: FieldClOrdID fieldClOrdID;

   public:
   bool isSetOrigClOrdID() const { return fieldOrigClOrdID.offset >= 0; }
   FieldOrigClOrdID::ValueType getOrigClOrdID() const { return fieldOrigClOrdID.getValue( buf ); }
   std::string_view getOrigClOrdIDView() const { return fieldOrigClOrdID.offset >= 0 ? std::string_view{ buf + fieldOrigClOrdID.offset, getValueLength( buf + fieldOrigClOrdID.offset ) } : std::string_view{}; }
   const char * ptrToOrigClOrdID() const { return buf + fieldOrigClOrdID.offset; }
   const char * getIfSetOrigClOrdID() const { return fieldOrigClOrdID.offset >= 0 ? buf + fieldOrigClOrdID.offset : nullptr; }
   private: FieldOrigClOrdID fieldOrigClOrdID;

   public:
   bool isSetExecID() const { return fieldExecID.offset >= 0; }
   FieldExecID::ValueType getExecID() const { return fieldExecID.getValue( buf ); }
   std::string_view getExecIDView() const { return fieldExecID.offset >= 0 ? std::string_view{ buf + fieldExecID.offset, getValueLength( buf + fieldExecID.offset ) } : std::string_view{}; }
   const char * ptrToExecID() const { return buf + fieldExecID.offset; }
   const char * getIfSetExecID() const { return fieldExecID.offset >= 0 ? buf + fieldExecID.offset : nullptr; }
   private: FieldExecID fieldExecID;

   public:
   bool isSetExecType() const { return fieldExecType.offset >= 0; }
   FieldExecType::ValueType getExecType() const { return fieldExecType.getValue( buf ); }
   std::string_view getExecTypeView() const { return fieldExecType.offset >= 0 ? std::string_view{ buf + fieldExecType.offset, getValueLength( buf + fieldExecType.offset ) } : std::string_view{}; }
   const char * ptrToExecType() const { return buf + fieldExecType.offset; }
   const char * getIfSetExecType() const { return fieldExecType.offset >= 0 ? buf + fieldExecType.offset : nullptr; }
   private: FieldExecType fieldExecType;

   public:
   bool isSetOrdStatus() const { return fieldOrdStatus.offset >= 0; }
   FieldOrdStatus::ValueType getOrdStatus() const { return fieldOrdStatus.getValue( buf ); }
   std::string_view getOrdStatusView() const { return fieldOrdStatus.offset >= 0 ? std::string_view{ buf + fieldOrdStatus.offset, getValueLength( buf + fieldOrdStatus.offset ) } : std::string_view{}; }
   const char * ptrToOrdStatus() const { return buf + fieldOrdStatus.offset; }
   const char * getIfSetOrdStatus() const { return fieldOrdStatus.offset >= 0 ? buf + fieldOrdStatus.offset : nullptr; }
   private: FieldOrdStatus fieldOrdStatus;

   public:
   bool isSetOrdRejReason() const { return fieldOrdRejReason.offset >= 0; }
   FieldOrdRejReason::ValueType getOrdRejReason() const { return fieldOrdRejReason.getValue( buf ); }
   std::string_view getOrdRejReasonView() const { return fieldOrdRejReason.offset >= 0 ? std::string_view{ buf + fieldOrdRejReason.offset, getValueLength( buf + fieldOrdRejReason.offset ) } : std::string_view{}; }
   const char * ptrToOrdRejReason() const { return buf + fieldOrdRejReason.offset; }
   const char * getIfSetOrdRejReason() const { return fieldOrdRejReason.offset >= 0 ? buf + fieldOrdRejReason.offset : nullptr; }
   private: FieldOrdRejReason fieldOrdRejReason;

   public:
   bool isSetAccount() const { return fieldAccount.offset >= 0; }
   FieldAccount::ValueType getAccount() const { return fieldAccount.getValue( buf ); }
   std::string_view getAccountView() const { return fieldAccount.offset >= 0 ? std::string_view{ buf + fieldAccount.offset, getValueLength( buf + fieldAccount.offset ) } : std::string_view{}; }
   const char * ptrToAccount() const { return buf + fieldAccount.offset; }
   const char * getIfSetAccount() const { return fieldAccount.offset >= 0 ? buf + fieldAccount.offset : nullptr; }
   private: FieldAccount fieldAccount;

   public:
   bool isSetSymbol() const { return fieldSymbol.offset >= 0; }
   FieldSymbol::ValueType getSymbol() const { return fieldSymbol.getValue( buf ); }
   std::string_view getSymbolView() const { return fieldSymbol.offset >= 0 ? std::string_view{ buf + fieldSymbol.offset, getValueLength( buf + fieldSymbol.offset ) } : std::string_view{}; }
   const char * ptrToSymbol() const { return buf + fieldSymbol.offset; }
   const char * getIfSetSymbol() const { return fieldSymbol.offset >= 0 ? buf + fieldSymbol.offset : nullptr; }
   private: FieldSymbol fieldSymbol;

   public:
   bool isSetSecurityID() const { return fieldSecurityID.offset >= 0; }
   FieldSecurityID::ValueType getSecurityID() const { return fieldSecurityID.getValue( buf ); }
   std::string_view getSecurityIDView() const { return fieldSecurityID.offset >= 0 ? std::string_view{ buf + fieldSecurityID.offset, getValueLength( buf + fieldSecurityID.offset ) } : std::string_view{}; }
   const char * ptrToSecurityID() const { return buf + fieldSecurityID.offset; }
   const char * getIfSetSecurityID() const { return fieldSecurityID.offset >= 0 ? buf + fieldSecurityID.offset : nullptr; }
   private: FieldSecurityID fieldSecurityID;

   public:
   bool isSetSecurityType() const { return fieldSecurityType.offset >= 0; }
   FieldSecurityType::ValueType getSecurityType() const { return fieldSecurityType.getValue( buf ); }
   std::string_view getSecurityTypeView() const { return fieldSecurityType.offset >= 0 ? std::string_view{ buf + fieldSecurityType.offset, getValueLength( buf + fieldSecurityType.offset ) } : std::string_view{}; }
   const char * ptrToSecurityType() const { return buf + fieldSecurityType.offset; }
   const char * getIfSetSecurityType() const { return fieldSecurityType.offset >= 0 ? buf + fieldSecurityType.offset : nullptr; }
   private: FieldSecurityType fieldSecurityType;

   public:
   bool isSetText() const { return fieldText.offset >= 0; }
   FieldText::ValueType getText() const { return fieldText.getValue( buf ); }
   std::string_view getTextView() const { return fieldText.offset >= 0 ? std::string_view{ buf + fieldText.offset, getValueLength( buf + fieldText.offset ) } : std::string_view{}; }
   const char * ptrToText() const { return buf + fieldText.offset; }
   const char * getIfSetText() const { return fieldText.offset >= 0 ? buf + fieldText.offset : nullptr; }
   private: FieldText fieldText;

   public:
   bool isSetProduct() const { return fieldProduct.offset >= 0; }
   FieldProduct::ValueType getProduct() const { return fieldProduct.getValue( buf ); }
   std::string_view getProductView() const { return fieldProduct.offset >= 0 ? std::string_view{ buf + fieldProduct.offset, getValueLength( buf + fieldProduct.offset ) } : std::string_view{}; }
   const char * ptrToProduct() const { return buf + fieldProduct.offset; }
   const char * getIfSetProduct() const { return fieldProduct.offset >= 0 ? buf + fieldProduct.offset : nullptr; }
   private: FieldProduct fieldProduct;

   public:
   bool isSetSide() const { return fieldSide.offset >= 0; }
   FieldSide::ValueType getSide() const { return fieldSide.getValue( buf ); }
   std::string_view getSideView() const { return fieldSide.offset >= 0 ? std::string_view{ buf + fieldSide.offset, getValueLength( buf + fieldSide.offset ) } : std::string_view{}; }
   const char * ptrToSide() const { return buf + fieldSide.offset; }
   const char * getIfSetSide() const { return fieldSide.offset >= 0 ? buf + fieldSide.offset : nullptr; }
   private: FieldSide fieldSide;

   public:
   bool isSetQtyType() const { return fieldQtyType.offset >= 0; }
   FieldQtyType::ValueType getQtyType() const { return fieldQtyType.getValue( buf ); }
   std::string_view getQtyTypeView() const { return fieldQtyType.offset >= 0 ? std::string_view{ buf + fieldQtyType.offset, getValueLength( buf + fieldQtyType.offset ) } : std::string_view{}; }
   const char * ptrToQtyType() const { return buf + fieldQtyType.offset; }
   const char * getIfSetQtyType() const { return fieldQtyType.offset >= 0 ? buf + fieldQtyType.offset : nullptr; }
   private: FieldQtyType fieldQtyType;

   public:
   bool isSetOrderQty() const { return fieldOrderQty.offset >= 0; }
   FieldOrderQty::ValueType getOrderQty() const { return fieldOrderQty.getValue( buf ); }
   std::string_view getOrderQtyView() const { return fieldOrderQty.offset >= 0 ? std::string_view{ buf + fieldOrderQty.offset, getValueLength( buf + fieldOrderQty.offset ) } : std::string_view{}; }
   const char * ptrToOrderQty() const { return buf + fieldOrderQty.offset; }
   const char * getIfSetOrderQty() const { return fieldOrderQty.offset >= 0 ? buf + fieldOrderQty.offset : nullptr; }
   private: FieldOrderQty fieldOrderQty;

   public:
   bool isSetOrdType() const { return fieldOrdType.offset >= 0; }
   FieldOrdType::ValueType getOrdType() const { return fieldOrdType.getValue( buf ); }
   std::string_view getOrdTypeView() const { return fieldOrdType.offset >= 0 ? std::string_view{ buf + fieldOrdType.offset, getValueLength( buf + fieldOrdType.offset ) } : std::string_view{}; }
   const char * ptrToOrdType() const { return buf + fieldOrdType.offset; }
   const char * getIfSetOrdType() const { return fieldOrdType.offset >= 0 ? buf + fieldOrdType.offset : nullptr; }
   private: FieldOrdType fieldOrdType;

   public:
   bool isSetPriceType() const { return fieldPriceType.offset >= 0; }
   FieldPriceType::ValueType getPriceType() const { return fieldPriceType.getValue( buf ); }
   std::string_view getPriceTypeView() const { return fieldPriceType.offset >= 0 ? std::string_view{ buf + fieldPriceType.offset, getValueLength( buf + fieldPriceType.offset ) } : std::string_view{}; }
   const char * ptrToPriceType() const { return buf + fieldPriceType.offset; }
   const char * getIfSetPriceType() const { return fieldPriceType.offset >= 0 ? buf + fieldPriceType.offset : nullptr; }
   private: FieldPriceType fieldPriceType;

   public:
   bool isSetPrice() const { return fieldPrice.offset >= 0; }
   FieldPrice::ValueType getPrice() const { return fieldPrice.getValue( buf ); }
   std::string_view getPriceView() const { return fieldPrice.offset >= 0 ? std::string_view{ buf + fieldPrice.offset, getValueLength( buf + fieldPrice.offset ) } : std::string_view{}; }
   const char * ptrToPrice() const { return buf + fieldPrice.offset; }
   const char * getIfSetPrice() const { return fieldPrice.offset >= 0 ? buf + fieldPrice.offset : nullptr; }
   private: FieldPrice fieldPrice;

   public:
   bool isSetStopPx() const { return fieldStopPx.offset >= 0; }
   FieldStopPx::ValueType getStopPx() const { return fieldStopPx.getValue( buf ); }
   std::string_view getStopPxView() const { return fieldStopPx.offset >= 0 ? std::string_view{ buf + fieldStopPx.offset, getValueLength( buf + fieldStopPx.offset ) } : std::string_view{}; }
   const char * ptrToStopPx() const { return buf + fieldStopPx.offset; }
   const char * getIfSetStopPx() const { return fieldStopPx.offset >= 0 ? buf + fieldStopPx.offset : nullptr; }
   private: FieldStopPx fieldStopPx;

   public:
   bool isSetCurrency() const { return fieldCurrency.offset >= 0; }
   FieldCurrency::ValueType getCurrency() const { return fieldCurrency.getValue( buf ); }
   std::string_view getCurrencyView() const { return fieldCurrency.offset >= 0 ? std::string_view{ buf + fieldCurrency.offset, getValueLength( buf + fieldCurrency.offset ) } : std::string_view{}; }
   const char * ptrToCurrency() const { return buf + fieldCurrency.offset; }
   const char * getIfSetCurrency() const { return fieldCurrency.offset >= 0 ? buf + fieldCurrency.offset : nullptr; }
   private: FieldCurrency fieldCurrency;

   public:
   bool isSetTimeInForce() const { return fieldTimeInForce.offset >= 0; }
   FieldTimeInForce::ValueType getTimeInForce() const { return fieldTimeInForce.getValue( buf ); }
   std::string_view getTimeInForceView() const { return fieldTimeInForce.offset >= 0 ? std::string_view{ buf + fieldTimeInForce.offset, getValueLength( buf + fieldTimeInForce.offset ) } : std::string_view{}; }
   const char * ptrToTimeInForce() const { return buf + fieldTimeInForce.offset; }
   const char * getIfSetTimeInForce() const { return fieldTimeInForce.offset >= 0 ? buf + fieldTimeInForce.offset : nullptr; }
   private: FieldTimeInForce fieldTimeInForce;

   public:
   bool isSetExecInst() const { return fieldExecInst.offset >= 0; }
   FieldExecInst::ValueType getExecInst() const { return fieldExecInst.getValue( buf ); }
   std::string_view getExecInstView() const { return fieldExecInst.offset >= 0 ? std::string_view{ buf + fieldExecInst.offset, getValueLength( buf + fieldExecInst.offset ) } : std::string_view{}; }
   const char * ptrToExecInst() const { return buf + fieldExecInst.offset; }
   const char * getIfSetExecInst() const { return fieldExecInst.offset >= 0 ? buf + fieldExecInst.offset : nullptr; }
   private: FieldExecInst fieldExecInst;

   public:
   bool isSetLastQty() const { return fieldLastQty.offset >= 0; }
   FieldLastQty::ValueType getLastQty() const { return fieldLastQty.getValue( buf ); }
   std::string_view getLastQtyView() const { return fieldLastQty.offset >= 0 ? std::string_view{ buf + fieldLastQty.offset, getValueLength( buf + fieldLastQty.offset ) } : std::string_view{}; }
   const char * ptrToLastQty() const { return buf + fieldLastQty.offset; }
   const char * getIfSetLastQty() const { return fieldLastQty.offset >= 0 ? buf + fieldLastQty.offset : nullptr; }
   private: FieldLastQty fieldLastQty;

   public:
   bool isSetLastPx() const { return fieldLastPx.offset >= 0; }
   FieldLastPx::ValueType getLastPx() const { return fieldLastPx.getValue( buf ); }
   std::string_view getLastPxView() const { return fieldLastPx.offset >= 0 ? std::string_view{ buf + fieldLastPx.offset, getValueLength( buf + fieldLastPx.offset ) } : std::string_view{}; }
   const char * ptrToLastPx() const { return buf + fieldLastPx.offset; }
   const char * getIfSetLastPx() const { return fieldLastPx.offset >= 0 ? buf + fieldLastPx.offset : nullptr; }
   private: FieldLastPx fieldLastPx;

   public:
   bool isSetLeavesQty() const { return fieldLeavesQty.offset >= 0; }
   FieldLeavesQty::ValueType getLeavesQty() const { return fieldLeavesQty.getValue( buf ); }
   std::string_view getLeavesQtyView() const { return fieldLeavesQty.offset >= 0 ? std::string_view{ buf + fieldLeavesQty.offset, getValueLength( buf + fieldLeavesQty.offset ) } : std::string_view{}; }
   const char * ptrToLeavesQty() const { return buf + fieldLeavesQty.offset; }
   const char * getIfSetLeavesQty() const { return fieldLeavesQty.offset >= 0 ? buf + fieldLeavesQty.offset : nullptr; }
   private: FieldLeavesQty fieldLeavesQty;

   public:
   bool isSetAvgPx() const { return fieldAvgPx.offset >= 0; }
   FieldAvgPx::ValueType getAvgPx() const { return fieldAvgPx.getValue( buf ); }
   std::string_view getAvgPxView() const { return fieldAvgPx.offset >= 0 ? std::string_view{ buf + fieldAvgPx.offset, getValueLength( buf + fieldAvgPx.offset ) } : std::string_view{}; }
   const char * ptrToAvgPx() const { return buf + fieldAvgPx.offset; }
   const char * getIfSetAvgPx() const { return fieldAvgPx.offset >= 0 ? buf + fieldAvgPx.offset : nullptr; }
   private: FieldAvgPx fieldAvgPx;

   public:
   bool isSetCumQty() const { return fieldCumQty.offset >= 0; }
   FieldCumQty::ValueType getCumQty() const { return fieldCumQty.getValue( buf ); }
   std::string_view getCumQtyView() const { return fieldCumQty.offset >= 0 ? std::string_view{ buf + fieldCumQty.offset, getValueLength( buf + fieldCumQty.offset ) } : std::string_view{}; }
   const char * ptrToCumQty() const { return buf + fieldCumQty.offset; }
   const char * getIfSetCumQty() const { return fieldCumQty.offset >= 0 ? buf + fieldCumQty.offset : nullptr; }
   private: FieldCumQty fieldCumQty;

   public:
   bool isSetNoLegs() const { return fieldNoLegs.offset >= 0; }
   FieldNoLegs::ValueType getNoLegs() const { return fieldNoLegs.getValue( buf ); }
   std::string_view getNoLegsView() const { return fieldNoLegs.offset >= 0 ? std::string_view{ buf + fieldNoLegs.offset, getValueLength( buf + fieldNoLegs.offset ) } : std::string_view{}; }
   const char * ptrToNoLegs() const { return buf + fieldNoLegs.offset; }
   const char * getIfSetNoLegs() const { return fieldNoLegs.offset >= 0 ? buf + fieldNoLegs.offset : nullptr; }
   private: FieldNoLegs fieldNoLegs;
  
   public:
   std::size_t getGroupCountLegs() const { return groupsLegs.size(); } 
   const GroupLegs & getGroupLegs( std::size_t idx ) const { return groupsLegs[ idx ]; } 
   private: GroupLegs::Array groupsLegs{ 10 };

 
   public:
   bool isSetCheckSum() const { return fieldCheckSum.offset >= 0; }
   FieldCheckSum::ValueType getCheckSum() const { return fieldCheckSum.getValue( buf ); }
   std::string_view getCheckSumView() const { return fieldCheckSum.offset >= 0 ? std::string_view{ buf + fieldCheckSum.offset, getValueLength( buf + fieldCheckSum.offset ) } : std::string_view{}; }
   const char * ptrToCheckSum() const { return buf + fieldCheckSum.offset; }
   const char * getIfSetCheckSum() const { return fieldCheckSum.offset >= 0 ? buf + fieldCheckSum.offset : nullptr; }
   private: FieldCheckSum fieldCheckSum;
};


class ParserDispatcher
{
   public:

     virtual const char * parseAndDipatch( const char * buf, unsigned len, bool resetMessage = true );

   protected:

     ParserDispatcher();

     virtual ~ParserDispatcher() = 0;

     virtual void onUnknownMessage( raw_enum_t msgType );

     virtual bool ignoreMessage( raw_enum_t msgType ) const;

     virtual void unprocessedMessage( raw_enum_t msgType, MessageBase & msg );

     inline MessageHeader & getCurrentHeader() { return _msgHeader; }

     
// dispatching
 
// onHeader will never be called


     virtual void onMessage( MessageHeader & msg );


     virtual void onMessage( MessageNewOrderSingle & msg );


     virtual void onMessage( MessageExecutionReport & msg );


   private:


     MessageHeader _msgHeader;


     MessageNewOrderSingle _msgNewOrderSingle;


     MessageExecutionReport _msgExecutionReport;


};


// -------------------------------------- convenience message namespace ----------------------------------------
namespace message
{

typedef MessageHeader Header;


typedef MessageNewOrderSingle NewOrderSingle;


typedef MessageExecutionReport ExecutionReport;


}
// end of Messages.hxx

struct FixFormatStyle
{
    const char * messageBegin      ;
    const char * messageEnd        ;
    const char * indent            ;
    const char * groupFirstField   ;
    const char * fieldBegin        ;
    const char * fieldEnd          ;
    const char * headerTagNameStart;
    const char * headerTagNameStop ;
    const char * tagNameStart      ;
    const char * tagNameStop       ;
    const char * tagValueStart     ;
    const char * tagValueStop      ;
    const char * equal             ;
    const char * valueStart        ;
    const char * valueStop         ;
    const char * enumStart         ;
    const char * enumStop          ;
    const char * unknownStart      ;
    const char * unknownStop       ;
};

extern const FixFormatStyle defaultStyle;
extern const FixFormatStyle defaultVerticalStyle;
extern const FixFormatStyle ttyStyle;
extern const FixFormatStyle ttyRgbStyle;
extern const FixFormatStyle ttyRgbRawStyle;
extern const FixFormatStyle ttyRgbSingleLineStyle;

const GetDepthMethod autoIndentFields = (GetDepthMethod)(-1);

std::ostream & fixToHuman( const char * fix, offset_t & pos, std::ostream & os, const FixFormatStyle & style = defaultStyle, GetDepthMethod indentator = nullptr );

unsigned computeChecksum( const char * begin, const char * end );

unsigned parseMessageLength( const char * fix, unsigned & msgTypePos );

// To be used with ostream << operator.
struct fixstr
{
    explicit fixstr( const char * fix, const FixFormatStyle & fstyle = defaultStyle, GetDepthMethod ind = autoIndentFields ): ptr(fix), style(fstyle), indentator{ind} {}
    const char * const ptr;
    const FixFormatStyle & style;
    const GetDepthMethod indentator;
};

const char * getEnumName( const char * fix, int valueOffset );

} // namespace order

inline std::ostream & operator << ( std::ostream & os, const order::fixstr & msg )
{
    order::offset_t pos = 0;
    return order::fixToHuman( msg.ptr, pos, os, msg.style, msg.indentator );
}

#endif /* order_MESSAGES_H */

