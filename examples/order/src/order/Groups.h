#pragma once
#ifndef order_GROUPS_H
#define order_GROUPS_H

#include <order/Fields.h>

namespace order
{

// start of Groups.hxx

// Generated


class GroupLegStipulations : public MessageBase
{
  
// Methods
   public:
   GroupLegStipulations();
   typedef std::vector<GroupLegStipulations> Array;
   void reset();
   static const char * getMessageName();
   static offset_t scan( Array & arr, const char * fix, unsigned len );
   static offset_t skip( const char * fix, unsigned len );
   const char * getFieldValue( unsigned tag ) const;
   static FieldDepth getFieldDepth( raw_tag_t tag );
   static const std::vector<unsigned> & getKnownFields();
   private: static GetDepthMethod groupGetDepthMethods[];
   
   public:
   bool isSetLegStipulationType() const { return fieldLegStipulationType.offset >= 0; }
   FieldLegStipulationType::ValueType getLegStipulationType() const { return fieldLegStipulationType.getValue( buf ); }
   const char * ptrToLegStipulationType() const { return buf + fieldLegStipulationType.offset; }
   private: FieldLegStipulationType fieldLegStipulationType;

   public:
   bool isSetLegStipulationValue() const { return fieldLegStipulationValue.offset >= 0; }
   FieldLegStipulationValue::ValueType getLegStipulationValue() const { return fieldLegStipulationValue.getValue( buf ); }
   const char * ptrToLegStipulationValue() const { return buf + fieldLegStipulationValue.offset; }
   private: FieldLegStipulationValue fieldLegStipulationValue;

};

class GroupNestedPartySubIDs : public MessageBase
{
  
// Methods
   public:
   GroupNestedPartySubIDs();
   typedef std::vector<GroupNestedPartySubIDs> Array;
   void reset();
   static const char * getMessageName();
   static offset_t scan( Array & arr, const char * fix, unsigned len );
   static offset_t skip( const char * fix, unsigned len );
   const char * getFieldValue( unsigned tag ) const;
   static FieldDepth getFieldDepth( raw_tag_t tag );
   static const std::vector<unsigned> & getKnownFields();
   private: static GetDepthMethod groupGetDepthMethods[];
   
   public:
   bool isSetNestedPartySubID() const { return fieldNestedPartySubID.offset >= 0; }
   FieldNestedPartySubID::ValueType getNestedPartySubID() const { return fieldNestedPartySubID.getValue( buf ); }
   const char * ptrToNestedPartySubID() const { return buf + fieldNestedPartySubID.offset; }
   private: FieldNestedPartySubID fieldNestedPartySubID;

   public:
   bool isSetNestedPartySubIDType() const { return fieldNestedPartySubIDType.offset >= 0; }
   FieldNestedPartySubIDType::ValueType getNestedPartySubIDType() const { return fieldNestedPartySubIDType.getValue( buf ); }
   const char * ptrToNestedPartySubIDType() const { return buf + fieldNestedPartySubIDType.offset; }
   private: FieldNestedPartySubIDType fieldNestedPartySubIDType;

};

class GroupNestedPartyIDs : public MessageBase
{
  
// Methods
   public:
   GroupNestedPartyIDs();
   typedef std::vector<GroupNestedPartyIDs> Array;
   void reset();
   static const char * getMessageName();
   static offset_t scan( Array & arr, const char * fix, unsigned len );
   static offset_t skip( const char * fix, unsigned len );
   const char * getFieldValue( unsigned tag ) const;
   static FieldDepth getFieldDepth( raw_tag_t tag );
   static const std::vector<unsigned> & getKnownFields();
   private: static GetDepthMethod groupGetDepthMethods[];
   
   public:
   bool isSetNestedPartyID() const { return fieldNestedPartyID.offset >= 0; }
   FieldNestedPartyID::ValueType getNestedPartyID() const { return fieldNestedPartyID.getValue( buf ); }
   const char * ptrToNestedPartyID() const { return buf + fieldNestedPartyID.offset; }
   private: FieldNestedPartyID fieldNestedPartyID;

   public:
   bool isSetNestedPartyIDSource() const { return fieldNestedPartyIDSource.offset >= 0; }
   FieldNestedPartyIDSource::ValueType getNestedPartyIDSource() const { return fieldNestedPartyIDSource.getValue( buf ); }
   const char * ptrToNestedPartyIDSource() const { return buf + fieldNestedPartyIDSource.offset; }
   private: FieldNestedPartyIDSource fieldNestedPartyIDSource;

   public:
   bool isSetNestedPartyRole() const { return fieldNestedPartyRole.offset >= 0; }
   FieldNestedPartyRole::ValueType getNestedPartyRole() const { return fieldNestedPartyRole.getValue( buf ); }
   const char * ptrToNestedPartyRole() const { return buf + fieldNestedPartyRole.offset; }
   private: FieldNestedPartyRole fieldNestedPartyRole;

   public:
   bool isSetNoNestedPartySubIDs() const { return fieldNoNestedPartySubIDs.offset >= 0; }
   FieldNoNestedPartySubIDs::ValueType getNoNestedPartySubIDs() const { return fieldNoNestedPartySubIDs.getValue( buf ); }
   const char * ptrToNoNestedPartySubIDs() const { return buf + fieldNoNestedPartySubIDs.offset; }
   private: FieldNoNestedPartySubIDs fieldNoNestedPartySubIDs;
  
   public:
   std::size_t getGroupCountNestedPartySubIDs() const { return groupsNestedPartySubIDs.size(); } 
   const GroupNestedPartySubIDs & getGroupNestedPartySubIDs( std::size_t idx ) const { return groupsNestedPartySubIDs[ idx ]; } 
   private: GroupNestedPartySubIDs::Array groupsNestedPartySubIDs{ 10 };

};

class GroupLegs : public MessageBase
{
  
// Methods
   public:
   GroupLegs();
   typedef std::vector<GroupLegs> Array;
   void reset();
   static const char * getMessageName();
   static offset_t scan( Array & arr, const char * fix, unsigned len );
   static offset_t skip( const char * fix, unsigned len );
   const char * getFieldValue( unsigned tag ) const;
   static FieldDepth getFieldDepth( raw_tag_t tag );
   static const std::vector<unsigned> & getKnownFields();
   private: static GetDepthMethod groupGetDepthMethods[];
   
   public:
   bool isSetLegSymbol() const { return fieldLegSymbol.offset >= 0; }
   FieldLegSymbol::ValueType getLegSymbol() const { return fieldLegSymbol.getValue( buf ); }
   const char * ptrToLegSymbol() const { return buf + fieldLegSymbol.offset; }
   private: FieldLegSymbol fieldLegSymbol;

   public:
   bool isSetLegSide() const { return fieldLegSide.offset >= 0; }
   FieldLegSide::ValueType getLegSide() const { return fieldLegSide.getValue( buf ); }
   const char * ptrToLegSide() const { return buf + fieldLegSide.offset; }
   private: FieldLegSide fieldLegSide;

   public:
   bool isSetLegQty() const { return fieldLegQty.offset >= 0; }
   FieldLegQty::ValueType getLegQty() const { return fieldLegQty.getValue( buf ); }
   const char * ptrToLegQty() const { return buf + fieldLegQty.offset; }
   private: FieldLegQty fieldLegQty;

   public:
   bool isSetNoLegStipulations() const { return fieldNoLegStipulations.offset >= 0; }
   FieldNoLegStipulations::ValueType getNoLegStipulations() const { return fieldNoLegStipulations.getValue( buf ); }
   const char * ptrToNoLegStipulations() const { return buf + fieldNoLegStipulations.offset; }
   private: FieldNoLegStipulations fieldNoLegStipulations;
  
   public:
   std::size_t getGroupCountLegStipulations() const { return groupsLegStipulations.size(); } 
   const GroupLegStipulations & getGroupLegStipulations( std::size_t idx ) const { return groupsLegStipulations[ idx ]; } 
   private: GroupLegStipulations::Array groupsLegStipulations{ 10 };

   public:
   bool isSetLegPositionEffect() const { return fieldLegPositionEffect.offset >= 0; }
   FieldLegPositionEffect::ValueType getLegPositionEffect() const { return fieldLegPositionEffect.getValue( buf ); }
   const char * ptrToLegPositionEffect() const { return buf + fieldLegPositionEffect.offset; }
   private: FieldLegPositionEffect fieldLegPositionEffect;

   public:
   bool isSetNoNestedPartyIDs() const { return fieldNoNestedPartyIDs.offset >= 0; }
   FieldNoNestedPartyIDs::ValueType getNoNestedPartyIDs() const { return fieldNoNestedPartyIDs.getValue( buf ); }
   const char * ptrToNoNestedPartyIDs() const { return buf + fieldNoNestedPartyIDs.offset; }
   private: FieldNoNestedPartyIDs fieldNoNestedPartyIDs;
  
   public:
   std::size_t getGroupCountNestedPartyIDs() const { return groupsNestedPartyIDs.size(); } 
   const GroupNestedPartyIDs & getGroupNestedPartyIDs( std::size_t idx ) const { return groupsNestedPartyIDs[ idx ]; } 
   private: GroupNestedPartyIDs::Array groupsNestedPartyIDs{ 10 };

   public:
   bool isSetLegRefID() const { return fieldLegRefID.offset >= 0; }
   FieldLegRefID::ValueType getLegRefID() const { return fieldLegRefID.getValue( buf ); }
   const char * ptrToLegRefID() const { return buf + fieldLegRefID.offset; }
   private: FieldLegRefID fieldLegRefID;

   public:
   bool isSetLegPrice() const { return fieldLegPrice.offset >= 0; }
   FieldLegPrice::ValueType getLegPrice() const { return fieldLegPrice.getValue( buf ); }
   const char * ptrToLegPrice() const { return buf + fieldLegPrice.offset; }
   private: FieldLegPrice fieldLegPrice;

   public:
   bool isSetLegLastPx() const { return fieldLegLastPx.offset >= 0; }
   FieldLegLastPx::ValueType getLegLastPx() const { return fieldLegLastPx.getValue( buf ); }
   const char * ptrToLegLastPx() const { return buf + fieldLegLastPx.offset; }
   private: FieldLegLastPx fieldLegLastPx;

};
// end of Groups.hxx

} // namespace order

#endif /* order_GROUPS_H */

