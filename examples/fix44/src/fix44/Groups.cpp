#include <vector>

#include <fix44/Groups.h>


namespace fix44
{

// start of Groups.cxx

// Generated

// -------------------------------------- getMessageName -------------------------------

const char * GroupLegStipulations::getMessageName(){
     return "LegStipulations";
}


const char * GroupEvents::getMessageName(){
     return "Events";
}


const char * GroupLegSecurityAltID::getMessageName(){
     return "LegSecurityAltID";
}


const char * GroupCapacities::getMessageName(){
     return "Capacities";
}


const char * GroupNested3PartySubIDs::getMessageName(){
     return "Nested3PartySubIDs";
}


const char * GroupPartySubIDs::getMessageName(){
     return "PartySubIDs";
}


const char * GroupNested2PartySubIDs::getMessageName(){
     return "Nested2PartySubIDs";
}


const char * GroupNested2PartyIDs::getMessageName(){
     return "Nested2PartyIDs";
}


const char * GroupHops::getMessageName(){
     return "Hops";
}


const char * GroupCollInquiryQualifier::getMessageName(){
     return "CollInquiryQualifier";
}


const char * GroupPartyIDs::getMessageName(){
     return "PartyIDs";
}


const char * GroupAllocs::getMessageName(){
     return "Allocs";
}


const char * GroupTradingSessions::getMessageName(){
     return "TradingSessions";
}


const char * GroupSecurityAltID::getMessageName(){
     return "SecurityAltID";
}


const char * GroupUnderlyingSecurityAltID::getMessageName(){
     return "UnderlyingSecurityAltID";
}


const char * GroupUnderlyingStips::getMessageName(){
     return "UnderlyingStips";
}


const char * GroupUnderlyings::getMessageName(){
     return "Underlyings";
}


const char * GroupStipulations::getMessageName(){
     return "Stipulations";
}


const char * GroupOrders::getMessageName(){
     return "Orders";
}


const char * GroupSettlPartySubIDs::getMessageName(){
     return "SettlPartySubIDs";
}


const char * GroupSettlPartyIDs::getMessageName(){
     return "SettlPartyIDs";
}


const char * GroupDlvyInst::getMessageName(){
     return "DlvyInst";
}


const char * GroupClearingInstructions::getMessageName(){
     return "ClearingInstructions";
}


const char * GroupNestedPartySubIDs::getMessageName(){
     return "NestedPartySubIDs";
}


const char * GroupNestedPartyIDs::getMessageName(){
     return "NestedPartyIDs";
}


const char * GroupLegs::getMessageName(){
     return "Legs";
}


const char * GroupQuoteEntries::getMessageName(){
     return "QuoteEntries";
}


const char * GroupQuoteSets::getMessageName(){
     return "QuoteSets";
}


const char * GroupSecurityTypes::getMessageName(){
     return "SecurityTypes";
}


const char * GroupNested3PartyIDs::getMessageName(){
     return "Nested3PartyIDs";
}


const char * GroupPositions::getMessageName(){
     return "Positions";
}


const char * GroupAffectedOrders::getMessageName(){
     return "AffectedOrders";
}


const char * GroupExecs::getMessageName(){
     return "Execs";
}


const char * GroupMsgTypes::getMessageName(){
     return "MsgTypes";
}


const char * GroupBidComponents::getMessageName(){
     return "BidComponents";
}


const char * GroupSettlInst::getMessageName(){
     return "SettlInst";
}


const char * GroupInstrAttrib::getMessageName(){
     return "InstrAttrib";
}


const char * GroupMiscFees::getMessageName(){
     return "MiscFees";
}


const char * GroupQuoteQualifiers::getMessageName(){
     return "QuoteQualifiers";
}


const char * GroupDistribInsts::getMessageName(){
     return "DistribInsts";
}


const char * GroupTrdRegTimestamps::getMessageName(){
     return "TrdRegTimestamps";
}


const char * GroupAltMDSource::getMessageName(){
     return "AltMDSource";
}


const char * GroupSides::getMessageName(){
     return "Sides";
}


const char * GroupRoutingIDs::getMessageName(){
     return "RoutingIDs";
}


const char * GroupPosAmt::getMessageName(){
     return "PosAmt";
}


const char * GroupLinesOfText::getMessageName(){
     return "LinesOfText";
}


const char * GroupIOIQualifiers::getMessageName(){
     return "IOIQualifiers";
}


const char * GroupDates::getMessageName(){
     return "Dates";
}


const char * GroupMDEntryTypes::getMessageName(){
     return "MDEntryTypes";
}


const char * GroupRelatedSym::getMessageName(){
     return "RelatedSym";
}


const char * GroupContraBrokers::getMessageName(){
     return "ContraBrokers";
}


const char * GroupTrades::getMessageName(){
     return "Trades";
}


const char * GroupStrikes::getMessageName(){
     return "Strikes";
}


const char * GroupBidDescriptors::getMessageName(){
     return "BidDescriptors";
}


const char * GroupCompIDs::getMessageName(){
     return "CompIDs";
}


const char * GroupLegAllocs::getMessageName(){
     return "LegAllocs";
}


const char * GroupRegistDtls::getMessageName(){
     return "RegistDtls";
}


const char * GroupContAmts::getMessageName(){
     return "ContAmts";
}


const char * GroupMDEntries::getMessageName(){
     return "MDEntries";
}


// -------------------------------------- constructor ----------------------------------------

GroupLegStipulations::GroupLegStipulations(){

}

GroupEvents::GroupEvents(){

}

GroupLegSecurityAltID::GroupLegSecurityAltID(){

}

GroupCapacities::GroupCapacities(){

}

GroupNested3PartySubIDs::GroupNested3PartySubIDs(){

}

GroupPartySubIDs::GroupPartySubIDs(){

}

GroupNested2PartySubIDs::GroupNested2PartySubIDs(){

}

GroupNested2PartyIDs::GroupNested2PartyIDs(){

     groupsNested2PartySubIDs.assign( 10, {} );

}

GroupHops::GroupHops(){

}

GroupCollInquiryQualifier::GroupCollInquiryQualifier(){

}

GroupPartyIDs::GroupPartyIDs(){

     groupsPartySubIDs.assign( 10, {} );

}

GroupAllocs::GroupAllocs(){

}

GroupTradingSessions::GroupTradingSessions(){

}

GroupSecurityAltID::GroupSecurityAltID(){

}

GroupUnderlyingSecurityAltID::GroupUnderlyingSecurityAltID(){

}

GroupUnderlyingStips::GroupUnderlyingStips(){

}

GroupUnderlyings::GroupUnderlyings(){

     groupsUnderlyingSecurityAltID.assign( 10, {} );

     groupsUnderlyingStips.assign( 10, {} );

}

GroupStipulations::GroupStipulations(){

}

GroupOrders::GroupOrders(){

     groupsPartyIDs.assign( 10, {} );

     groupsAllocs.assign( 10, {} );

     groupsTradingSessions.assign( 10, {} );

     groupsSecurityAltID.assign( 10, {} );

     groupsEvents.assign( 10, {} );

     groupsUnderlyings.assign( 10, {} );

     groupsStipulations.assign( 10, {} );

}

GroupSettlPartySubIDs::GroupSettlPartySubIDs(){

}

GroupSettlPartyIDs::GroupSettlPartyIDs(){

     groupsSettlPartySubIDs.assign( 10, {} );

}

GroupDlvyInst::GroupDlvyInst(){

     groupsSettlPartyIDs.assign( 10, {} );

}

GroupClearingInstructions::GroupClearingInstructions(){

}

GroupNestedPartySubIDs::GroupNestedPartySubIDs(){

}

GroupNestedPartyIDs::GroupNestedPartyIDs(){

     groupsNestedPartySubIDs.assign( 10, {} );

}

GroupLegs::GroupLegs(){

     groupsLegSecurityAltID.assign( 10, {} );

     groupsLegStipulations.assign( 10, {} );

     groupsNestedPartyIDs.assign( 10, {} );

}

GroupQuoteEntries::GroupQuoteEntries(){

     groupsSecurityAltID.assign( 10, {} );

     groupsEvents.assign( 10, {} );

     groupsUnderlyings.assign( 10, {} );

     groupsLegs.assign( 10, {} );

}

GroupQuoteSets::GroupQuoteSets(){

     groupsUnderlyingSecurityAltID.assign( 10, {} );

     groupsUnderlyingStips.assign( 10, {} );

     groupsQuoteEntries.assign( 10, {} );

}

GroupSecurityTypes::GroupSecurityTypes(){

}

GroupNested3PartyIDs::GroupNested3PartyIDs(){

     groupsNested3PartySubIDs.assign( 10, {} );

}

GroupPositions::GroupPositions(){

     groupsNestedPartyIDs.assign( 10, {} );

}

GroupAffectedOrders::GroupAffectedOrders(){

}

GroupExecs::GroupExecs(){

}

GroupMsgTypes::GroupMsgTypes(){

}

GroupBidComponents::GroupBidComponents(){

}

GroupSettlInst::GroupSettlInst(){

     groupsPartyIDs.assign( 10, {} );

     groupsDlvyInst.assign( 10, {} );

}

GroupInstrAttrib::GroupInstrAttrib(){

}

GroupMiscFees::GroupMiscFees(){

}

GroupQuoteQualifiers::GroupQuoteQualifiers(){

}

GroupDistribInsts::GroupDistribInsts(){

}

GroupTrdRegTimestamps::GroupTrdRegTimestamps(){

}

GroupAltMDSource::GroupAltMDSource(){

}

GroupSides::GroupSides(){

     groupsPartyIDs.assign( 10, {} );

}

GroupRoutingIDs::GroupRoutingIDs(){

}

GroupPosAmt::GroupPosAmt(){

}

GroupLinesOfText::GroupLinesOfText(){

}

GroupIOIQualifiers::GroupIOIQualifiers(){

}

GroupDates::GroupDates(){

}

GroupMDEntryTypes::GroupMDEntryTypes(){

}

GroupRelatedSym::GroupRelatedSym(){

     groupsSecurityAltID.assign( 10, {} );

     groupsEvents.assign( 10, {} );

}

GroupContraBrokers::GroupContraBrokers(){

}

GroupTrades::GroupTrades(){

}

GroupStrikes::GroupStrikes(){

     groupsSecurityAltID.assign( 10, {} );

     groupsEvents.assign( 10, {} );

}

GroupBidDescriptors::GroupBidDescriptors(){

}

GroupCompIDs::GroupCompIDs(){

}

GroupLegAllocs::GroupLegAllocs(){

     groupsNested2PartyIDs.assign( 10, {} );

}

GroupRegistDtls::GroupRegistDtls(){

     groupsNestedPartyIDs.assign( 10, {} );

}

GroupContAmts::GroupContAmts(){

}

GroupMDEntries::GroupMDEntries(){

}


// -------------------------------------- scan ----------------------------------------

offset_t GroupLegStipulations::scan( Array & arr, const char * fix, unsigned len ){
 GroupLegStipulations * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldLegStipulationType::RAW :
     PRINT_FIELD(LegStipulationType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldLegStipulationType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldLegStipulationValue::RAW :
     PRINT_FIELD(LegStipulationValue) 
     group->fieldLegStipulationValue.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupEvents::scan( Array & arr, const char * fix, unsigned len ){
 GroupEvents * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldEventType::RAW :
     PRINT_FIELD(EventType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldEventType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldEventDate::RAW :
     PRINT_FIELD(EventDate) 
     group->fieldEventDate.offset = gpos;
     break;

   case FieldEventPx::RAW :
     PRINT_FIELD(EventPx) 
     group->fieldEventPx.offset = gpos;
     break;

   case FieldEventText::RAW :
     PRINT_FIELD(EventText) 
     group->fieldEventText.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLegSecurityAltID::scan( Array & arr, const char * fix, unsigned len ){
 GroupLegSecurityAltID * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldLegSecurityAltID::RAW :
     PRINT_FIELD(LegSecurityAltID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldLegSecurityAltID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldLegSecurityAltIDSource::RAW :
     PRINT_FIELD(LegSecurityAltIDSource) 
     group->fieldLegSecurityAltIDSource.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupCapacities::scan( Array & arr, const char * fix, unsigned len ){
 GroupCapacities * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldOrderCapacity::RAW :
     PRINT_FIELD(OrderCapacity) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldOrderCapacity.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldOrderRestrictions::RAW :
     PRINT_FIELD(OrderRestrictions) 
     group->fieldOrderRestrictions.offset = gpos;
     break;

   case FieldOrderCapacityQty::RAW :
     PRINT_FIELD(OrderCapacityQty) 
     group->fieldOrderCapacityQty.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested3PartySubIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupNested3PartySubIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldNested3PartySubID::RAW :
     PRINT_FIELD(Nested3PartySubID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldNested3PartySubID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldNested3PartySubIDType::RAW :
     PRINT_FIELD(Nested3PartySubIDType) 
     group->fieldNested3PartySubIDType.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPartySubIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupPartySubIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldPartySubID::RAW :
     PRINT_FIELD(PartySubID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldPartySubID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldPartySubIDType::RAW :
     PRINT_FIELD(PartySubIDType) 
     group->fieldPartySubIDType.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested2PartySubIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupNested2PartySubIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldNested2PartySubID::RAW :
     PRINT_FIELD(Nested2PartySubID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldNested2PartySubID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldNested2PartySubIDType::RAW :
     PRINT_FIELD(Nested2PartySubIDType) 
     group->fieldNested2PartySubIDType.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested2PartyIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupNested2PartyIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldNested2PartyID::RAW :
     PRINT_FIELD(Nested2PartyID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldNested2PartyID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldNested2PartyIDSource::RAW :
     PRINT_FIELD(Nested2PartyIDSource) 
     group->fieldNested2PartyIDSource.offset = gpos;
     break;

   case FieldNested2PartyRole::RAW :
     PRINT_FIELD(Nested2PartyRole) 
     group->fieldNested2PartyRole.offset = gpos;
     break;

   case FieldNoNested2PartySubIDs::RAW :
     PRINT_FIELD(NoNested2PartySubIDs) 
     group->fieldNoNested2PartySubIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNested2PartySubIDs::scan( group->groupsNested2PartySubIDs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupHops::scan( Array & arr, const char * fix, unsigned len ){
 GroupHops * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldHopCompID::RAW :
     PRINT_FIELD(HopCompID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldHopCompID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldHopSendingTime::RAW :
     PRINT_FIELD(HopSendingTime) 
     group->fieldHopSendingTime.offset = gpos;
     break;

   case FieldHopRefID::RAW :
     PRINT_FIELD(HopRefID) 
     group->fieldHopRefID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupCollInquiryQualifier::scan( Array & arr, const char * fix, unsigned len ){
 GroupCollInquiryQualifier * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldCollInquiryQualifier::RAW :
     PRINT_FIELD(CollInquiryQualifier) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldCollInquiryQualifier.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPartyIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupPartyIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldPartyID::RAW :
     PRINT_FIELD(PartyID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldPartyID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldPartyIDSource::RAW :
     PRINT_FIELD(PartyIDSource) 
     group->fieldPartyIDSource.offset = gpos;
     break;

   case FieldPartyRole::RAW :
     PRINT_FIELD(PartyRole) 
     group->fieldPartyRole.offset = gpos;
     break;

   case FieldNoPartySubIDs::RAW :
     PRINT_FIELD(NoPartySubIDs) 
     group->fieldNoPartySubIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartySubIDs::scan( group->groupsPartySubIDs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupAllocs::scan( Array & arr, const char * fix, unsigned len ){
 GroupAllocs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldAllocAccount::RAW :
     PRINT_FIELD(AllocAccount) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldAllocAccount.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldAllocAcctIDSource::RAW :
     PRINT_FIELD(AllocAcctIDSource) 
     group->fieldAllocAcctIDSource.offset = gpos;
     break;

   case FieldAllocPrice::RAW :
     PRINT_FIELD(AllocPrice) 
     group->fieldAllocPrice.offset = gpos;
     break;

   case FieldIndividualAllocID::RAW :
     PRINT_FIELD(IndividualAllocID) 
     group->fieldIndividualAllocID.offset = gpos;
     break;

   case FieldIndividualAllocRejCode::RAW :
     PRINT_FIELD(IndividualAllocRejCode) 
     group->fieldIndividualAllocRejCode.offset = gpos;
     break;

   case FieldAllocText::RAW :
     PRINT_FIELD(AllocText) 
     group->fieldAllocText.offset = gpos;
     break;

   case FieldEncodedAllocTextLen::RAW :
     PRINT_FIELD(EncodedAllocTextLen) 
     group->fieldEncodedAllocTextLen.offset = gpos;
     break;

   case FieldEncodedAllocText::RAW :
     PRINT_FIELD(EncodedAllocText) 
     group->fieldEncodedAllocText.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupTradingSessions::scan( Array & arr, const char * fix, unsigned len ){
 GroupTradingSessions * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldTradingSessionID::RAW :
     PRINT_FIELD(TradingSessionID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldTradingSessionID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldTradingSessionSubID::RAW :
     PRINT_FIELD(TradingSessionSubID) 
     group->fieldTradingSessionSubID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSecurityAltID::scan( Array & arr, const char * fix, unsigned len ){
 GroupSecurityAltID * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSecurityAltID::RAW :
     PRINT_FIELD(SecurityAltID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSecurityAltID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSecurityAltIDSource::RAW :
     PRINT_FIELD(SecurityAltIDSource) 
     group->fieldSecurityAltIDSource.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupUnderlyingSecurityAltID::scan( Array & arr, const char * fix, unsigned len ){
 GroupUnderlyingSecurityAltID * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldUnderlyingSecurityAltID::RAW :
     PRINT_FIELD(UnderlyingSecurityAltID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldUnderlyingSecurityAltID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldUnderlyingSecurityAltIDSource::RAW :
     PRINT_FIELD(UnderlyingSecurityAltIDSource) 
     group->fieldUnderlyingSecurityAltIDSource.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupUnderlyingStips::scan( Array & arr, const char * fix, unsigned len ){
 GroupUnderlyingStips * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldUnderlyingStipType::RAW :
     PRINT_FIELD(UnderlyingStipType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldUnderlyingStipType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldUnderlyingStipValue::RAW :
     PRINT_FIELD(UnderlyingStipValue) 
     group->fieldUnderlyingStipValue.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupUnderlyings::scan( Array & arr, const char * fix, unsigned len ){
 GroupUnderlyings * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldUnderlyingSymbol::RAW :
     PRINT_FIELD(UnderlyingSymbol) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldUnderlyingSymbol.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldUnderlyingSymbolSfx::RAW :
     PRINT_FIELD(UnderlyingSymbolSfx) 
     group->fieldUnderlyingSymbolSfx.offset = gpos;
     break;

   case FieldUnderlyingSecurityID::RAW :
     PRINT_FIELD(UnderlyingSecurityID) 
     group->fieldUnderlyingSecurityID.offset = gpos;
     break;

   case FieldUnderlyingSecurityIDSource::RAW :
     PRINT_FIELD(UnderlyingSecurityIDSource) 
     group->fieldUnderlyingSecurityIDSource.offset = gpos;
     break;

   case FieldNoUnderlyingSecurityAltID::RAW :
     PRINT_FIELD(NoUnderlyingSecurityAltID) 
     group->fieldNoUnderlyingSecurityAltID.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingSecurityAltID::scan( group->groupsUnderlyingSecurityAltID, fix+pos, len - pos );
     break;

   case FieldUnderlyingProduct::RAW :
     PRINT_FIELD(UnderlyingProduct) 
     group->fieldUnderlyingProduct.offset = gpos;
     break;

   case FieldUnderlyingCFICode::RAW :
     PRINT_FIELD(UnderlyingCFICode) 
     group->fieldUnderlyingCFICode.offset = gpos;
     break;

   case FieldUnderlyingSecurityType::RAW :
     PRINT_FIELD(UnderlyingSecurityType) 
     group->fieldUnderlyingSecurityType.offset = gpos;
     break;

   case FieldUnderlyingSecuritySubType::RAW :
     PRINT_FIELD(UnderlyingSecuritySubType) 
     group->fieldUnderlyingSecuritySubType.offset = gpos;
     break;

   case FieldUnderlyingMaturityMonthYear::RAW :
     PRINT_FIELD(UnderlyingMaturityMonthYear) 
     group->fieldUnderlyingMaturityMonthYear.offset = gpos;
     break;

   case FieldUnderlyingMaturityDate::RAW :
     PRINT_FIELD(UnderlyingMaturityDate) 
     group->fieldUnderlyingMaturityDate.offset = gpos;
     break;

   case FieldUnderlyingPutOrCall::RAW :
     PRINT_FIELD(UnderlyingPutOrCall) 
     group->fieldUnderlyingPutOrCall.offset = gpos;
     break;

   case FieldUnderlyingCouponPaymentDate::RAW :
     PRINT_FIELD(UnderlyingCouponPaymentDate) 
     group->fieldUnderlyingCouponPaymentDate.offset = gpos;
     break;

   case FieldUnderlyingIssueDate::RAW :
     PRINT_FIELD(UnderlyingIssueDate) 
     group->fieldUnderlyingIssueDate.offset = gpos;
     break;

   case FieldUnderlyingRepoCollateralSecurityType::RAW :
     PRINT_FIELD(UnderlyingRepoCollateralSecurityType) 
     group->fieldUnderlyingRepoCollateralSecurityType.offset = gpos;
     break;

   case FieldUnderlyingRepurchaseTerm::RAW :
     PRINT_FIELD(UnderlyingRepurchaseTerm) 
     group->fieldUnderlyingRepurchaseTerm.offset = gpos;
     break;

   case FieldUnderlyingRepurchaseRate::RAW :
     PRINT_FIELD(UnderlyingRepurchaseRate) 
     group->fieldUnderlyingRepurchaseRate.offset = gpos;
     break;

   case FieldUnderlyingFactor::RAW :
     PRINT_FIELD(UnderlyingFactor) 
     group->fieldUnderlyingFactor.offset = gpos;
     break;

   case FieldUnderlyingCreditRating::RAW :
     PRINT_FIELD(UnderlyingCreditRating) 
     group->fieldUnderlyingCreditRating.offset = gpos;
     break;

   case FieldUnderlyingInstrRegistry::RAW :
     PRINT_FIELD(UnderlyingInstrRegistry) 
     group->fieldUnderlyingInstrRegistry.offset = gpos;
     break;

   case FieldUnderlyingCountryOfIssue::RAW :
     PRINT_FIELD(UnderlyingCountryOfIssue) 
     group->fieldUnderlyingCountryOfIssue.offset = gpos;
     break;

   case FieldUnderlyingStateOrProvinceOfIssue::RAW :
     PRINT_FIELD(UnderlyingStateOrProvinceOfIssue) 
     group->fieldUnderlyingStateOrProvinceOfIssue.offset = gpos;
     break;

   case FieldUnderlyingLocaleOfIssue::RAW :
     PRINT_FIELD(UnderlyingLocaleOfIssue) 
     group->fieldUnderlyingLocaleOfIssue.offset = gpos;
     break;

   case FieldUnderlyingRedemptionDate::RAW :
     PRINT_FIELD(UnderlyingRedemptionDate) 
     group->fieldUnderlyingRedemptionDate.offset = gpos;
     break;

   case FieldUnderlyingStrikePrice::RAW :
     PRINT_FIELD(UnderlyingStrikePrice) 
     group->fieldUnderlyingStrikePrice.offset = gpos;
     break;

   case FieldUnderlyingStrikeCurrency::RAW :
     PRINT_FIELD(UnderlyingStrikeCurrency) 
     group->fieldUnderlyingStrikeCurrency.offset = gpos;
     break;

   case FieldUnderlyingOptAttribute::RAW :
     PRINT_FIELD(UnderlyingOptAttribute) 
     group->fieldUnderlyingOptAttribute.offset = gpos;
     break;

   case FieldUnderlyingContractMultiplier::RAW :
     PRINT_FIELD(UnderlyingContractMultiplier) 
     group->fieldUnderlyingContractMultiplier.offset = gpos;
     break;

   case FieldUnderlyingCouponRate::RAW :
     PRINT_FIELD(UnderlyingCouponRate) 
     group->fieldUnderlyingCouponRate.offset = gpos;
     break;

   case FieldUnderlyingSecurityExchange::RAW :
     PRINT_FIELD(UnderlyingSecurityExchange) 
     group->fieldUnderlyingSecurityExchange.offset = gpos;
     break;

   case FieldUnderlyingIssuer::RAW :
     PRINT_FIELD(UnderlyingIssuer) 
     group->fieldUnderlyingIssuer.offset = gpos;
     break;

   case FieldEncodedUnderlyingIssuerLen::RAW :
     PRINT_FIELD(EncodedUnderlyingIssuerLen) 
     group->fieldEncodedUnderlyingIssuerLen.offset = gpos;
     break;

   case FieldEncodedUnderlyingIssuer::RAW :
     PRINT_FIELD(EncodedUnderlyingIssuer) 
     group->fieldEncodedUnderlyingIssuer.offset = gpos;
     break;

   case FieldUnderlyingSecurityDesc::RAW :
     PRINT_FIELD(UnderlyingSecurityDesc) 
     group->fieldUnderlyingSecurityDesc.offset = gpos;
     break;

   case FieldEncodedUnderlyingSecurityDescLen::RAW :
     PRINT_FIELD(EncodedUnderlyingSecurityDescLen) 
     group->fieldEncodedUnderlyingSecurityDescLen.offset = gpos;
     break;

   case FieldEncodedUnderlyingSecurityDesc::RAW :
     PRINT_FIELD(EncodedUnderlyingSecurityDesc) 
     group->fieldEncodedUnderlyingSecurityDesc.offset = gpos;
     break;

   case FieldUnderlyingCPProgram::RAW :
     PRINT_FIELD(UnderlyingCPProgram) 
     group->fieldUnderlyingCPProgram.offset = gpos;
     break;

   case FieldUnderlyingCPRegType::RAW :
     PRINT_FIELD(UnderlyingCPRegType) 
     group->fieldUnderlyingCPRegType.offset = gpos;
     break;

   case FieldUnderlyingCurrency::RAW :
     PRINT_FIELD(UnderlyingCurrency) 
     group->fieldUnderlyingCurrency.offset = gpos;
     break;

   case FieldUnderlyingQty::RAW :
     PRINT_FIELD(UnderlyingQty) 
     group->fieldUnderlyingQty.offset = gpos;
     break;

   case FieldUnderlyingPx::RAW :
     PRINT_FIELD(UnderlyingPx) 
     group->fieldUnderlyingPx.offset = gpos;
     break;

   case FieldUnderlyingDirtyPrice::RAW :
     PRINT_FIELD(UnderlyingDirtyPrice) 
     group->fieldUnderlyingDirtyPrice.offset = gpos;
     break;

   case FieldUnderlyingEndPrice::RAW :
     PRINT_FIELD(UnderlyingEndPrice) 
     group->fieldUnderlyingEndPrice.offset = gpos;
     break;

   case FieldUnderlyingStartValue::RAW :
     PRINT_FIELD(UnderlyingStartValue) 
     group->fieldUnderlyingStartValue.offset = gpos;
     break;

   case FieldUnderlyingCurrentValue::RAW :
     PRINT_FIELD(UnderlyingCurrentValue) 
     group->fieldUnderlyingCurrentValue.offset = gpos;
     break;

   case FieldUnderlyingEndValue::RAW :
     PRINT_FIELD(UnderlyingEndValue) 
     group->fieldUnderlyingEndValue.offset = gpos;
     break;

   case FieldNoUnderlyingStips::RAW :
     PRINT_FIELD(NoUnderlyingStips) 
     group->fieldNoUnderlyingStips.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingStips::scan( group->groupsUnderlyingStips, fix+pos, len - pos );
     break;

   case FieldUnderlyingSettlPrice::RAW :
     PRINT_FIELD(UnderlyingSettlPrice) 
     group->fieldUnderlyingSettlPrice.offset = gpos;
     break;

   case FieldUnderlyingSettlPriceType::RAW :
     PRINT_FIELD(UnderlyingSettlPriceType) 
     group->fieldUnderlyingSettlPriceType.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupStipulations::scan( Array & arr, const char * fix, unsigned len ){
 GroupStipulations * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldStipulationType::RAW :
     PRINT_FIELD(StipulationType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldStipulationType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldStipulationValue::RAW :
     PRINT_FIELD(StipulationValue) 
     group->fieldStipulationValue.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupOrders::scan( Array & arr, const char * fix, unsigned len ){
 GroupOrders * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldClOrdID::RAW :
     PRINT_FIELD(ClOrdID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldClOrdID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSecondaryClOrdID::RAW :
     PRINT_FIELD(SecondaryClOrdID) 
     group->fieldSecondaryClOrdID.offset = gpos;
     break;

   case FieldListSeqNo::RAW :
     PRINT_FIELD(ListSeqNo) 
     group->fieldListSeqNo.offset = gpos;
     break;

   case FieldClOrdLinkID::RAW :
     PRINT_FIELD(ClOrdLinkID) 
     group->fieldClOrdLinkID.offset = gpos;
     break;

   case FieldSettlInstMode::RAW :
     PRINT_FIELD(SettlInstMode) 
     group->fieldSettlInstMode.offset = gpos;
     break;

   case FieldNoPartyIDs::RAW :
     PRINT_FIELD(NoPartyIDs) 
     group->fieldNoPartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartyIDs::scan( group->groupsPartyIDs, fix+pos, len - pos );
     break;

   case FieldTradeOriginationDate::RAW :
     PRINT_FIELD(TradeOriginationDate) 
     group->fieldTradeOriginationDate.offset = gpos;
     break;

   case FieldTradeDate::RAW :
     PRINT_FIELD(TradeDate) 
     group->fieldTradeDate.offset = gpos;
     break;

   case FieldAccount::RAW :
     PRINT_FIELD(Account) 
     group->fieldAccount.offset = gpos;
     break;

   case FieldAcctIDSource::RAW :
     PRINT_FIELD(AcctIDSource) 
     group->fieldAcctIDSource.offset = gpos;
     break;

   case FieldAccountType::RAW :
     PRINT_FIELD(AccountType) 
     group->fieldAccountType.offset = gpos;
     break;

   case FieldDayBookingInst::RAW :
     PRINT_FIELD(DayBookingInst) 
     group->fieldDayBookingInst.offset = gpos;
     break;

   case FieldBookingUnit::RAW :
     PRINT_FIELD(BookingUnit) 
     group->fieldBookingUnit.offset = gpos;
     break;

   case FieldAllocID::RAW :
     PRINT_FIELD(AllocID) 
     group->fieldAllocID.offset = gpos;
     break;

   case FieldPreallocMethod::RAW :
     PRINT_FIELD(PreallocMethod) 
     group->fieldPreallocMethod.offset = gpos;
     break;

   case FieldNoAllocs::RAW :
     PRINT_FIELD(NoAllocs) 
     group->fieldNoAllocs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupAllocs::scan( group->groupsAllocs, fix+pos, len - pos );
     break;

   case FieldSettlType::RAW :
     PRINT_FIELD(SettlType) 
     group->fieldSettlType.offset = gpos;
     break;

   case FieldSettlDate::RAW :
     PRINT_FIELD(SettlDate) 
     group->fieldSettlDate.offset = gpos;
     break;

   case FieldCashMargin::RAW :
     PRINT_FIELD(CashMargin) 
     group->fieldCashMargin.offset = gpos;
     break;

   case FieldClearingFeeIndicator::RAW :
     PRINT_FIELD(ClearingFeeIndicator) 
     group->fieldClearingFeeIndicator.offset = gpos;
     break;

   case FieldHandlInst::RAW :
     PRINT_FIELD(HandlInst) 
     group->fieldHandlInst.offset = gpos;
     break;

   case FieldExecInst::RAW :
     PRINT_FIELD(ExecInst) 
     group->fieldExecInst.offset = gpos;
     break;

   case FieldMinQty::RAW :
     PRINT_FIELD(MinQty) 
     group->fieldMinQty.offset = gpos;
     break;

   case FieldMaxFloor::RAW :
     PRINT_FIELD(MaxFloor) 
     group->fieldMaxFloor.offset = gpos;
     break;

   case FieldExDestination::RAW :
     PRINT_FIELD(ExDestination) 
     group->fieldExDestination.offset = gpos;
     break;

   case FieldNoTradingSessions::RAW :
     PRINT_FIELD(NoTradingSessions) 
     group->fieldNoTradingSessions.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupTradingSessions::scan( group->groupsTradingSessions, fix+pos, len - pos );
     break;

   case FieldProcessCode::RAW :
     PRINT_FIELD(ProcessCode) 
     group->fieldProcessCode.offset = gpos;
     break;

   case FieldSymbol::RAW :
     PRINT_FIELD(Symbol) 
     group->fieldSymbol.offset = gpos;
     break;

   case FieldSymbolSfx::RAW :
     PRINT_FIELD(SymbolSfx) 
     group->fieldSymbolSfx.offset = gpos;
     break;

   case FieldSecurityID::RAW :
     PRINT_FIELD(SecurityID) 
     group->fieldSecurityID.offset = gpos;
     break;

   case FieldSecurityIDSource::RAW :
     PRINT_FIELD(SecurityIDSource) 
     group->fieldSecurityIDSource.offset = gpos;
     break;

   case FieldNoSecurityAltID::RAW :
     PRINT_FIELD(NoSecurityAltID) 
     group->fieldNoSecurityAltID.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::scan( group->groupsSecurityAltID, fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     PRINT_FIELD(Product) 
     group->fieldProduct.offset = gpos;
     break;

   case FieldCFICode::RAW :
     PRINT_FIELD(CFICode) 
     group->fieldCFICode.offset = gpos;
     break;

   case FieldSecurityType::RAW :
     PRINT_FIELD(SecurityType) 
     group->fieldSecurityType.offset = gpos;
     break;

   case FieldSecuritySubType::RAW :
     PRINT_FIELD(SecuritySubType) 
     group->fieldSecuritySubType.offset = gpos;
     break;

   case FieldMaturityMonthYear::RAW :
     PRINT_FIELD(MaturityMonthYear) 
     group->fieldMaturityMonthYear.offset = gpos;
     break;

   case FieldMaturityDate::RAW :
     PRINT_FIELD(MaturityDate) 
     group->fieldMaturityDate.offset = gpos;
     break;

   case FieldPutOrCall::RAW :
     PRINT_FIELD(PutOrCall) 
     group->fieldPutOrCall.offset = gpos;
     break;

   case FieldCouponPaymentDate::RAW :
     PRINT_FIELD(CouponPaymentDate) 
     group->fieldCouponPaymentDate.offset = gpos;
     break;

   case FieldIssueDate::RAW :
     PRINT_FIELD(IssueDate) 
     group->fieldIssueDate.offset = gpos;
     break;

   case FieldRepoCollateralSecurityType::RAW :
     PRINT_FIELD(RepoCollateralSecurityType) 
     group->fieldRepoCollateralSecurityType.offset = gpos;
     break;

   case FieldRepurchaseTerm::RAW :
     PRINT_FIELD(RepurchaseTerm) 
     group->fieldRepurchaseTerm.offset = gpos;
     break;

   case FieldRepurchaseRate::RAW :
     PRINT_FIELD(RepurchaseRate) 
     group->fieldRepurchaseRate.offset = gpos;
     break;

   case FieldFactor::RAW :
     PRINT_FIELD(Factor) 
     group->fieldFactor.offset = gpos;
     break;

   case FieldCreditRating::RAW :
     PRINT_FIELD(CreditRating) 
     group->fieldCreditRating.offset = gpos;
     break;

   case FieldInstrRegistry::RAW :
     PRINT_FIELD(InstrRegistry) 
     group->fieldInstrRegistry.offset = gpos;
     break;

   case FieldCountryOfIssue::RAW :
     PRINT_FIELD(CountryOfIssue) 
     group->fieldCountryOfIssue.offset = gpos;
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     PRINT_FIELD(StateOrProvinceOfIssue) 
     group->fieldStateOrProvinceOfIssue.offset = gpos;
     break;

   case FieldLocaleOfIssue::RAW :
     PRINT_FIELD(LocaleOfIssue) 
     group->fieldLocaleOfIssue.offset = gpos;
     break;

   case FieldRedemptionDate::RAW :
     PRINT_FIELD(RedemptionDate) 
     group->fieldRedemptionDate.offset = gpos;
     break;

   case FieldStrikePrice::RAW :
     PRINT_FIELD(StrikePrice) 
     group->fieldStrikePrice.offset = gpos;
     break;

   case FieldStrikeCurrency::RAW :
     PRINT_FIELD(StrikeCurrency) 
     group->fieldStrikeCurrency.offset = gpos;
     break;

   case FieldOptAttribute::RAW :
     PRINT_FIELD(OptAttribute) 
     group->fieldOptAttribute.offset = gpos;
     break;

   case FieldContractMultiplier::RAW :
     PRINT_FIELD(ContractMultiplier) 
     group->fieldContractMultiplier.offset = gpos;
     break;

   case FieldCouponRate::RAW :
     PRINT_FIELD(CouponRate) 
     group->fieldCouponRate.offset = gpos;
     break;

   case FieldSecurityExchange::RAW :
     PRINT_FIELD(SecurityExchange) 
     group->fieldSecurityExchange.offset = gpos;
     break;

   case FieldIssuer::RAW :
     PRINT_FIELD(Issuer) 
     group->fieldIssuer.offset = gpos;
     break;

   case FieldEncodedIssuerLen::RAW :
     PRINT_FIELD(EncodedIssuerLen) 
     group->fieldEncodedIssuerLen.offset = gpos;
     break;

   case FieldEncodedIssuer::RAW :
     PRINT_FIELD(EncodedIssuer) 
     group->fieldEncodedIssuer.offset = gpos;
     break;

   case FieldSecurityDesc::RAW :
     PRINT_FIELD(SecurityDesc) 
     group->fieldSecurityDesc.offset = gpos;
     break;

   case FieldEncodedSecurityDescLen::RAW :
     PRINT_FIELD(EncodedSecurityDescLen) 
     group->fieldEncodedSecurityDescLen.offset = gpos;
     break;

   case FieldEncodedSecurityDesc::RAW :
     PRINT_FIELD(EncodedSecurityDesc) 
     group->fieldEncodedSecurityDesc.offset = gpos;
     break;

   case FieldPool::RAW :
     PRINT_FIELD(Pool) 
     group->fieldPool.offset = gpos;
     break;

   case FieldContractSettlMonth::RAW :
     PRINT_FIELD(ContractSettlMonth) 
     group->fieldContractSettlMonth.offset = gpos;
     break;

   case FieldCPProgram::RAW :
     PRINT_FIELD(CPProgram) 
     group->fieldCPProgram.offset = gpos;
     break;

   case FieldCPRegType::RAW :
     PRINT_FIELD(CPRegType) 
     group->fieldCPRegType.offset = gpos;
     break;

   case FieldNoEvents::RAW :
     PRINT_FIELD(NoEvents) 
     group->fieldNoEvents.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::scan( group->groupsEvents, fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     PRINT_FIELD(DatedDate) 
     group->fieldDatedDate.offset = gpos;
     break;

   case FieldInterestAccrualDate::RAW :
     PRINT_FIELD(InterestAccrualDate) 
     group->fieldInterestAccrualDate.offset = gpos;
     break;

   case FieldNoUnderlyings::RAW :
     PRINT_FIELD(NoUnderlyings) 
     group->fieldNoUnderlyings.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyings::scan( group->groupsUnderlyings, fix+pos, len - pos );
     break;

   case FieldPrevClosePx::RAW :
     PRINT_FIELD(PrevClosePx) 
     group->fieldPrevClosePx.offset = gpos;
     break;

   case FieldSide::RAW :
     PRINT_FIELD(Side) 
     group->fieldSide.offset = gpos;
     break;

   case FieldSideValueInd::RAW :
     PRINT_FIELD(SideValueInd) 
     group->fieldSideValueInd.offset = gpos;
     break;

   case FieldLocateReqd::RAW :
     PRINT_FIELD(LocateReqd) 
     group->fieldLocateReqd.offset = gpos;
     break;

   case FieldTransactTime::RAW :
     PRINT_FIELD(TransactTime) 
     group->fieldTransactTime.offset = gpos;
     break;

   case FieldNoStipulations::RAW :
     PRINT_FIELD(NoStipulations) 
     group->fieldNoStipulations.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupStipulations::scan( group->groupsStipulations, fix+pos, len - pos );
     break;

   case FieldQtyType::RAW :
     PRINT_FIELD(QtyType) 
     group->fieldQtyType.offset = gpos;
     break;

   case FieldOrderQty::RAW :
     PRINT_FIELD(OrderQty) 
     group->fieldOrderQty.offset = gpos;
     break;

   case FieldCashOrderQty::RAW :
     PRINT_FIELD(CashOrderQty) 
     group->fieldCashOrderQty.offset = gpos;
     break;

   case FieldOrderPercent::RAW :
     PRINT_FIELD(OrderPercent) 
     group->fieldOrderPercent.offset = gpos;
     break;

   case FieldRoundingDirection::RAW :
     PRINT_FIELD(RoundingDirection) 
     group->fieldRoundingDirection.offset = gpos;
     break;

   case FieldRoundingModulus::RAW :
     PRINT_FIELD(RoundingModulus) 
     group->fieldRoundingModulus.offset = gpos;
     break;

   case FieldOrdType::RAW :
     PRINT_FIELD(OrdType) 
     group->fieldOrdType.offset = gpos;
     break;

   case FieldPriceType::RAW :
     PRINT_FIELD(PriceType) 
     group->fieldPriceType.offset = gpos;
     break;

   case FieldPrice::RAW :
     PRINT_FIELD(Price) 
     group->fieldPrice.offset = gpos;
     break;

   case FieldStopPx::RAW :
     PRINT_FIELD(StopPx) 
     group->fieldStopPx.offset = gpos;
     break;

   case FieldSpread::RAW :
     PRINT_FIELD(Spread) 
     group->fieldSpread.offset = gpos;
     break;

   case FieldBenchmarkCurveCurrency::RAW :
     PRINT_FIELD(BenchmarkCurveCurrency) 
     group->fieldBenchmarkCurveCurrency.offset = gpos;
     break;

   case FieldBenchmarkCurveName::RAW :
     PRINT_FIELD(BenchmarkCurveName) 
     group->fieldBenchmarkCurveName.offset = gpos;
     break;

   case FieldBenchmarkCurvePoint::RAW :
     PRINT_FIELD(BenchmarkCurvePoint) 
     group->fieldBenchmarkCurvePoint.offset = gpos;
     break;

   case FieldBenchmarkPrice::RAW :
     PRINT_FIELD(BenchmarkPrice) 
     group->fieldBenchmarkPrice.offset = gpos;
     break;

   case FieldBenchmarkPriceType::RAW :
     PRINT_FIELD(BenchmarkPriceType) 
     group->fieldBenchmarkPriceType.offset = gpos;
     break;

   case FieldBenchmarkSecurityID::RAW :
     PRINT_FIELD(BenchmarkSecurityID) 
     group->fieldBenchmarkSecurityID.offset = gpos;
     break;

   case FieldBenchmarkSecurityIDSource::RAW :
     PRINT_FIELD(BenchmarkSecurityIDSource) 
     group->fieldBenchmarkSecurityIDSource.offset = gpos;
     break;

   case FieldYieldType::RAW :
     PRINT_FIELD(YieldType) 
     group->fieldYieldType.offset = gpos;
     break;

   case FieldYield::RAW :
     PRINT_FIELD(Yield) 
     group->fieldYield.offset = gpos;
     break;

   case FieldYieldCalcDate::RAW :
     PRINT_FIELD(YieldCalcDate) 
     group->fieldYieldCalcDate.offset = gpos;
     break;

   case FieldYieldRedemptionDate::RAW :
     PRINT_FIELD(YieldRedemptionDate) 
     group->fieldYieldRedemptionDate.offset = gpos;
     break;

   case FieldYieldRedemptionPrice::RAW :
     PRINT_FIELD(YieldRedemptionPrice) 
     group->fieldYieldRedemptionPrice.offset = gpos;
     break;

   case FieldYieldRedemptionPriceType::RAW :
     PRINT_FIELD(YieldRedemptionPriceType) 
     group->fieldYieldRedemptionPriceType.offset = gpos;
     break;

   case FieldCurrency::RAW :
     PRINT_FIELD(Currency) 
     group->fieldCurrency.offset = gpos;
     break;

   case FieldComplianceID::RAW :
     PRINT_FIELD(ComplianceID) 
     group->fieldComplianceID.offset = gpos;
     break;

   case FieldSolicitedFlag::RAW :
     PRINT_FIELD(SolicitedFlag) 
     group->fieldSolicitedFlag.offset = gpos;
     break;

   case FieldIOIID::RAW :
     PRINT_FIELD(IOIID) 
     group->fieldIOIID.offset = gpos;
     break;

   case FieldQuoteID::RAW :
     PRINT_FIELD(QuoteID) 
     group->fieldQuoteID.offset = gpos;
     break;

   case FieldTimeInForce::RAW :
     PRINT_FIELD(TimeInForce) 
     group->fieldTimeInForce.offset = gpos;
     break;

   case FieldEffectiveTime::RAW :
     PRINT_FIELD(EffectiveTime) 
     group->fieldEffectiveTime.offset = gpos;
     break;

   case FieldExpireDate::RAW :
     PRINT_FIELD(ExpireDate) 
     group->fieldExpireDate.offset = gpos;
     break;

   case FieldExpireTime::RAW :
     PRINT_FIELD(ExpireTime) 
     group->fieldExpireTime.offset = gpos;
     break;

   case FieldGTBookingInst::RAW :
     PRINT_FIELD(GTBookingInst) 
     group->fieldGTBookingInst.offset = gpos;
     break;

   case FieldCommission::RAW :
     PRINT_FIELD(Commission) 
     group->fieldCommission.offset = gpos;
     break;

   case FieldCommType::RAW :
     PRINT_FIELD(CommType) 
     group->fieldCommType.offset = gpos;
     break;

   case FieldCommCurrency::RAW :
     PRINT_FIELD(CommCurrency) 
     group->fieldCommCurrency.offset = gpos;
     break;

   case FieldFundRenewWaiv::RAW :
     PRINT_FIELD(FundRenewWaiv) 
     group->fieldFundRenewWaiv.offset = gpos;
     break;

   case FieldOrderCapacity::RAW :
     PRINT_FIELD(OrderCapacity) 
     group->fieldOrderCapacity.offset = gpos;
     break;

   case FieldOrderRestrictions::RAW :
     PRINT_FIELD(OrderRestrictions) 
     group->fieldOrderRestrictions.offset = gpos;
     break;

   case FieldCustOrderCapacity::RAW :
     PRINT_FIELD(CustOrderCapacity) 
     group->fieldCustOrderCapacity.offset = gpos;
     break;

   case FieldForexReq::RAW :
     PRINT_FIELD(ForexReq) 
     group->fieldForexReq.offset = gpos;
     break;

   case FieldSettlCurrency::RAW :
     PRINT_FIELD(SettlCurrency) 
     group->fieldSettlCurrency.offset = gpos;
     break;

   case FieldBookingType::RAW :
     PRINT_FIELD(BookingType) 
     group->fieldBookingType.offset = gpos;
     break;

   case FieldText::RAW :
     PRINT_FIELD(Text) 
     group->fieldText.offset = gpos;
     break;

   case FieldEncodedTextLen::RAW :
     PRINT_FIELD(EncodedTextLen) 
     group->fieldEncodedTextLen.offset = gpos;
     break;

   case FieldEncodedText::RAW :
     PRINT_FIELD(EncodedText) 
     group->fieldEncodedText.offset = gpos;
     break;

   case FieldSettlDate2::RAW :
     PRINT_FIELD(SettlDate2) 
     group->fieldSettlDate2.offset = gpos;
     break;

   case FieldOrderQty2::RAW :
     PRINT_FIELD(OrderQty2) 
     group->fieldOrderQty2.offset = gpos;
     break;

   case FieldPrice2::RAW :
     PRINT_FIELD(Price2) 
     group->fieldPrice2.offset = gpos;
     break;

   case FieldPositionEffect::RAW :
     PRINT_FIELD(PositionEffect) 
     group->fieldPositionEffect.offset = gpos;
     break;

   case FieldCoveredOrUncovered::RAW :
     PRINT_FIELD(CoveredOrUncovered) 
     group->fieldCoveredOrUncovered.offset = gpos;
     break;

   case FieldMaxShow::RAW :
     PRINT_FIELD(MaxShow) 
     group->fieldMaxShow.offset = gpos;
     break;

   case FieldPegOffsetValue::RAW :
     PRINT_FIELD(PegOffsetValue) 
     group->fieldPegOffsetValue.offset = gpos;
     break;

   case FieldPegMoveType::RAW :
     PRINT_FIELD(PegMoveType) 
     group->fieldPegMoveType.offset = gpos;
     break;

   case FieldPegOffsetType::RAW :
     PRINT_FIELD(PegOffsetType) 
     group->fieldPegOffsetType.offset = gpos;
     break;

   case FieldPegLimitType::RAW :
     PRINT_FIELD(PegLimitType) 
     group->fieldPegLimitType.offset = gpos;
     break;

   case FieldPegRoundDirection::RAW :
     PRINT_FIELD(PegRoundDirection) 
     group->fieldPegRoundDirection.offset = gpos;
     break;

   case FieldPegScope::RAW :
     PRINT_FIELD(PegScope) 
     group->fieldPegScope.offset = gpos;
     break;

   case FieldDiscretionInst::RAW :
     PRINT_FIELD(DiscretionInst) 
     group->fieldDiscretionInst.offset = gpos;
     break;

   case FieldDiscretionOffsetValue::RAW :
     PRINT_FIELD(DiscretionOffsetValue) 
     group->fieldDiscretionOffsetValue.offset = gpos;
     break;

   case FieldDiscretionMoveType::RAW :
     PRINT_FIELD(DiscretionMoveType) 
     group->fieldDiscretionMoveType.offset = gpos;
     break;

   case FieldDiscretionOffsetType::RAW :
     PRINT_FIELD(DiscretionOffsetType) 
     group->fieldDiscretionOffsetType.offset = gpos;
     break;

   case FieldDiscretionLimitType::RAW :
     PRINT_FIELD(DiscretionLimitType) 
     group->fieldDiscretionLimitType.offset = gpos;
     break;

   case FieldDiscretionRoundDirection::RAW :
     PRINT_FIELD(DiscretionRoundDirection) 
     group->fieldDiscretionRoundDirection.offset = gpos;
     break;

   case FieldDiscretionScope::RAW :
     PRINT_FIELD(DiscretionScope) 
     group->fieldDiscretionScope.offset = gpos;
     break;

   case FieldTargetStrategy::RAW :
     PRINT_FIELD(TargetStrategy) 
     group->fieldTargetStrategy.offset = gpos;
     break;

   case FieldTargetStrategyParameters::RAW :
     PRINT_FIELD(TargetStrategyParameters) 
     group->fieldTargetStrategyParameters.offset = gpos;
     break;

   case FieldParticipationRate::RAW :
     PRINT_FIELD(ParticipationRate) 
     group->fieldParticipationRate.offset = gpos;
     break;

   case FieldDesignation::RAW :
     PRINT_FIELD(Designation) 
     group->fieldDesignation.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSettlPartySubIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupSettlPartySubIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSettlPartySubID::RAW :
     PRINT_FIELD(SettlPartySubID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSettlPartySubID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSettlPartySubIDType::RAW :
     PRINT_FIELD(SettlPartySubIDType) 
     group->fieldSettlPartySubIDType.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSettlPartyIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupSettlPartyIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSettlPartyID::RAW :
     PRINT_FIELD(SettlPartyID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSettlPartyID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSettlPartyIDSource::RAW :
     PRINT_FIELD(SettlPartyIDSource) 
     group->fieldSettlPartyIDSource.offset = gpos;
     break;

   case FieldSettlPartyRole::RAW :
     PRINT_FIELD(SettlPartyRole) 
     group->fieldSettlPartyRole.offset = gpos;
     break;

   case FieldNoSettlPartySubIDs::RAW :
     PRINT_FIELD(NoSettlPartySubIDs) 
     group->fieldNoSettlPartySubIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSettlPartySubIDs::scan( group->groupsSettlPartySubIDs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupDlvyInst::scan( Array & arr, const char * fix, unsigned len ){
 GroupDlvyInst * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSettlInstSource::RAW :
     PRINT_FIELD(SettlInstSource) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSettlInstSource.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldDlvyInstType::RAW :
     PRINT_FIELD(DlvyInstType) 
     group->fieldDlvyInstType.offset = gpos;
     break;

   case FieldNoSettlPartyIDs::RAW :
     PRINT_FIELD(NoSettlPartyIDs) 
     group->fieldNoSettlPartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSettlPartyIDs::scan( group->groupsSettlPartyIDs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupClearingInstructions::scan( Array & arr, const char * fix, unsigned len ){
 GroupClearingInstructions * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldClearingInstruction::RAW :
     PRINT_FIELD(ClearingInstruction) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldClearingInstruction.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNestedPartySubIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupNestedPartySubIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldNestedPartySubID::RAW :
     PRINT_FIELD(NestedPartySubID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldNestedPartySubID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldNestedPartySubIDType::RAW :
     PRINT_FIELD(NestedPartySubIDType) 
     group->fieldNestedPartySubIDType.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNestedPartyIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupNestedPartyIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldNestedPartyID::RAW :
     PRINT_FIELD(NestedPartyID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldNestedPartyID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldNestedPartyIDSource::RAW :
     PRINT_FIELD(NestedPartyIDSource) 
     group->fieldNestedPartyIDSource.offset = gpos;
     break;

   case FieldNestedPartyRole::RAW :
     PRINT_FIELD(NestedPartyRole) 
     group->fieldNestedPartyRole.offset = gpos;
     break;

   case FieldNoNestedPartySubIDs::RAW :
     PRINT_FIELD(NoNestedPartySubIDs) 
     group->fieldNoNestedPartySubIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartySubIDs::scan( group->groupsNestedPartySubIDs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLegs::scan( Array & arr, const char * fix, unsigned len ){
 GroupLegs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldLegSymbol::RAW :
     PRINT_FIELD(LegSymbol) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldLegSymbol.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldLegSymbolSfx::RAW :
     PRINT_FIELD(LegSymbolSfx) 
     group->fieldLegSymbolSfx.offset = gpos;
     break;

   case FieldLegSecurityID::RAW :
     PRINT_FIELD(LegSecurityID) 
     group->fieldLegSecurityID.offset = gpos;
     break;

   case FieldLegSecurityIDSource::RAW :
     PRINT_FIELD(LegSecurityIDSource) 
     group->fieldLegSecurityIDSource.offset = gpos;
     break;

   case FieldNoLegSecurityAltID::RAW :
     PRINT_FIELD(NoLegSecurityAltID) 
     group->fieldNoLegSecurityAltID.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupLegSecurityAltID::scan( group->groupsLegSecurityAltID, fix+pos, len - pos );
     break;

   case FieldLegProduct::RAW :
     PRINT_FIELD(LegProduct) 
     group->fieldLegProduct.offset = gpos;
     break;

   case FieldLegCFICode::RAW :
     PRINT_FIELD(LegCFICode) 
     group->fieldLegCFICode.offset = gpos;
     break;

   case FieldLegSecurityType::RAW :
     PRINT_FIELD(LegSecurityType) 
     group->fieldLegSecurityType.offset = gpos;
     break;

   case FieldLegSecuritySubType::RAW :
     PRINT_FIELD(LegSecuritySubType) 
     group->fieldLegSecuritySubType.offset = gpos;
     break;

   case FieldLegMaturityMonthYear::RAW :
     PRINT_FIELD(LegMaturityMonthYear) 
     group->fieldLegMaturityMonthYear.offset = gpos;
     break;

   case FieldLegMaturityDate::RAW :
     PRINT_FIELD(LegMaturityDate) 
     group->fieldLegMaturityDate.offset = gpos;
     break;

   case FieldLegCouponPaymentDate::RAW :
     PRINT_FIELD(LegCouponPaymentDate) 
     group->fieldLegCouponPaymentDate.offset = gpos;
     break;

   case FieldLegIssueDate::RAW :
     PRINT_FIELD(LegIssueDate) 
     group->fieldLegIssueDate.offset = gpos;
     break;

   case FieldLegRepoCollateralSecurityType::RAW :
     PRINT_FIELD(LegRepoCollateralSecurityType) 
     group->fieldLegRepoCollateralSecurityType.offset = gpos;
     break;

   case FieldLegRepurchaseTerm::RAW :
     PRINT_FIELD(LegRepurchaseTerm) 
     group->fieldLegRepurchaseTerm.offset = gpos;
     break;

   case FieldLegRepurchaseRate::RAW :
     PRINT_FIELD(LegRepurchaseRate) 
     group->fieldLegRepurchaseRate.offset = gpos;
     break;

   case FieldLegFactor::RAW :
     PRINT_FIELD(LegFactor) 
     group->fieldLegFactor.offset = gpos;
     break;

   case FieldLegCreditRating::RAW :
     PRINT_FIELD(LegCreditRating) 
     group->fieldLegCreditRating.offset = gpos;
     break;

   case FieldLegInstrRegistry::RAW :
     PRINT_FIELD(LegInstrRegistry) 
     group->fieldLegInstrRegistry.offset = gpos;
     break;

   case FieldLegCountryOfIssue::RAW :
     PRINT_FIELD(LegCountryOfIssue) 
     group->fieldLegCountryOfIssue.offset = gpos;
     break;

   case FieldLegStateOrProvinceOfIssue::RAW :
     PRINT_FIELD(LegStateOrProvinceOfIssue) 
     group->fieldLegStateOrProvinceOfIssue.offset = gpos;
     break;

   case FieldLegLocaleOfIssue::RAW :
     PRINT_FIELD(LegLocaleOfIssue) 
     group->fieldLegLocaleOfIssue.offset = gpos;
     break;

   case FieldLegRedemptionDate::RAW :
     PRINT_FIELD(LegRedemptionDate) 
     group->fieldLegRedemptionDate.offset = gpos;
     break;

   case FieldLegStrikePrice::RAW :
     PRINT_FIELD(LegStrikePrice) 
     group->fieldLegStrikePrice.offset = gpos;
     break;

   case FieldLegStrikeCurrency::RAW :
     PRINT_FIELD(LegStrikeCurrency) 
     group->fieldLegStrikeCurrency.offset = gpos;
     break;

   case FieldLegOptAttribute::RAW :
     PRINT_FIELD(LegOptAttribute) 
     group->fieldLegOptAttribute.offset = gpos;
     break;

   case FieldLegContractMultiplier::RAW :
     PRINT_FIELD(LegContractMultiplier) 
     group->fieldLegContractMultiplier.offset = gpos;
     break;

   case FieldLegCouponRate::RAW :
     PRINT_FIELD(LegCouponRate) 
     group->fieldLegCouponRate.offset = gpos;
     break;

   case FieldLegSecurityExchange::RAW :
     PRINT_FIELD(LegSecurityExchange) 
     group->fieldLegSecurityExchange.offset = gpos;
     break;

   case FieldLegIssuer::RAW :
     PRINT_FIELD(LegIssuer) 
     group->fieldLegIssuer.offset = gpos;
     break;

   case FieldEncodedLegIssuerLen::RAW :
     PRINT_FIELD(EncodedLegIssuerLen) 
     group->fieldEncodedLegIssuerLen.offset = gpos;
     break;

   case FieldEncodedLegIssuer::RAW :
     PRINT_FIELD(EncodedLegIssuer) 
     group->fieldEncodedLegIssuer.offset = gpos;
     break;

   case FieldLegSecurityDesc::RAW :
     PRINT_FIELD(LegSecurityDesc) 
     group->fieldLegSecurityDesc.offset = gpos;
     break;

   case FieldEncodedLegSecurityDescLen::RAW :
     PRINT_FIELD(EncodedLegSecurityDescLen) 
     group->fieldEncodedLegSecurityDescLen.offset = gpos;
     break;

   case FieldEncodedLegSecurityDesc::RAW :
     PRINT_FIELD(EncodedLegSecurityDesc) 
     group->fieldEncodedLegSecurityDesc.offset = gpos;
     break;

   case FieldLegRatioQty::RAW :
     PRINT_FIELD(LegRatioQty) 
     group->fieldLegRatioQty.offset = gpos;
     break;

   case FieldLegSide::RAW :
     PRINT_FIELD(LegSide) 
     group->fieldLegSide.offset = gpos;
     break;

   case FieldLegCurrency::RAW :
     PRINT_FIELD(LegCurrency) 
     group->fieldLegCurrency.offset = gpos;
     break;

   case FieldLegPool::RAW :
     PRINT_FIELD(LegPool) 
     group->fieldLegPool.offset = gpos;
     break;

   case FieldLegDatedDate::RAW :
     PRINT_FIELD(LegDatedDate) 
     group->fieldLegDatedDate.offset = gpos;
     break;

   case FieldLegContractSettlMonth::RAW :
     PRINT_FIELD(LegContractSettlMonth) 
     group->fieldLegContractSettlMonth.offset = gpos;
     break;

   case FieldLegInterestAccrualDate::RAW :
     PRINT_FIELD(LegInterestAccrualDate) 
     group->fieldLegInterestAccrualDate.offset = gpos;
     break;

   case FieldLegQty::RAW :
     PRINT_FIELD(LegQty) 
     group->fieldLegQty.offset = gpos;
     break;

   case FieldLegSwapType::RAW :
     PRINT_FIELD(LegSwapType) 
     group->fieldLegSwapType.offset = gpos;
     break;

   case FieldNoLegStipulations::RAW :
     PRINT_FIELD(NoLegStipulations) 
     group->fieldNoLegStipulations.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupLegStipulations::scan( group->groupsLegStipulations, fix+pos, len - pos );
     break;

   case FieldLegPositionEffect::RAW :
     PRINT_FIELD(LegPositionEffect) 
     group->fieldLegPositionEffect.offset = gpos;
     break;

   case FieldLegCoveredOrUncovered::RAW :
     PRINT_FIELD(LegCoveredOrUncovered) 
     group->fieldLegCoveredOrUncovered.offset = gpos;
     break;

   case FieldNoNestedPartyIDs::RAW :
     PRINT_FIELD(NoNestedPartyIDs) 
     group->fieldNoNestedPartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartyIDs::scan( group->groupsNestedPartyIDs, fix+pos, len - pos );
     break;

   case FieldLegRefID::RAW :
     PRINT_FIELD(LegRefID) 
     group->fieldLegRefID.offset = gpos;
     break;

   case FieldLegPrice::RAW :
     PRINT_FIELD(LegPrice) 
     group->fieldLegPrice.offset = gpos;
     break;

   case FieldLegSettlType::RAW :
     PRINT_FIELD(LegSettlType) 
     group->fieldLegSettlType.offset = gpos;
     break;

   case FieldLegSettlDate::RAW :
     PRINT_FIELD(LegSettlDate) 
     group->fieldLegSettlDate.offset = gpos;
     break;

   case FieldLegLastPx::RAW :
     PRINT_FIELD(LegLastPx) 
     group->fieldLegLastPx.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupQuoteEntries::scan( Array & arr, const char * fix, unsigned len ){
 GroupQuoteEntries * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSymbol::RAW :
     PRINT_FIELD(Symbol) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSymbol.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSymbolSfx::RAW :
     PRINT_FIELD(SymbolSfx) 
     group->fieldSymbolSfx.offset = gpos;
     break;

   case FieldSecurityID::RAW :
     PRINT_FIELD(SecurityID) 
     group->fieldSecurityID.offset = gpos;
     break;

   case FieldSecurityIDSource::RAW :
     PRINT_FIELD(SecurityIDSource) 
     group->fieldSecurityIDSource.offset = gpos;
     break;

   case FieldNoSecurityAltID::RAW :
     PRINT_FIELD(NoSecurityAltID) 
     group->fieldNoSecurityAltID.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::scan( group->groupsSecurityAltID, fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     PRINT_FIELD(Product) 
     group->fieldProduct.offset = gpos;
     break;

   case FieldCFICode::RAW :
     PRINT_FIELD(CFICode) 
     group->fieldCFICode.offset = gpos;
     break;

   case FieldSecurityType::RAW :
     PRINT_FIELD(SecurityType) 
     group->fieldSecurityType.offset = gpos;
     break;

   case FieldSecuritySubType::RAW :
     PRINT_FIELD(SecuritySubType) 
     group->fieldSecuritySubType.offset = gpos;
     break;

   case FieldMaturityMonthYear::RAW :
     PRINT_FIELD(MaturityMonthYear) 
     group->fieldMaturityMonthYear.offset = gpos;
     break;

   case FieldMaturityDate::RAW :
     PRINT_FIELD(MaturityDate) 
     group->fieldMaturityDate.offset = gpos;
     break;

   case FieldPutOrCall::RAW :
     PRINT_FIELD(PutOrCall) 
     group->fieldPutOrCall.offset = gpos;
     break;

   case FieldCouponPaymentDate::RAW :
     PRINT_FIELD(CouponPaymentDate) 
     group->fieldCouponPaymentDate.offset = gpos;
     break;

   case FieldIssueDate::RAW :
     PRINT_FIELD(IssueDate) 
     group->fieldIssueDate.offset = gpos;
     break;

   case FieldRepoCollateralSecurityType::RAW :
     PRINT_FIELD(RepoCollateralSecurityType) 
     group->fieldRepoCollateralSecurityType.offset = gpos;
     break;

   case FieldRepurchaseTerm::RAW :
     PRINT_FIELD(RepurchaseTerm) 
     group->fieldRepurchaseTerm.offset = gpos;
     break;

   case FieldRepurchaseRate::RAW :
     PRINT_FIELD(RepurchaseRate) 
     group->fieldRepurchaseRate.offset = gpos;
     break;

   case FieldFactor::RAW :
     PRINT_FIELD(Factor) 
     group->fieldFactor.offset = gpos;
     break;

   case FieldCreditRating::RAW :
     PRINT_FIELD(CreditRating) 
     group->fieldCreditRating.offset = gpos;
     break;

   case FieldInstrRegistry::RAW :
     PRINT_FIELD(InstrRegistry) 
     group->fieldInstrRegistry.offset = gpos;
     break;

   case FieldCountryOfIssue::RAW :
     PRINT_FIELD(CountryOfIssue) 
     group->fieldCountryOfIssue.offset = gpos;
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     PRINT_FIELD(StateOrProvinceOfIssue) 
     group->fieldStateOrProvinceOfIssue.offset = gpos;
     break;

   case FieldLocaleOfIssue::RAW :
     PRINT_FIELD(LocaleOfIssue) 
     group->fieldLocaleOfIssue.offset = gpos;
     break;

   case FieldRedemptionDate::RAW :
     PRINT_FIELD(RedemptionDate) 
     group->fieldRedemptionDate.offset = gpos;
     break;

   case FieldStrikePrice::RAW :
     PRINT_FIELD(StrikePrice) 
     group->fieldStrikePrice.offset = gpos;
     break;

   case FieldStrikeCurrency::RAW :
     PRINT_FIELD(StrikeCurrency) 
     group->fieldStrikeCurrency.offset = gpos;
     break;

   case FieldOptAttribute::RAW :
     PRINT_FIELD(OptAttribute) 
     group->fieldOptAttribute.offset = gpos;
     break;

   case FieldContractMultiplier::RAW :
     PRINT_FIELD(ContractMultiplier) 
     group->fieldContractMultiplier.offset = gpos;
     break;

   case FieldCouponRate::RAW :
     PRINT_FIELD(CouponRate) 
     group->fieldCouponRate.offset = gpos;
     break;

   case FieldSecurityExchange::RAW :
     PRINT_FIELD(SecurityExchange) 
     group->fieldSecurityExchange.offset = gpos;
     break;

   case FieldIssuer::RAW :
     PRINT_FIELD(Issuer) 
     group->fieldIssuer.offset = gpos;
     break;

   case FieldEncodedIssuerLen::RAW :
     PRINT_FIELD(EncodedIssuerLen) 
     group->fieldEncodedIssuerLen.offset = gpos;
     break;

   case FieldEncodedIssuer::RAW :
     PRINT_FIELD(EncodedIssuer) 
     group->fieldEncodedIssuer.offset = gpos;
     break;

   case FieldSecurityDesc::RAW :
     PRINT_FIELD(SecurityDesc) 
     group->fieldSecurityDesc.offset = gpos;
     break;

   case FieldEncodedSecurityDescLen::RAW :
     PRINT_FIELD(EncodedSecurityDescLen) 
     group->fieldEncodedSecurityDescLen.offset = gpos;
     break;

   case FieldEncodedSecurityDesc::RAW :
     PRINT_FIELD(EncodedSecurityDesc) 
     group->fieldEncodedSecurityDesc.offset = gpos;
     break;

   case FieldPool::RAW :
     PRINT_FIELD(Pool) 
     group->fieldPool.offset = gpos;
     break;

   case FieldContractSettlMonth::RAW :
     PRINT_FIELD(ContractSettlMonth) 
     group->fieldContractSettlMonth.offset = gpos;
     break;

   case FieldCPProgram::RAW :
     PRINT_FIELD(CPProgram) 
     group->fieldCPProgram.offset = gpos;
     break;

   case FieldCPRegType::RAW :
     PRINT_FIELD(CPRegType) 
     group->fieldCPRegType.offset = gpos;
     break;

   case FieldNoEvents::RAW :
     PRINT_FIELD(NoEvents) 
     group->fieldNoEvents.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::scan( group->groupsEvents, fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     PRINT_FIELD(DatedDate) 
     group->fieldDatedDate.offset = gpos;
     break;

   case FieldInterestAccrualDate::RAW :
     PRINT_FIELD(InterestAccrualDate) 
     group->fieldInterestAccrualDate.offset = gpos;
     break;

   case FieldAgreementDesc::RAW :
     PRINT_FIELD(AgreementDesc) 
     group->fieldAgreementDesc.offset = gpos;
     break;

   case FieldAgreementID::RAW :
     PRINT_FIELD(AgreementID) 
     group->fieldAgreementID.offset = gpos;
     break;

   case FieldAgreementDate::RAW :
     PRINT_FIELD(AgreementDate) 
     group->fieldAgreementDate.offset = gpos;
     break;

   case FieldAgreementCurrency::RAW :
     PRINT_FIELD(AgreementCurrency) 
     group->fieldAgreementCurrency.offset = gpos;
     break;

   case FieldTerminationType::RAW :
     PRINT_FIELD(TerminationType) 
     group->fieldTerminationType.offset = gpos;
     break;

   case FieldStartDate::RAW :
     PRINT_FIELD(StartDate) 
     group->fieldStartDate.offset = gpos;
     break;

   case FieldEndDate::RAW :
     PRINT_FIELD(EndDate) 
     group->fieldEndDate.offset = gpos;
     break;

   case FieldDeliveryType::RAW :
     PRINT_FIELD(DeliveryType) 
     group->fieldDeliveryType.offset = gpos;
     break;

   case FieldMarginRatio::RAW :
     PRINT_FIELD(MarginRatio) 
     group->fieldMarginRatio.offset = gpos;
     break;

   case FieldNoUnderlyings::RAW :
     PRINT_FIELD(NoUnderlyings) 
     group->fieldNoUnderlyings.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyings::scan( group->groupsUnderlyings, fix+pos, len - pos );
     break;

   case FieldNoLegs::RAW :
     PRINT_FIELD(NoLegs) 
     group->fieldNoLegs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupLegs::scan( group->groupsLegs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupQuoteSets::scan( Array & arr, const char * fix, unsigned len ){
 GroupQuoteSets * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldQuoteSetID::RAW :
     PRINT_FIELD(QuoteSetID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldQuoteSetID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldUnderlyingSymbol::RAW :
     PRINT_FIELD(UnderlyingSymbol) 
     group->fieldUnderlyingSymbol.offset = gpos;
     break;

   case FieldUnderlyingSymbolSfx::RAW :
     PRINT_FIELD(UnderlyingSymbolSfx) 
     group->fieldUnderlyingSymbolSfx.offset = gpos;
     break;

   case FieldUnderlyingSecurityID::RAW :
     PRINT_FIELD(UnderlyingSecurityID) 
     group->fieldUnderlyingSecurityID.offset = gpos;
     break;

   case FieldUnderlyingSecurityIDSource::RAW :
     PRINT_FIELD(UnderlyingSecurityIDSource) 
     group->fieldUnderlyingSecurityIDSource.offset = gpos;
     break;

   case FieldNoUnderlyingSecurityAltID::RAW :
     PRINT_FIELD(NoUnderlyingSecurityAltID) 
     group->fieldNoUnderlyingSecurityAltID.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingSecurityAltID::scan( group->groupsUnderlyingSecurityAltID, fix+pos, len - pos );
     break;

   case FieldUnderlyingProduct::RAW :
     PRINT_FIELD(UnderlyingProduct) 
     group->fieldUnderlyingProduct.offset = gpos;
     break;

   case FieldUnderlyingCFICode::RAW :
     PRINT_FIELD(UnderlyingCFICode) 
     group->fieldUnderlyingCFICode.offset = gpos;
     break;

   case FieldUnderlyingSecurityType::RAW :
     PRINT_FIELD(UnderlyingSecurityType) 
     group->fieldUnderlyingSecurityType.offset = gpos;
     break;

   case FieldUnderlyingSecuritySubType::RAW :
     PRINT_FIELD(UnderlyingSecuritySubType) 
     group->fieldUnderlyingSecuritySubType.offset = gpos;
     break;

   case FieldUnderlyingMaturityMonthYear::RAW :
     PRINT_FIELD(UnderlyingMaturityMonthYear) 
     group->fieldUnderlyingMaturityMonthYear.offset = gpos;
     break;

   case FieldUnderlyingMaturityDate::RAW :
     PRINT_FIELD(UnderlyingMaturityDate) 
     group->fieldUnderlyingMaturityDate.offset = gpos;
     break;

   case FieldUnderlyingPutOrCall::RAW :
     PRINT_FIELD(UnderlyingPutOrCall) 
     group->fieldUnderlyingPutOrCall.offset = gpos;
     break;

   case FieldUnderlyingCouponPaymentDate::RAW :
     PRINT_FIELD(UnderlyingCouponPaymentDate) 
     group->fieldUnderlyingCouponPaymentDate.offset = gpos;
     break;

   case FieldUnderlyingIssueDate::RAW :
     PRINT_FIELD(UnderlyingIssueDate) 
     group->fieldUnderlyingIssueDate.offset = gpos;
     break;

   case FieldUnderlyingRepoCollateralSecurityType::RAW :
     PRINT_FIELD(UnderlyingRepoCollateralSecurityType) 
     group->fieldUnderlyingRepoCollateralSecurityType.offset = gpos;
     break;

   case FieldUnderlyingRepurchaseTerm::RAW :
     PRINT_FIELD(UnderlyingRepurchaseTerm) 
     group->fieldUnderlyingRepurchaseTerm.offset = gpos;
     break;

   case FieldUnderlyingRepurchaseRate::RAW :
     PRINT_FIELD(UnderlyingRepurchaseRate) 
     group->fieldUnderlyingRepurchaseRate.offset = gpos;
     break;

   case FieldUnderlyingFactor::RAW :
     PRINT_FIELD(UnderlyingFactor) 
     group->fieldUnderlyingFactor.offset = gpos;
     break;

   case FieldUnderlyingCreditRating::RAW :
     PRINT_FIELD(UnderlyingCreditRating) 
     group->fieldUnderlyingCreditRating.offset = gpos;
     break;

   case FieldUnderlyingInstrRegistry::RAW :
     PRINT_FIELD(UnderlyingInstrRegistry) 
     group->fieldUnderlyingInstrRegistry.offset = gpos;
     break;

   case FieldUnderlyingCountryOfIssue::RAW :
     PRINT_FIELD(UnderlyingCountryOfIssue) 
     group->fieldUnderlyingCountryOfIssue.offset = gpos;
     break;

   case FieldUnderlyingStateOrProvinceOfIssue::RAW :
     PRINT_FIELD(UnderlyingStateOrProvinceOfIssue) 
     group->fieldUnderlyingStateOrProvinceOfIssue.offset = gpos;
     break;

   case FieldUnderlyingLocaleOfIssue::RAW :
     PRINT_FIELD(UnderlyingLocaleOfIssue) 
     group->fieldUnderlyingLocaleOfIssue.offset = gpos;
     break;

   case FieldUnderlyingRedemptionDate::RAW :
     PRINT_FIELD(UnderlyingRedemptionDate) 
     group->fieldUnderlyingRedemptionDate.offset = gpos;
     break;

   case FieldUnderlyingStrikePrice::RAW :
     PRINT_FIELD(UnderlyingStrikePrice) 
     group->fieldUnderlyingStrikePrice.offset = gpos;
     break;

   case FieldUnderlyingStrikeCurrency::RAW :
     PRINT_FIELD(UnderlyingStrikeCurrency) 
     group->fieldUnderlyingStrikeCurrency.offset = gpos;
     break;

   case FieldUnderlyingOptAttribute::RAW :
     PRINT_FIELD(UnderlyingOptAttribute) 
     group->fieldUnderlyingOptAttribute.offset = gpos;
     break;

   case FieldUnderlyingContractMultiplier::RAW :
     PRINT_FIELD(UnderlyingContractMultiplier) 
     group->fieldUnderlyingContractMultiplier.offset = gpos;
     break;

   case FieldUnderlyingCouponRate::RAW :
     PRINT_FIELD(UnderlyingCouponRate) 
     group->fieldUnderlyingCouponRate.offset = gpos;
     break;

   case FieldUnderlyingSecurityExchange::RAW :
     PRINT_FIELD(UnderlyingSecurityExchange) 
     group->fieldUnderlyingSecurityExchange.offset = gpos;
     break;

   case FieldUnderlyingIssuer::RAW :
     PRINT_FIELD(UnderlyingIssuer) 
     group->fieldUnderlyingIssuer.offset = gpos;
     break;

   case FieldEncodedUnderlyingIssuerLen::RAW :
     PRINT_FIELD(EncodedUnderlyingIssuerLen) 
     group->fieldEncodedUnderlyingIssuerLen.offset = gpos;
     break;

   case FieldEncodedUnderlyingIssuer::RAW :
     PRINT_FIELD(EncodedUnderlyingIssuer) 
     group->fieldEncodedUnderlyingIssuer.offset = gpos;
     break;

   case FieldUnderlyingSecurityDesc::RAW :
     PRINT_FIELD(UnderlyingSecurityDesc) 
     group->fieldUnderlyingSecurityDesc.offset = gpos;
     break;

   case FieldEncodedUnderlyingSecurityDescLen::RAW :
     PRINT_FIELD(EncodedUnderlyingSecurityDescLen) 
     group->fieldEncodedUnderlyingSecurityDescLen.offset = gpos;
     break;

   case FieldEncodedUnderlyingSecurityDesc::RAW :
     PRINT_FIELD(EncodedUnderlyingSecurityDesc) 
     group->fieldEncodedUnderlyingSecurityDesc.offset = gpos;
     break;

   case FieldUnderlyingCPProgram::RAW :
     PRINT_FIELD(UnderlyingCPProgram) 
     group->fieldUnderlyingCPProgram.offset = gpos;
     break;

   case FieldUnderlyingCPRegType::RAW :
     PRINT_FIELD(UnderlyingCPRegType) 
     group->fieldUnderlyingCPRegType.offset = gpos;
     break;

   case FieldUnderlyingCurrency::RAW :
     PRINT_FIELD(UnderlyingCurrency) 
     group->fieldUnderlyingCurrency.offset = gpos;
     break;

   case FieldUnderlyingQty::RAW :
     PRINT_FIELD(UnderlyingQty) 
     group->fieldUnderlyingQty.offset = gpos;
     break;

   case FieldUnderlyingPx::RAW :
     PRINT_FIELD(UnderlyingPx) 
     group->fieldUnderlyingPx.offset = gpos;
     break;

   case FieldUnderlyingDirtyPrice::RAW :
     PRINT_FIELD(UnderlyingDirtyPrice) 
     group->fieldUnderlyingDirtyPrice.offset = gpos;
     break;

   case FieldUnderlyingEndPrice::RAW :
     PRINT_FIELD(UnderlyingEndPrice) 
     group->fieldUnderlyingEndPrice.offset = gpos;
     break;

   case FieldUnderlyingStartValue::RAW :
     PRINT_FIELD(UnderlyingStartValue) 
     group->fieldUnderlyingStartValue.offset = gpos;
     break;

   case FieldUnderlyingCurrentValue::RAW :
     PRINT_FIELD(UnderlyingCurrentValue) 
     group->fieldUnderlyingCurrentValue.offset = gpos;
     break;

   case FieldUnderlyingEndValue::RAW :
     PRINT_FIELD(UnderlyingEndValue) 
     group->fieldUnderlyingEndValue.offset = gpos;
     break;

   case FieldNoUnderlyingStips::RAW :
     PRINT_FIELD(NoUnderlyingStips) 
     group->fieldNoUnderlyingStips.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingStips::scan( group->groupsUnderlyingStips, fix+pos, len - pos );
     break;

   case FieldTotNoQuoteEntries::RAW :
     PRINT_FIELD(TotNoQuoteEntries) 
     group->fieldTotNoQuoteEntries.offset = gpos;
     break;

   case FieldLastFragment::RAW :
     PRINT_FIELD(LastFragment) 
     group->fieldLastFragment.offset = gpos;
     break;

   case FieldNoQuoteEntries::RAW :
     PRINT_FIELD(NoQuoteEntries) 
     group->fieldNoQuoteEntries.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupQuoteEntries::scan( group->groupsQuoteEntries, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSecurityTypes::scan( Array & arr, const char * fix, unsigned len ){
 GroupSecurityTypes * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSecurityType::RAW :
     PRINT_FIELD(SecurityType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSecurityType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSecuritySubType::RAW :
     PRINT_FIELD(SecuritySubType) 
     group->fieldSecuritySubType.offset = gpos;
     break;

   case FieldProduct::RAW :
     PRINT_FIELD(Product) 
     group->fieldProduct.offset = gpos;
     break;

   case FieldCFICode::RAW :
     PRINT_FIELD(CFICode) 
     group->fieldCFICode.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested3PartyIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupNested3PartyIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldNested3PartyID::RAW :
     PRINT_FIELD(Nested3PartyID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldNested3PartyID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldNested3PartyIDSource::RAW :
     PRINT_FIELD(Nested3PartyIDSource) 
     group->fieldNested3PartyIDSource.offset = gpos;
     break;

   case FieldNested3PartyRole::RAW :
     PRINT_FIELD(Nested3PartyRole) 
     group->fieldNested3PartyRole.offset = gpos;
     break;

   case FieldNoNested3PartySubIDs::RAW :
     PRINT_FIELD(NoNested3PartySubIDs) 
     group->fieldNoNested3PartySubIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNested3PartySubIDs::scan( group->groupsNested3PartySubIDs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPositions::scan( Array & arr, const char * fix, unsigned len ){
 GroupPositions * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldPosType::RAW :
     PRINT_FIELD(PosType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldPosType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldLongQty::RAW :
     PRINT_FIELD(LongQty) 
     group->fieldLongQty.offset = gpos;
     break;

   case FieldShortQty::RAW :
     PRINT_FIELD(ShortQty) 
     group->fieldShortQty.offset = gpos;
     break;

   case FieldPosQtyStatus::RAW :
     PRINT_FIELD(PosQtyStatus) 
     group->fieldPosQtyStatus.offset = gpos;
     break;

   case FieldNoNestedPartyIDs::RAW :
     PRINT_FIELD(NoNestedPartyIDs) 
     group->fieldNoNestedPartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartyIDs::scan( group->groupsNestedPartyIDs, fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupAffectedOrders::scan( Array & arr, const char * fix, unsigned len ){
 GroupAffectedOrders * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldOrigClOrdID::RAW :
     PRINT_FIELD(OrigClOrdID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldOrigClOrdID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldAffectedOrderID::RAW :
     PRINT_FIELD(AffectedOrderID) 
     group->fieldAffectedOrderID.offset = gpos;
     break;

   case FieldAffectedSecondaryOrderID::RAW :
     PRINT_FIELD(AffectedSecondaryOrderID) 
     group->fieldAffectedSecondaryOrderID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupExecs::scan( Array & arr, const char * fix, unsigned len ){
 GroupExecs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldLastQty::RAW :
     PRINT_FIELD(LastQty) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldLastQty.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldExecID::RAW :
     PRINT_FIELD(ExecID) 
     group->fieldExecID.offset = gpos;
     break;

   case FieldSecondaryExecID::RAW :
     PRINT_FIELD(SecondaryExecID) 
     group->fieldSecondaryExecID.offset = gpos;
     break;

   case FieldLastPx::RAW :
     PRINT_FIELD(LastPx) 
     group->fieldLastPx.offset = gpos;
     break;

   case FieldLastParPx::RAW :
     PRINT_FIELD(LastParPx) 
     group->fieldLastParPx.offset = gpos;
     break;

   case FieldLastCapacity::RAW :
     PRINT_FIELD(LastCapacity) 
     group->fieldLastCapacity.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMsgTypes::scan( Array & arr, const char * fix, unsigned len ){
 GroupMsgTypes * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldRefMsgType::RAW :
     PRINT_FIELD(RefMsgType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldRefMsgType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldMsgDirection::RAW :
     PRINT_FIELD(MsgDirection) 
     group->fieldMsgDirection.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupBidComponents::scan( Array & arr, const char * fix, unsigned len ){
 GroupBidComponents * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldListID::RAW :
     PRINT_FIELD(ListID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldListID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSide::RAW :
     PRINT_FIELD(Side) 
     group->fieldSide.offset = gpos;
     break;

   case FieldTradingSessionID::RAW :
     PRINT_FIELD(TradingSessionID) 
     group->fieldTradingSessionID.offset = gpos;
     break;

   case FieldTradingSessionSubID::RAW :
     PRINT_FIELD(TradingSessionSubID) 
     group->fieldTradingSessionSubID.offset = gpos;
     break;

   case FieldNetGrossInd::RAW :
     PRINT_FIELD(NetGrossInd) 
     group->fieldNetGrossInd.offset = gpos;
     break;

   case FieldSettlType::RAW :
     PRINT_FIELD(SettlType) 
     group->fieldSettlType.offset = gpos;
     break;

   case FieldSettlDate::RAW :
     PRINT_FIELD(SettlDate) 
     group->fieldSettlDate.offset = gpos;
     break;

   case FieldAccount::RAW :
     PRINT_FIELD(Account) 
     group->fieldAccount.offset = gpos;
     break;

   case FieldAcctIDSource::RAW :
     PRINT_FIELD(AcctIDSource) 
     group->fieldAcctIDSource.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSettlInst::scan( Array & arr, const char * fix, unsigned len ){
 GroupSettlInst * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSettlInstID::RAW :
     PRINT_FIELD(SettlInstID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSettlInstID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSettlInstTransType::RAW :
     PRINT_FIELD(SettlInstTransType) 
     group->fieldSettlInstTransType.offset = gpos;
     break;

   case FieldSettlInstRefID::RAW :
     PRINT_FIELD(SettlInstRefID) 
     group->fieldSettlInstRefID.offset = gpos;
     break;

   case FieldNoPartyIDs::RAW :
     PRINT_FIELD(NoPartyIDs) 
     group->fieldNoPartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartyIDs::scan( group->groupsPartyIDs, fix+pos, len - pos );
     break;

   case FieldSide::RAW :
     PRINT_FIELD(Side) 
     group->fieldSide.offset = gpos;
     break;

   case FieldProduct::RAW :
     PRINT_FIELD(Product) 
     group->fieldProduct.offset = gpos;
     break;

   case FieldSecurityType::RAW :
     PRINT_FIELD(SecurityType) 
     group->fieldSecurityType.offset = gpos;
     break;

   case FieldCFICode::RAW :
     PRINT_FIELD(CFICode) 
     group->fieldCFICode.offset = gpos;
     break;

   case FieldEffectiveTime::RAW :
     PRINT_FIELD(EffectiveTime) 
     group->fieldEffectiveTime.offset = gpos;
     break;

   case FieldExpireTime::RAW :
     PRINT_FIELD(ExpireTime) 
     group->fieldExpireTime.offset = gpos;
     break;

   case FieldLastUpdateTime::RAW :
     PRINT_FIELD(LastUpdateTime) 
     group->fieldLastUpdateTime.offset = gpos;
     break;

   case FieldSettlDeliveryType::RAW :
     PRINT_FIELD(SettlDeliveryType) 
     group->fieldSettlDeliveryType.offset = gpos;
     break;

   case FieldStandInstDbType::RAW :
     PRINT_FIELD(StandInstDbType) 
     group->fieldStandInstDbType.offset = gpos;
     break;

   case FieldStandInstDbName::RAW :
     PRINT_FIELD(StandInstDbName) 
     group->fieldStandInstDbName.offset = gpos;
     break;

   case FieldStandInstDbID::RAW :
     PRINT_FIELD(StandInstDbID) 
     group->fieldStandInstDbID.offset = gpos;
     break;

   case FieldNoDlvyInst::RAW :
     PRINT_FIELD(NoDlvyInst) 
     group->fieldNoDlvyInst.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupDlvyInst::scan( group->groupsDlvyInst, fix+pos, len - pos );
     break;

   case FieldPaymentMethod::RAW :
     PRINT_FIELD(PaymentMethod) 
     group->fieldPaymentMethod.offset = gpos;
     break;

   case FieldPaymentRef::RAW :
     PRINT_FIELD(PaymentRef) 
     group->fieldPaymentRef.offset = gpos;
     break;

   case FieldCardHolderName::RAW :
     PRINT_FIELD(CardHolderName) 
     group->fieldCardHolderName.offset = gpos;
     break;

   case FieldCardNumber::RAW :
     PRINT_FIELD(CardNumber) 
     group->fieldCardNumber.offset = gpos;
     break;

   case FieldCardStartDate::RAW :
     PRINT_FIELD(CardStartDate) 
     group->fieldCardStartDate.offset = gpos;
     break;

   case FieldCardExpDate::RAW :
     PRINT_FIELD(CardExpDate) 
     group->fieldCardExpDate.offset = gpos;
     break;

   case FieldCardIssNum::RAW :
     PRINT_FIELD(CardIssNum) 
     group->fieldCardIssNum.offset = gpos;
     break;

   case FieldPaymentDate::RAW :
     PRINT_FIELD(PaymentDate) 
     group->fieldPaymentDate.offset = gpos;
     break;

   case FieldPaymentRemitterID::RAW :
     PRINT_FIELD(PaymentRemitterID) 
     group->fieldPaymentRemitterID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupInstrAttrib::scan( Array & arr, const char * fix, unsigned len ){
 GroupInstrAttrib * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldInstrAttribType::RAW :
     PRINT_FIELD(InstrAttribType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldInstrAttribType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldInstrAttribValue::RAW :
     PRINT_FIELD(InstrAttribValue) 
     group->fieldInstrAttribValue.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMiscFees::scan( Array & arr, const char * fix, unsigned len ){
 GroupMiscFees * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldMiscFeeAmt::RAW :
     PRINT_FIELD(MiscFeeAmt) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldMiscFeeAmt.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldMiscFeeCurr::RAW :
     PRINT_FIELD(MiscFeeCurr) 
     group->fieldMiscFeeCurr.offset = gpos;
     break;

   case FieldMiscFeeType::RAW :
     PRINT_FIELD(MiscFeeType) 
     group->fieldMiscFeeType.offset = gpos;
     break;

   case FieldMiscFeeBasis::RAW :
     PRINT_FIELD(MiscFeeBasis) 
     group->fieldMiscFeeBasis.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupQuoteQualifiers::scan( Array & arr, const char * fix, unsigned len ){
 GroupQuoteQualifiers * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldQuoteQualifier::RAW :
     PRINT_FIELD(QuoteQualifier) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldQuoteQualifier.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupDistribInsts::scan( Array & arr, const char * fix, unsigned len ){
 GroupDistribInsts * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldDistribPaymentMethod::RAW :
     PRINT_FIELD(DistribPaymentMethod) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldDistribPaymentMethod.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldDistribPercentage::RAW :
     PRINT_FIELD(DistribPercentage) 
     group->fieldDistribPercentage.offset = gpos;
     break;

   case FieldCashDistribCurr::RAW :
     PRINT_FIELD(CashDistribCurr) 
     group->fieldCashDistribCurr.offset = gpos;
     break;

   case FieldCashDistribAgentName::RAW :
     PRINT_FIELD(CashDistribAgentName) 
     group->fieldCashDistribAgentName.offset = gpos;
     break;

   case FieldCashDistribAgentCode::RAW :
     PRINT_FIELD(CashDistribAgentCode) 
     group->fieldCashDistribAgentCode.offset = gpos;
     break;

   case FieldCashDistribAgentAcctNumber::RAW :
     PRINT_FIELD(CashDistribAgentAcctNumber) 
     group->fieldCashDistribAgentAcctNumber.offset = gpos;
     break;

   case FieldCashDistribPayRef::RAW :
     PRINT_FIELD(CashDistribPayRef) 
     group->fieldCashDistribPayRef.offset = gpos;
     break;

   case FieldCashDistribAgentAcctName::RAW :
     PRINT_FIELD(CashDistribAgentAcctName) 
     group->fieldCashDistribAgentAcctName.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupTrdRegTimestamps::scan( Array & arr, const char * fix, unsigned len ){
 GroupTrdRegTimestamps * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldTrdRegTimestamp::RAW :
     PRINT_FIELD(TrdRegTimestamp) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldTrdRegTimestamp.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldTrdRegTimestampType::RAW :
     PRINT_FIELD(TrdRegTimestampType) 
     group->fieldTrdRegTimestampType.offset = gpos;
     break;

   case FieldTrdRegTimestampOrigin::RAW :
     PRINT_FIELD(TrdRegTimestampOrigin) 
     group->fieldTrdRegTimestampOrigin.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupAltMDSource::scan( Array & arr, const char * fix, unsigned len ){
 GroupAltMDSource * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldAltMDSourceID::RAW :
     PRINT_FIELD(AltMDSourceID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldAltMDSourceID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSides::scan( Array & arr, const char * fix, unsigned len ){
 GroupSides * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSide::RAW :
     PRINT_FIELD(Side) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSide.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldOrigClOrdID::RAW :
     PRINT_FIELD(OrigClOrdID) 
     group->fieldOrigClOrdID.offset = gpos;
     break;

   case FieldClOrdID::RAW :
     PRINT_FIELD(ClOrdID) 
     group->fieldClOrdID.offset = gpos;
     break;

   case FieldSecondaryClOrdID::RAW :
     PRINT_FIELD(SecondaryClOrdID) 
     group->fieldSecondaryClOrdID.offset = gpos;
     break;

   case FieldClOrdLinkID::RAW :
     PRINT_FIELD(ClOrdLinkID) 
     group->fieldClOrdLinkID.offset = gpos;
     break;

   case FieldOrigOrdModTime::RAW :
     PRINT_FIELD(OrigOrdModTime) 
     group->fieldOrigOrdModTime.offset = gpos;
     break;

   case FieldNoPartyIDs::RAW :
     PRINT_FIELD(NoPartyIDs) 
     group->fieldNoPartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartyIDs::scan( group->groupsPartyIDs, fix+pos, len - pos );
     break;

   case FieldTradeOriginationDate::RAW :
     PRINT_FIELD(TradeOriginationDate) 
     group->fieldTradeOriginationDate.offset = gpos;
     break;

   case FieldTradeDate::RAW :
     PRINT_FIELD(TradeDate) 
     group->fieldTradeDate.offset = gpos;
     break;

   case FieldOrderQty::RAW :
     PRINT_FIELD(OrderQty) 
     group->fieldOrderQty.offset = gpos;
     break;

   case FieldCashOrderQty::RAW :
     PRINT_FIELD(CashOrderQty) 
     group->fieldCashOrderQty.offset = gpos;
     break;

   case FieldOrderPercent::RAW :
     PRINT_FIELD(OrderPercent) 
     group->fieldOrderPercent.offset = gpos;
     break;

   case FieldRoundingDirection::RAW :
     PRINT_FIELD(RoundingDirection) 
     group->fieldRoundingDirection.offset = gpos;
     break;

   case FieldRoundingModulus::RAW :
     PRINT_FIELD(RoundingModulus) 
     group->fieldRoundingModulus.offset = gpos;
     break;

   case FieldComplianceID::RAW :
     PRINT_FIELD(ComplianceID) 
     group->fieldComplianceID.offset = gpos;
     break;

   case FieldText::RAW :
     PRINT_FIELD(Text) 
     group->fieldText.offset = gpos;
     break;

   case FieldEncodedTextLen::RAW :
     PRINT_FIELD(EncodedTextLen) 
     group->fieldEncodedTextLen.offset = gpos;
     break;

   case FieldEncodedText::RAW :
     PRINT_FIELD(EncodedText) 
     group->fieldEncodedText.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupRoutingIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupRoutingIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldRoutingType::RAW :
     PRINT_FIELD(RoutingType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldRoutingType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldRoutingID::RAW :
     PRINT_FIELD(RoutingID) 
     group->fieldRoutingID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPosAmt::scan( Array & arr, const char * fix, unsigned len ){
 GroupPosAmt * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldPosAmtType::RAW :
     PRINT_FIELD(PosAmtType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldPosAmtType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldPosAmt::RAW :
     PRINT_FIELD(PosAmt) 
     group->fieldPosAmt.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLinesOfText::scan( Array & arr, const char * fix, unsigned len ){
 GroupLinesOfText * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldText::RAW :
     PRINT_FIELD(Text) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldText.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldEncodedTextLen::RAW :
     PRINT_FIELD(EncodedTextLen) 
     group->fieldEncodedTextLen.offset = gpos;
     break;

   case FieldEncodedText::RAW :
     PRINT_FIELD(EncodedText) 
     group->fieldEncodedText.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupIOIQualifiers::scan( Array & arr, const char * fix, unsigned len ){
 GroupIOIQualifiers * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldIOIQualifier::RAW :
     PRINT_FIELD(IOIQualifier) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldIOIQualifier.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupDates::scan( Array & arr, const char * fix, unsigned len ){
 GroupDates * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldTradeDate::RAW :
     PRINT_FIELD(TradeDate) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldTradeDate.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldTransactTime::RAW :
     PRINT_FIELD(TransactTime) 
     group->fieldTransactTime.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMDEntryTypes::scan( Array & arr, const char * fix, unsigned len ){
 GroupMDEntryTypes * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldMDEntryType::RAW :
     PRINT_FIELD(MDEntryType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldMDEntryType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupRelatedSym::scan( Array & arr, const char * fix, unsigned len ){
 GroupRelatedSym * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSymbol::RAW :
     PRINT_FIELD(Symbol) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSymbol.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSymbolSfx::RAW :
     PRINT_FIELD(SymbolSfx) 
     group->fieldSymbolSfx.offset = gpos;
     break;

   case FieldSecurityID::RAW :
     PRINT_FIELD(SecurityID) 
     group->fieldSecurityID.offset = gpos;
     break;

   case FieldSecurityIDSource::RAW :
     PRINT_FIELD(SecurityIDSource) 
     group->fieldSecurityIDSource.offset = gpos;
     break;

   case FieldNoSecurityAltID::RAW :
     PRINT_FIELD(NoSecurityAltID) 
     group->fieldNoSecurityAltID.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::scan( group->groupsSecurityAltID, fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     PRINT_FIELD(Product) 
     group->fieldProduct.offset = gpos;
     break;

   case FieldCFICode::RAW :
     PRINT_FIELD(CFICode) 
     group->fieldCFICode.offset = gpos;
     break;

   case FieldSecurityType::RAW :
     PRINT_FIELD(SecurityType) 
     group->fieldSecurityType.offset = gpos;
     break;

   case FieldSecuritySubType::RAW :
     PRINT_FIELD(SecuritySubType) 
     group->fieldSecuritySubType.offset = gpos;
     break;

   case FieldMaturityMonthYear::RAW :
     PRINT_FIELD(MaturityMonthYear) 
     group->fieldMaturityMonthYear.offset = gpos;
     break;

   case FieldMaturityDate::RAW :
     PRINT_FIELD(MaturityDate) 
     group->fieldMaturityDate.offset = gpos;
     break;

   case FieldPutOrCall::RAW :
     PRINT_FIELD(PutOrCall) 
     group->fieldPutOrCall.offset = gpos;
     break;

   case FieldCouponPaymentDate::RAW :
     PRINT_FIELD(CouponPaymentDate) 
     group->fieldCouponPaymentDate.offset = gpos;
     break;

   case FieldIssueDate::RAW :
     PRINT_FIELD(IssueDate) 
     group->fieldIssueDate.offset = gpos;
     break;

   case FieldRepoCollateralSecurityType::RAW :
     PRINT_FIELD(RepoCollateralSecurityType) 
     group->fieldRepoCollateralSecurityType.offset = gpos;
     break;

   case FieldRepurchaseTerm::RAW :
     PRINT_FIELD(RepurchaseTerm) 
     group->fieldRepurchaseTerm.offset = gpos;
     break;

   case FieldRepurchaseRate::RAW :
     PRINT_FIELD(RepurchaseRate) 
     group->fieldRepurchaseRate.offset = gpos;
     break;

   case FieldFactor::RAW :
     PRINT_FIELD(Factor) 
     group->fieldFactor.offset = gpos;
     break;

   case FieldCreditRating::RAW :
     PRINT_FIELD(CreditRating) 
     group->fieldCreditRating.offset = gpos;
     break;

   case FieldInstrRegistry::RAW :
     PRINT_FIELD(InstrRegistry) 
     group->fieldInstrRegistry.offset = gpos;
     break;

   case FieldCountryOfIssue::RAW :
     PRINT_FIELD(CountryOfIssue) 
     group->fieldCountryOfIssue.offset = gpos;
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     PRINT_FIELD(StateOrProvinceOfIssue) 
     group->fieldStateOrProvinceOfIssue.offset = gpos;
     break;

   case FieldLocaleOfIssue::RAW :
     PRINT_FIELD(LocaleOfIssue) 
     group->fieldLocaleOfIssue.offset = gpos;
     break;

   case FieldRedemptionDate::RAW :
     PRINT_FIELD(RedemptionDate) 
     group->fieldRedemptionDate.offset = gpos;
     break;

   case FieldStrikePrice::RAW :
     PRINT_FIELD(StrikePrice) 
     group->fieldStrikePrice.offset = gpos;
     break;

   case FieldStrikeCurrency::RAW :
     PRINT_FIELD(StrikeCurrency) 
     group->fieldStrikeCurrency.offset = gpos;
     break;

   case FieldOptAttribute::RAW :
     PRINT_FIELD(OptAttribute) 
     group->fieldOptAttribute.offset = gpos;
     break;

   case FieldContractMultiplier::RAW :
     PRINT_FIELD(ContractMultiplier) 
     group->fieldContractMultiplier.offset = gpos;
     break;

   case FieldCouponRate::RAW :
     PRINT_FIELD(CouponRate) 
     group->fieldCouponRate.offset = gpos;
     break;

   case FieldSecurityExchange::RAW :
     PRINT_FIELD(SecurityExchange) 
     group->fieldSecurityExchange.offset = gpos;
     break;

   case FieldIssuer::RAW :
     PRINT_FIELD(Issuer) 
     group->fieldIssuer.offset = gpos;
     break;

   case FieldEncodedIssuerLen::RAW :
     PRINT_FIELD(EncodedIssuerLen) 
     group->fieldEncodedIssuerLen.offset = gpos;
     break;

   case FieldEncodedIssuer::RAW :
     PRINT_FIELD(EncodedIssuer) 
     group->fieldEncodedIssuer.offset = gpos;
     break;

   case FieldSecurityDesc::RAW :
     PRINT_FIELD(SecurityDesc) 
     group->fieldSecurityDesc.offset = gpos;
     break;

   case FieldEncodedSecurityDescLen::RAW :
     PRINT_FIELD(EncodedSecurityDescLen) 
     group->fieldEncodedSecurityDescLen.offset = gpos;
     break;

   case FieldEncodedSecurityDesc::RAW :
     PRINT_FIELD(EncodedSecurityDesc) 
     group->fieldEncodedSecurityDesc.offset = gpos;
     break;

   case FieldPool::RAW :
     PRINT_FIELD(Pool) 
     group->fieldPool.offset = gpos;
     break;

   case FieldContractSettlMonth::RAW :
     PRINT_FIELD(ContractSettlMonth) 
     group->fieldContractSettlMonth.offset = gpos;
     break;

   case FieldCPProgram::RAW :
     PRINT_FIELD(CPProgram) 
     group->fieldCPProgram.offset = gpos;
     break;

   case FieldCPRegType::RAW :
     PRINT_FIELD(CPRegType) 
     group->fieldCPRegType.offset = gpos;
     break;

   case FieldNoEvents::RAW :
     PRINT_FIELD(NoEvents) 
     group->fieldNoEvents.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::scan( group->groupsEvents, fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     PRINT_FIELD(DatedDate) 
     group->fieldDatedDate.offset = gpos;
     break;

   case FieldInterestAccrualDate::RAW :
     PRINT_FIELD(InterestAccrualDate) 
     group->fieldInterestAccrualDate.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupContraBrokers::scan( Array & arr, const char * fix, unsigned len ){
 GroupContraBrokers * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldContraBroker::RAW :
     PRINT_FIELD(ContraBroker) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldContraBroker.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldContraTrader::RAW :
     PRINT_FIELD(ContraTrader) 
     group->fieldContraTrader.offset = gpos;
     break;

   case FieldContraTradeQty::RAW :
     PRINT_FIELD(ContraTradeQty) 
     group->fieldContraTradeQty.offset = gpos;
     break;

   case FieldContraTradeTime::RAW :
     PRINT_FIELD(ContraTradeTime) 
     group->fieldContraTradeTime.offset = gpos;
     break;

   case FieldContraLegRefID::RAW :
     PRINT_FIELD(ContraLegRefID) 
     group->fieldContraLegRefID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupTrades::scan( Array & arr, const char * fix, unsigned len ){
 GroupTrades * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldTradeReportID::RAW :
     PRINT_FIELD(TradeReportID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldTradeReportID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSecondaryTradeReportID::RAW :
     PRINT_FIELD(SecondaryTradeReportID) 
     group->fieldSecondaryTradeReportID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupStrikes::scan( Array & arr, const char * fix, unsigned len ){
 GroupStrikes * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldSymbol::RAW :
     PRINT_FIELD(Symbol) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldSymbol.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldSymbolSfx::RAW :
     PRINT_FIELD(SymbolSfx) 
     group->fieldSymbolSfx.offset = gpos;
     break;

   case FieldSecurityID::RAW :
     PRINT_FIELD(SecurityID) 
     group->fieldSecurityID.offset = gpos;
     break;

   case FieldSecurityIDSource::RAW :
     PRINT_FIELD(SecurityIDSource) 
     group->fieldSecurityIDSource.offset = gpos;
     break;

   case FieldNoSecurityAltID::RAW :
     PRINT_FIELD(NoSecurityAltID) 
     group->fieldNoSecurityAltID.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::scan( group->groupsSecurityAltID, fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     PRINT_FIELD(Product) 
     group->fieldProduct.offset = gpos;
     break;

   case FieldCFICode::RAW :
     PRINT_FIELD(CFICode) 
     group->fieldCFICode.offset = gpos;
     break;

   case FieldSecurityType::RAW :
     PRINT_FIELD(SecurityType) 
     group->fieldSecurityType.offset = gpos;
     break;

   case FieldSecuritySubType::RAW :
     PRINT_FIELD(SecuritySubType) 
     group->fieldSecuritySubType.offset = gpos;
     break;

   case FieldMaturityMonthYear::RAW :
     PRINT_FIELD(MaturityMonthYear) 
     group->fieldMaturityMonthYear.offset = gpos;
     break;

   case FieldMaturityDate::RAW :
     PRINT_FIELD(MaturityDate) 
     group->fieldMaturityDate.offset = gpos;
     break;

   case FieldPutOrCall::RAW :
     PRINT_FIELD(PutOrCall) 
     group->fieldPutOrCall.offset = gpos;
     break;

   case FieldCouponPaymentDate::RAW :
     PRINT_FIELD(CouponPaymentDate) 
     group->fieldCouponPaymentDate.offset = gpos;
     break;

   case FieldIssueDate::RAW :
     PRINT_FIELD(IssueDate) 
     group->fieldIssueDate.offset = gpos;
     break;

   case FieldRepoCollateralSecurityType::RAW :
     PRINT_FIELD(RepoCollateralSecurityType) 
     group->fieldRepoCollateralSecurityType.offset = gpos;
     break;

   case FieldRepurchaseTerm::RAW :
     PRINT_FIELD(RepurchaseTerm) 
     group->fieldRepurchaseTerm.offset = gpos;
     break;

   case FieldRepurchaseRate::RAW :
     PRINT_FIELD(RepurchaseRate) 
     group->fieldRepurchaseRate.offset = gpos;
     break;

   case FieldFactor::RAW :
     PRINT_FIELD(Factor) 
     group->fieldFactor.offset = gpos;
     break;

   case FieldCreditRating::RAW :
     PRINT_FIELD(CreditRating) 
     group->fieldCreditRating.offset = gpos;
     break;

   case FieldInstrRegistry::RAW :
     PRINT_FIELD(InstrRegistry) 
     group->fieldInstrRegistry.offset = gpos;
     break;

   case FieldCountryOfIssue::RAW :
     PRINT_FIELD(CountryOfIssue) 
     group->fieldCountryOfIssue.offset = gpos;
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     PRINT_FIELD(StateOrProvinceOfIssue) 
     group->fieldStateOrProvinceOfIssue.offset = gpos;
     break;

   case FieldLocaleOfIssue::RAW :
     PRINT_FIELD(LocaleOfIssue) 
     group->fieldLocaleOfIssue.offset = gpos;
     break;

   case FieldRedemptionDate::RAW :
     PRINT_FIELD(RedemptionDate) 
     group->fieldRedemptionDate.offset = gpos;
     break;

   case FieldStrikePrice::RAW :
     PRINT_FIELD(StrikePrice) 
     group->fieldStrikePrice.offset = gpos;
     break;

   case FieldStrikeCurrency::RAW :
     PRINT_FIELD(StrikeCurrency) 
     group->fieldStrikeCurrency.offset = gpos;
     break;

   case FieldOptAttribute::RAW :
     PRINT_FIELD(OptAttribute) 
     group->fieldOptAttribute.offset = gpos;
     break;

   case FieldContractMultiplier::RAW :
     PRINT_FIELD(ContractMultiplier) 
     group->fieldContractMultiplier.offset = gpos;
     break;

   case FieldCouponRate::RAW :
     PRINT_FIELD(CouponRate) 
     group->fieldCouponRate.offset = gpos;
     break;

   case FieldSecurityExchange::RAW :
     PRINT_FIELD(SecurityExchange) 
     group->fieldSecurityExchange.offset = gpos;
     break;

   case FieldIssuer::RAW :
     PRINT_FIELD(Issuer) 
     group->fieldIssuer.offset = gpos;
     break;

   case FieldEncodedIssuerLen::RAW :
     PRINT_FIELD(EncodedIssuerLen) 
     group->fieldEncodedIssuerLen.offset = gpos;
     break;

   case FieldEncodedIssuer::RAW :
     PRINT_FIELD(EncodedIssuer) 
     group->fieldEncodedIssuer.offset = gpos;
     break;

   case FieldSecurityDesc::RAW :
     PRINT_FIELD(SecurityDesc) 
     group->fieldSecurityDesc.offset = gpos;
     break;

   case FieldEncodedSecurityDescLen::RAW :
     PRINT_FIELD(EncodedSecurityDescLen) 
     group->fieldEncodedSecurityDescLen.offset = gpos;
     break;

   case FieldEncodedSecurityDesc::RAW :
     PRINT_FIELD(EncodedSecurityDesc) 
     group->fieldEncodedSecurityDesc.offset = gpos;
     break;

   case FieldPool::RAW :
     PRINT_FIELD(Pool) 
     group->fieldPool.offset = gpos;
     break;

   case FieldContractSettlMonth::RAW :
     PRINT_FIELD(ContractSettlMonth) 
     group->fieldContractSettlMonth.offset = gpos;
     break;

   case FieldCPProgram::RAW :
     PRINT_FIELD(CPProgram) 
     group->fieldCPProgram.offset = gpos;
     break;

   case FieldCPRegType::RAW :
     PRINT_FIELD(CPRegType) 
     group->fieldCPRegType.offset = gpos;
     break;

   case FieldNoEvents::RAW :
     PRINT_FIELD(NoEvents) 
     group->fieldNoEvents.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::scan( group->groupsEvents, fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     PRINT_FIELD(DatedDate) 
     group->fieldDatedDate.offset = gpos;
     break;

   case FieldInterestAccrualDate::RAW :
     PRINT_FIELD(InterestAccrualDate) 
     group->fieldInterestAccrualDate.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupBidDescriptors::scan( Array & arr, const char * fix, unsigned len ){
 GroupBidDescriptors * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldBidDescriptorType::RAW :
     PRINT_FIELD(BidDescriptorType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldBidDescriptorType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldBidDescriptor::RAW :
     PRINT_FIELD(BidDescriptor) 
     group->fieldBidDescriptor.offset = gpos;
     break;

   case FieldSideValueInd::RAW :
     PRINT_FIELD(SideValueInd) 
     group->fieldSideValueInd.offset = gpos;
     break;

   case FieldLiquidityValue::RAW :
     PRINT_FIELD(LiquidityValue) 
     group->fieldLiquidityValue.offset = gpos;
     break;

   case FieldLiquidityNumSecurities::RAW :
     PRINT_FIELD(LiquidityNumSecurities) 
     group->fieldLiquidityNumSecurities.offset = gpos;
     break;

   case FieldLiquidityPctLow::RAW :
     PRINT_FIELD(LiquidityPctLow) 
     group->fieldLiquidityPctLow.offset = gpos;
     break;

   case FieldLiquidityPctHigh::RAW :
     PRINT_FIELD(LiquidityPctHigh) 
     group->fieldLiquidityPctHigh.offset = gpos;
     break;

   case FieldEFPTrackingError::RAW :
     PRINT_FIELD(EFPTrackingError) 
     group->fieldEFPTrackingError.offset = gpos;
     break;

   case FieldFairValue::RAW :
     PRINT_FIELD(FairValue) 
     group->fieldFairValue.offset = gpos;
     break;

   case FieldOutsideIndexPct::RAW :
     PRINT_FIELD(OutsideIndexPct) 
     group->fieldOutsideIndexPct.offset = gpos;
     break;

   case FieldValueOfFutures::RAW :
     PRINT_FIELD(ValueOfFutures) 
     group->fieldValueOfFutures.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupCompIDs::scan( Array & arr, const char * fix, unsigned len ){
 GroupCompIDs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldRefCompID::RAW :
     PRINT_FIELD(RefCompID) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldRefCompID.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldRefSubID::RAW :
     PRINT_FIELD(RefSubID) 
     group->fieldRefSubID.offset = gpos;
     break;

   case FieldLocationID::RAW :
     PRINT_FIELD(LocationID) 
     group->fieldLocationID.offset = gpos;
     break;

   case FieldDeskID::RAW :
     PRINT_FIELD(DeskID) 
     group->fieldDeskID.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLegAllocs::scan( Array & arr, const char * fix, unsigned len ){
 GroupLegAllocs * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldLegAllocAccount::RAW :
     PRINT_FIELD(LegAllocAccount) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldLegAllocAccount.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldLegIndividualAllocID::RAW :
     PRINT_FIELD(LegIndividualAllocID) 
     group->fieldLegIndividualAllocID.offset = gpos;
     break;

   case FieldNoNested2PartyIDs::RAW :
     PRINT_FIELD(NoNested2PartyIDs) 
     group->fieldNoNested2PartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNested2PartyIDs::scan( group->groupsNested2PartyIDs, fix+pos, len - pos );
     break;

   case FieldLegAllocQty::RAW :
     PRINT_FIELD(LegAllocQty) 
     group->fieldLegAllocQty.offset = gpos;
     break;

   case FieldLegAllocAcctIDSource::RAW :
     PRINT_FIELD(LegAllocAcctIDSource) 
     group->fieldLegAllocAcctIDSource.offset = gpos;
     break;

   case FieldLegSettlCurrency::RAW :
     PRINT_FIELD(LegSettlCurrency) 
     group->fieldLegSettlCurrency.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupRegistDtls::scan( Array & arr, const char * fix, unsigned len ){
 GroupRegistDtls * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldRegistDtls::RAW :
     PRINT_FIELD(RegistDtls) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldRegistDtls.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldRegistEmail::RAW :
     PRINT_FIELD(RegistEmail) 
     group->fieldRegistEmail.offset = gpos;
     break;

   case FieldMailingDtls::RAW :
     PRINT_FIELD(MailingDtls) 
     group->fieldMailingDtls.offset = gpos;
     break;

   case FieldMailingInst::RAW :
     PRINT_FIELD(MailingInst) 
     group->fieldMailingInst.offset = gpos;
     break;

   case FieldNoNestedPartyIDs::RAW :
     PRINT_FIELD(NoNestedPartyIDs) 
     group->fieldNoNestedPartyIDs.offset = gpos;
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartyIDs::scan( group->groupsNestedPartyIDs, fix+pos, len - pos );
     break;

   case FieldOwnerType::RAW :
     PRINT_FIELD(OwnerType) 
     group->fieldOwnerType.offset = gpos;
     break;

   case FieldDateOfBirth::RAW :
     PRINT_FIELD(DateOfBirth) 
     group->fieldDateOfBirth.offset = gpos;
     break;

   case FieldInvestorCountryOfResidence::RAW :
     PRINT_FIELD(InvestorCountryOfResidence) 
     group->fieldInvestorCountryOfResidence.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupContAmts::scan( Array & arr, const char * fix, unsigned len ){
 GroupContAmts * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldContAmtType::RAW :
     PRINT_FIELD(ContAmtType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldContAmtType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldContAmtValue::RAW :
     PRINT_FIELD(ContAmtValue) 
     group->fieldContAmtValue.offset = gpos;
     break;

   case FieldContAmtCurr::RAW :
     PRINT_FIELD(ContAmtCurr) 
     group->fieldContAmtCurr.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMDEntries::scan( Array & arr, const char * fix, unsigned len ){
 GroupMDEntries * group = nullptr; 
 offset_t prev = 0, pos = 0, gpos = 0;
 const char * groupBuf = fix; 
 unsigned groupCount = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   gpos = pos - (groupBuf - fix);
   switch( tag ){
   case FieldMDEntryType::RAW :
     PRINT_FIELD(MDEntryType) 
     group = groupCount < arr.size() ? & arr[ groupCount ] : & arr.emplace_back();
     group->fieldMDEntryType.offset = pos - prev;
     group->buf = fix+prev;
     groupBuf = fix+prev;
     ++groupCount;
     break;

   case FieldMDEntryPx::RAW :
     PRINT_FIELD(MDEntryPx) 
     group->fieldMDEntryPx.offset = gpos;
     break;

   case FieldCurrency::RAW :
     PRINT_FIELD(Currency) 
     group->fieldCurrency.offset = gpos;
     break;

   case FieldMDEntrySize::RAW :
     PRINT_FIELD(MDEntrySize) 
     group->fieldMDEntrySize.offset = gpos;
     break;

   case FieldMDEntryDate::RAW :
     PRINT_FIELD(MDEntryDate) 
     group->fieldMDEntryDate.offset = gpos;
     break;

   case FieldMDEntryTime::RAW :
     PRINT_FIELD(MDEntryTime) 
     group->fieldMDEntryTime.offset = gpos;
     break;

   case FieldTickDirection::RAW :
     PRINT_FIELD(TickDirection) 
     group->fieldTickDirection.offset = gpos;
     break;

   case FieldMDMkt::RAW :
     PRINT_FIELD(MDMkt) 
     group->fieldMDMkt.offset = gpos;
     break;

   case FieldTradingSessionID::RAW :
     PRINT_FIELD(TradingSessionID) 
     group->fieldTradingSessionID.offset = gpos;
     break;

   case FieldTradingSessionSubID::RAW :
     PRINT_FIELD(TradingSessionSubID) 
     group->fieldTradingSessionSubID.offset = gpos;
     break;

   case FieldQuoteCondition::RAW :
     PRINT_FIELD(QuoteCondition) 
     group->fieldQuoteCondition.offset = gpos;
     break;

   case FieldTradeCondition::RAW :
     PRINT_FIELD(TradeCondition) 
     group->fieldTradeCondition.offset = gpos;
     break;

   case FieldMDEntryOriginator::RAW :
     PRINT_FIELD(MDEntryOriginator) 
     group->fieldMDEntryOriginator.offset = gpos;
     break;

   case FieldLocationID::RAW :
     PRINT_FIELD(LocationID) 
     group->fieldLocationID.offset = gpos;
     break;

   case FieldDeskID::RAW :
     PRINT_FIELD(DeskID) 
     group->fieldDeskID.offset = gpos;
     break;

   case FieldOpenCloseSettlFlag::RAW :
     PRINT_FIELD(OpenCloseSettlFlag) 
     group->fieldOpenCloseSettlFlag.offset = gpos;
     break;

   case FieldTimeInForce::RAW :
     PRINT_FIELD(TimeInForce) 
     group->fieldTimeInForce.offset = gpos;
     break;

   case FieldExpireDate::RAW :
     PRINT_FIELD(ExpireDate) 
     group->fieldExpireDate.offset = gpos;
     break;

   case FieldExpireTime::RAW :
     PRINT_FIELD(ExpireTime) 
     group->fieldExpireTime.offset = gpos;
     break;

   case FieldMinQty::RAW :
     PRINT_FIELD(MinQty) 
     group->fieldMinQty.offset = gpos;
     break;

   case FieldExecInst::RAW :
     PRINT_FIELD(ExecInst) 
     group->fieldExecInst.offset = gpos;
     break;

   case FieldSellerDays::RAW :
     PRINT_FIELD(SellerDays) 
     group->fieldSellerDays.offset = gpos;
     break;

   case FieldOrderID::RAW :
     PRINT_FIELD(OrderID) 
     group->fieldOrderID.offset = gpos;
     break;

   case FieldQuoteEntryID::RAW :
     PRINT_FIELD(QuoteEntryID) 
     group->fieldQuoteEntryID.offset = gpos;
     break;

   case FieldMDEntryBuyer::RAW :
     PRINT_FIELD(MDEntryBuyer) 
     group->fieldMDEntryBuyer.offset = gpos;
     break;

   case FieldMDEntrySeller::RAW :
     PRINT_FIELD(MDEntrySeller) 
     group->fieldMDEntrySeller.offset = gpos;
     break;

   case FieldNumberOfOrders::RAW :
     PRINT_FIELD(NumberOfOrders) 
     group->fieldNumberOfOrders.offset = gpos;
     break;

   case FieldMDEntryPositionNo::RAW :
     PRINT_FIELD(MDEntryPositionNo) 
     group->fieldMDEntryPositionNo.offset = gpos;
     break;

   case FieldScope::RAW :
     PRINT_FIELD(Scope) 
     group->fieldScope.offset = gpos;
     break;

   case FieldPriceDelta::RAW :
     PRINT_FIELD(PriceDelta) 
     group->fieldPriceDelta.offset = gpos;
     break;

   case FieldText::RAW :
     PRINT_FIELD(Text) 
     group->fieldText.offset = gpos;
     break;

   case FieldEncodedTextLen::RAW :
     PRINT_FIELD(EncodedTextLen) 
     group->fieldEncodedTextLen.offset = gpos;
     break;

   case FieldEncodedText::RAW :
     PRINT_FIELD(EncodedText) 
     group->fieldEncodedText.offset = gpos;
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}


// -------------------------------------- skip ----------------------------------------

offset_t GroupLegStipulations::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldLegStipulationType::RAW :
     break;

   case FieldLegStipulationValue::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupEvents::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldEventType::RAW :
     break;

   case FieldEventDate::RAW :
     break;

   case FieldEventPx::RAW :
     break;

   case FieldEventText::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLegSecurityAltID::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldLegSecurityAltID::RAW :
     break;

   case FieldLegSecurityAltIDSource::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupCapacities::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldOrderCapacity::RAW :
     break;

   case FieldOrderRestrictions::RAW :
     break;

   case FieldOrderCapacityQty::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested3PartySubIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldNested3PartySubID::RAW :
     break;

   case FieldNested3PartySubIDType::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPartySubIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldPartySubID::RAW :
     break;

   case FieldPartySubIDType::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested2PartySubIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldNested2PartySubID::RAW :
     break;

   case FieldNested2PartySubIDType::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested2PartyIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldNested2PartyID::RAW :
     break;

   case FieldNested2PartyIDSource::RAW :
     break;

   case FieldNested2PartyRole::RAW :
     break;

   case FieldNoNested2PartySubIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNested2PartySubIDs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupHops::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldHopCompID::RAW :
     break;

   case FieldHopSendingTime::RAW :
     break;

   case FieldHopRefID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupCollInquiryQualifier::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldCollInquiryQualifier::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPartyIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldPartyID::RAW :
     break;

   case FieldPartyIDSource::RAW :
     break;

   case FieldPartyRole::RAW :
     break;

   case FieldNoPartySubIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartySubIDs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupAllocs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldAllocAccount::RAW :
     break;

   case FieldAllocAcctIDSource::RAW :
     break;

   case FieldAllocPrice::RAW :
     break;

   case FieldIndividualAllocID::RAW :
     break;

   case FieldIndividualAllocRejCode::RAW :
     break;

   case FieldAllocText::RAW :
     break;

   case FieldEncodedAllocTextLen::RAW :
     break;

   case FieldEncodedAllocText::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupTradingSessions::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldTradingSessionID::RAW :
     break;

   case FieldTradingSessionSubID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSecurityAltID::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSecurityAltID::RAW :
     break;

   case FieldSecurityAltIDSource::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupUnderlyingSecurityAltID::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldUnderlyingSecurityAltID::RAW :
     break;

   case FieldUnderlyingSecurityAltIDSource::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupUnderlyingStips::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldUnderlyingStipType::RAW :
     break;

   case FieldUnderlyingStipValue::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupUnderlyings::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldUnderlyingSymbol::RAW :
     break;

   case FieldUnderlyingSymbolSfx::RAW :
     break;

   case FieldUnderlyingSecurityID::RAW :
     break;

   case FieldUnderlyingSecurityIDSource::RAW :
     break;

   case FieldNoUnderlyingSecurityAltID::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingSecurityAltID::skip( fix+pos, len - pos );
     break;

   case FieldUnderlyingProduct::RAW :
     break;

   case FieldUnderlyingCFICode::RAW :
     break;

   case FieldUnderlyingSecurityType::RAW :
     break;

   case FieldUnderlyingSecuritySubType::RAW :
     break;

   case FieldUnderlyingMaturityMonthYear::RAW :
     break;

   case FieldUnderlyingMaturityDate::RAW :
     break;

   case FieldUnderlyingPutOrCall::RAW :
     break;

   case FieldUnderlyingCouponPaymentDate::RAW :
     break;

   case FieldUnderlyingIssueDate::RAW :
     break;

   case FieldUnderlyingRepoCollateralSecurityType::RAW :
     break;

   case FieldUnderlyingRepurchaseTerm::RAW :
     break;

   case FieldUnderlyingRepurchaseRate::RAW :
     break;

   case FieldUnderlyingFactor::RAW :
     break;

   case FieldUnderlyingCreditRating::RAW :
     break;

   case FieldUnderlyingInstrRegistry::RAW :
     break;

   case FieldUnderlyingCountryOfIssue::RAW :
     break;

   case FieldUnderlyingStateOrProvinceOfIssue::RAW :
     break;

   case FieldUnderlyingLocaleOfIssue::RAW :
     break;

   case FieldUnderlyingRedemptionDate::RAW :
     break;

   case FieldUnderlyingStrikePrice::RAW :
     break;

   case FieldUnderlyingStrikeCurrency::RAW :
     break;

   case FieldUnderlyingOptAttribute::RAW :
     break;

   case FieldUnderlyingContractMultiplier::RAW :
     break;

   case FieldUnderlyingCouponRate::RAW :
     break;

   case FieldUnderlyingSecurityExchange::RAW :
     break;

   case FieldUnderlyingIssuer::RAW :
     break;

   case FieldEncodedUnderlyingIssuerLen::RAW :
     break;

   case FieldEncodedUnderlyingIssuer::RAW :
     break;

   case FieldUnderlyingSecurityDesc::RAW :
     break;

   case FieldEncodedUnderlyingSecurityDescLen::RAW :
     break;

   case FieldEncodedUnderlyingSecurityDesc::RAW :
     break;

   case FieldUnderlyingCPProgram::RAW :
     break;

   case FieldUnderlyingCPRegType::RAW :
     break;

   case FieldUnderlyingCurrency::RAW :
     break;

   case FieldUnderlyingQty::RAW :
     break;

   case FieldUnderlyingPx::RAW :
     break;

   case FieldUnderlyingDirtyPrice::RAW :
     break;

   case FieldUnderlyingEndPrice::RAW :
     break;

   case FieldUnderlyingStartValue::RAW :
     break;

   case FieldUnderlyingCurrentValue::RAW :
     break;

   case FieldUnderlyingEndValue::RAW :
     break;

   case FieldNoUnderlyingStips::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingStips::skip( fix+pos, len - pos );
     break;

   case FieldUnderlyingSettlPrice::RAW :
     break;

   case FieldUnderlyingSettlPriceType::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupStipulations::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldStipulationType::RAW :
     break;

   case FieldStipulationValue::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupOrders::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldClOrdID::RAW :
     break;

   case FieldSecondaryClOrdID::RAW :
     break;

   case FieldListSeqNo::RAW :
     break;

   case FieldClOrdLinkID::RAW :
     break;

   case FieldSettlInstMode::RAW :
     break;

   case FieldNoPartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartyIDs::skip( fix+pos, len - pos );
     break;

   case FieldTradeOriginationDate::RAW :
     break;

   case FieldTradeDate::RAW :
     break;

   case FieldAccount::RAW :
     break;

   case FieldAcctIDSource::RAW :
     break;

   case FieldAccountType::RAW :
     break;

   case FieldDayBookingInst::RAW :
     break;

   case FieldBookingUnit::RAW :
     break;

   case FieldAllocID::RAW :
     break;

   case FieldPreallocMethod::RAW :
     break;

   case FieldNoAllocs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupAllocs::skip( fix+pos, len - pos );
     break;

   case FieldSettlType::RAW :
     break;

   case FieldSettlDate::RAW :
     break;

   case FieldCashMargin::RAW :
     break;

   case FieldClearingFeeIndicator::RAW :
     break;

   case FieldHandlInst::RAW :
     break;

   case FieldExecInst::RAW :
     break;

   case FieldMinQty::RAW :
     break;

   case FieldMaxFloor::RAW :
     break;

   case FieldExDestination::RAW :
     break;

   case FieldNoTradingSessions::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupTradingSessions::skip( fix+pos, len - pos );
     break;

   case FieldProcessCode::RAW :
     break;

   case FieldSymbol::RAW :
     break;

   case FieldSymbolSfx::RAW :
     break;

   case FieldSecurityID::RAW :
     break;

   case FieldSecurityIDSource::RAW :
     break;

   case FieldNoSecurityAltID::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::skip( fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     break;

   case FieldCFICode::RAW :
     break;

   case FieldSecurityType::RAW :
     break;

   case FieldSecuritySubType::RAW :
     break;

   case FieldMaturityMonthYear::RAW :
     break;

   case FieldMaturityDate::RAW :
     break;

   case FieldPutOrCall::RAW :
     break;

   case FieldCouponPaymentDate::RAW :
     break;

   case FieldIssueDate::RAW :
     break;

   case FieldRepoCollateralSecurityType::RAW :
     break;

   case FieldRepurchaseTerm::RAW :
     break;

   case FieldRepurchaseRate::RAW :
     break;

   case FieldFactor::RAW :
     break;

   case FieldCreditRating::RAW :
     break;

   case FieldInstrRegistry::RAW :
     break;

   case FieldCountryOfIssue::RAW :
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     break;

   case FieldLocaleOfIssue::RAW :
     break;

   case FieldRedemptionDate::RAW :
     break;

   case FieldStrikePrice::RAW :
     break;

   case FieldStrikeCurrency::RAW :
     break;

   case FieldOptAttribute::RAW :
     break;

   case FieldContractMultiplier::RAW :
     break;

   case FieldCouponRate::RAW :
     break;

   case FieldSecurityExchange::RAW :
     break;

   case FieldIssuer::RAW :
     break;

   case FieldEncodedIssuerLen::RAW :
     break;

   case FieldEncodedIssuer::RAW :
     break;

   case FieldSecurityDesc::RAW :
     break;

   case FieldEncodedSecurityDescLen::RAW :
     break;

   case FieldEncodedSecurityDesc::RAW :
     break;

   case FieldPool::RAW :
     break;

   case FieldContractSettlMonth::RAW :
     break;

   case FieldCPProgram::RAW :
     break;

   case FieldCPRegType::RAW :
     break;

   case FieldNoEvents::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::skip( fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     break;

   case FieldInterestAccrualDate::RAW :
     break;

   case FieldNoUnderlyings::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyings::skip( fix+pos, len - pos );
     break;

   case FieldPrevClosePx::RAW :
     break;

   case FieldSide::RAW :
     break;

   case FieldSideValueInd::RAW :
     break;

   case FieldLocateReqd::RAW :
     break;

   case FieldTransactTime::RAW :
     break;

   case FieldNoStipulations::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupStipulations::skip( fix+pos, len - pos );
     break;

   case FieldQtyType::RAW :
     break;

   case FieldOrderQty::RAW :
     break;

   case FieldCashOrderQty::RAW :
     break;

   case FieldOrderPercent::RAW :
     break;

   case FieldRoundingDirection::RAW :
     break;

   case FieldRoundingModulus::RAW :
     break;

   case FieldOrdType::RAW :
     break;

   case FieldPriceType::RAW :
     break;

   case FieldPrice::RAW :
     break;

   case FieldStopPx::RAW :
     break;

   case FieldSpread::RAW :
     break;

   case FieldBenchmarkCurveCurrency::RAW :
     break;

   case FieldBenchmarkCurveName::RAW :
     break;

   case FieldBenchmarkCurvePoint::RAW :
     break;

   case FieldBenchmarkPrice::RAW :
     break;

   case FieldBenchmarkPriceType::RAW :
     break;

   case FieldBenchmarkSecurityID::RAW :
     break;

   case FieldBenchmarkSecurityIDSource::RAW :
     break;

   case FieldYieldType::RAW :
     break;

   case FieldYield::RAW :
     break;

   case FieldYieldCalcDate::RAW :
     break;

   case FieldYieldRedemptionDate::RAW :
     break;

   case FieldYieldRedemptionPrice::RAW :
     break;

   case FieldYieldRedemptionPriceType::RAW :
     break;

   case FieldCurrency::RAW :
     break;

   case FieldComplianceID::RAW :
     break;

   case FieldSolicitedFlag::RAW :
     break;

   case FieldIOIID::RAW :
     break;

   case FieldQuoteID::RAW :
     break;

   case FieldTimeInForce::RAW :
     break;

   case FieldEffectiveTime::RAW :
     break;

   case FieldExpireDate::RAW :
     break;

   case FieldExpireTime::RAW :
     break;

   case FieldGTBookingInst::RAW :
     break;

   case FieldCommission::RAW :
     break;

   case FieldCommType::RAW :
     break;

   case FieldCommCurrency::RAW :
     break;

   case FieldFundRenewWaiv::RAW :
     break;

   case FieldOrderCapacity::RAW :
     break;

   case FieldOrderRestrictions::RAW :
     break;

   case FieldCustOrderCapacity::RAW :
     break;

   case FieldForexReq::RAW :
     break;

   case FieldSettlCurrency::RAW :
     break;

   case FieldBookingType::RAW :
     break;

   case FieldText::RAW :
     break;

   case FieldEncodedTextLen::RAW :
     break;

   case FieldEncodedText::RAW :
     break;

   case FieldSettlDate2::RAW :
     break;

   case FieldOrderQty2::RAW :
     break;

   case FieldPrice2::RAW :
     break;

   case FieldPositionEffect::RAW :
     break;

   case FieldCoveredOrUncovered::RAW :
     break;

   case FieldMaxShow::RAW :
     break;

   case FieldPegOffsetValue::RAW :
     break;

   case FieldPegMoveType::RAW :
     break;

   case FieldPegOffsetType::RAW :
     break;

   case FieldPegLimitType::RAW :
     break;

   case FieldPegRoundDirection::RAW :
     break;

   case FieldPegScope::RAW :
     break;

   case FieldDiscretionInst::RAW :
     break;

   case FieldDiscretionOffsetValue::RAW :
     break;

   case FieldDiscretionMoveType::RAW :
     break;

   case FieldDiscretionOffsetType::RAW :
     break;

   case FieldDiscretionLimitType::RAW :
     break;

   case FieldDiscretionRoundDirection::RAW :
     break;

   case FieldDiscretionScope::RAW :
     break;

   case FieldTargetStrategy::RAW :
     break;

   case FieldTargetStrategyParameters::RAW :
     break;

   case FieldParticipationRate::RAW :
     break;

   case FieldDesignation::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSettlPartySubIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSettlPartySubID::RAW :
     break;

   case FieldSettlPartySubIDType::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSettlPartyIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSettlPartyID::RAW :
     break;

   case FieldSettlPartyIDSource::RAW :
     break;

   case FieldSettlPartyRole::RAW :
     break;

   case FieldNoSettlPartySubIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSettlPartySubIDs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupDlvyInst::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSettlInstSource::RAW :
     break;

   case FieldDlvyInstType::RAW :
     break;

   case FieldNoSettlPartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSettlPartyIDs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupClearingInstructions::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldClearingInstruction::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNestedPartySubIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldNestedPartySubID::RAW :
     break;

   case FieldNestedPartySubIDType::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNestedPartyIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldNestedPartyID::RAW :
     break;

   case FieldNestedPartyIDSource::RAW :
     break;

   case FieldNestedPartyRole::RAW :
     break;

   case FieldNoNestedPartySubIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartySubIDs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLegs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldLegSymbol::RAW :
     break;

   case FieldLegSymbolSfx::RAW :
     break;

   case FieldLegSecurityID::RAW :
     break;

   case FieldLegSecurityIDSource::RAW :
     break;

   case FieldNoLegSecurityAltID::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupLegSecurityAltID::skip( fix+pos, len - pos );
     break;

   case FieldLegProduct::RAW :
     break;

   case FieldLegCFICode::RAW :
     break;

   case FieldLegSecurityType::RAW :
     break;

   case FieldLegSecuritySubType::RAW :
     break;

   case FieldLegMaturityMonthYear::RAW :
     break;

   case FieldLegMaturityDate::RAW :
     break;

   case FieldLegCouponPaymentDate::RAW :
     break;

   case FieldLegIssueDate::RAW :
     break;

   case FieldLegRepoCollateralSecurityType::RAW :
     break;

   case FieldLegRepurchaseTerm::RAW :
     break;

   case FieldLegRepurchaseRate::RAW :
     break;

   case FieldLegFactor::RAW :
     break;

   case FieldLegCreditRating::RAW :
     break;

   case FieldLegInstrRegistry::RAW :
     break;

   case FieldLegCountryOfIssue::RAW :
     break;

   case FieldLegStateOrProvinceOfIssue::RAW :
     break;

   case FieldLegLocaleOfIssue::RAW :
     break;

   case FieldLegRedemptionDate::RAW :
     break;

   case FieldLegStrikePrice::RAW :
     break;

   case FieldLegStrikeCurrency::RAW :
     break;

   case FieldLegOptAttribute::RAW :
     break;

   case FieldLegContractMultiplier::RAW :
     break;

   case FieldLegCouponRate::RAW :
     break;

   case FieldLegSecurityExchange::RAW :
     break;

   case FieldLegIssuer::RAW :
     break;

   case FieldEncodedLegIssuerLen::RAW :
     break;

   case FieldEncodedLegIssuer::RAW :
     break;

   case FieldLegSecurityDesc::RAW :
     break;

   case FieldEncodedLegSecurityDescLen::RAW :
     break;

   case FieldEncodedLegSecurityDesc::RAW :
     break;

   case FieldLegRatioQty::RAW :
     break;

   case FieldLegSide::RAW :
     break;

   case FieldLegCurrency::RAW :
     break;

   case FieldLegPool::RAW :
     break;

   case FieldLegDatedDate::RAW :
     break;

   case FieldLegContractSettlMonth::RAW :
     break;

   case FieldLegInterestAccrualDate::RAW :
     break;

   case FieldLegQty::RAW :
     break;

   case FieldLegSwapType::RAW :
     break;

   case FieldNoLegStipulations::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupLegStipulations::skip( fix+pos, len - pos );
     break;

   case FieldLegPositionEffect::RAW :
     break;

   case FieldLegCoveredOrUncovered::RAW :
     break;

   case FieldNoNestedPartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartyIDs::skip( fix+pos, len - pos );
     break;

   case FieldLegRefID::RAW :
     break;

   case FieldLegPrice::RAW :
     break;

   case FieldLegSettlType::RAW :
     break;

   case FieldLegSettlDate::RAW :
     break;

   case FieldLegLastPx::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupQuoteEntries::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSymbol::RAW :
     break;

   case FieldSymbolSfx::RAW :
     break;

   case FieldSecurityID::RAW :
     break;

   case FieldSecurityIDSource::RAW :
     break;

   case FieldNoSecurityAltID::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::skip( fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     break;

   case FieldCFICode::RAW :
     break;

   case FieldSecurityType::RAW :
     break;

   case FieldSecuritySubType::RAW :
     break;

   case FieldMaturityMonthYear::RAW :
     break;

   case FieldMaturityDate::RAW :
     break;

   case FieldPutOrCall::RAW :
     break;

   case FieldCouponPaymentDate::RAW :
     break;

   case FieldIssueDate::RAW :
     break;

   case FieldRepoCollateralSecurityType::RAW :
     break;

   case FieldRepurchaseTerm::RAW :
     break;

   case FieldRepurchaseRate::RAW :
     break;

   case FieldFactor::RAW :
     break;

   case FieldCreditRating::RAW :
     break;

   case FieldInstrRegistry::RAW :
     break;

   case FieldCountryOfIssue::RAW :
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     break;

   case FieldLocaleOfIssue::RAW :
     break;

   case FieldRedemptionDate::RAW :
     break;

   case FieldStrikePrice::RAW :
     break;

   case FieldStrikeCurrency::RAW :
     break;

   case FieldOptAttribute::RAW :
     break;

   case FieldContractMultiplier::RAW :
     break;

   case FieldCouponRate::RAW :
     break;

   case FieldSecurityExchange::RAW :
     break;

   case FieldIssuer::RAW :
     break;

   case FieldEncodedIssuerLen::RAW :
     break;

   case FieldEncodedIssuer::RAW :
     break;

   case FieldSecurityDesc::RAW :
     break;

   case FieldEncodedSecurityDescLen::RAW :
     break;

   case FieldEncodedSecurityDesc::RAW :
     break;

   case FieldPool::RAW :
     break;

   case FieldContractSettlMonth::RAW :
     break;

   case FieldCPProgram::RAW :
     break;

   case FieldCPRegType::RAW :
     break;

   case FieldNoEvents::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::skip( fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     break;

   case FieldInterestAccrualDate::RAW :
     break;

   case FieldAgreementDesc::RAW :
     break;

   case FieldAgreementID::RAW :
     break;

   case FieldAgreementDate::RAW :
     break;

   case FieldAgreementCurrency::RAW :
     break;

   case FieldTerminationType::RAW :
     break;

   case FieldStartDate::RAW :
     break;

   case FieldEndDate::RAW :
     break;

   case FieldDeliveryType::RAW :
     break;

   case FieldMarginRatio::RAW :
     break;

   case FieldNoUnderlyings::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyings::skip( fix+pos, len - pos );
     break;

   case FieldNoLegs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupLegs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupQuoteSets::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldQuoteSetID::RAW :
     break;

   case FieldUnderlyingSymbol::RAW :
     break;

   case FieldUnderlyingSymbolSfx::RAW :
     break;

   case FieldUnderlyingSecurityID::RAW :
     break;

   case FieldUnderlyingSecurityIDSource::RAW :
     break;

   case FieldNoUnderlyingSecurityAltID::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingSecurityAltID::skip( fix+pos, len - pos );
     break;

   case FieldUnderlyingProduct::RAW :
     break;

   case FieldUnderlyingCFICode::RAW :
     break;

   case FieldUnderlyingSecurityType::RAW :
     break;

   case FieldUnderlyingSecuritySubType::RAW :
     break;

   case FieldUnderlyingMaturityMonthYear::RAW :
     break;

   case FieldUnderlyingMaturityDate::RAW :
     break;

   case FieldUnderlyingPutOrCall::RAW :
     break;

   case FieldUnderlyingCouponPaymentDate::RAW :
     break;

   case FieldUnderlyingIssueDate::RAW :
     break;

   case FieldUnderlyingRepoCollateralSecurityType::RAW :
     break;

   case FieldUnderlyingRepurchaseTerm::RAW :
     break;

   case FieldUnderlyingRepurchaseRate::RAW :
     break;

   case FieldUnderlyingFactor::RAW :
     break;

   case FieldUnderlyingCreditRating::RAW :
     break;

   case FieldUnderlyingInstrRegistry::RAW :
     break;

   case FieldUnderlyingCountryOfIssue::RAW :
     break;

   case FieldUnderlyingStateOrProvinceOfIssue::RAW :
     break;

   case FieldUnderlyingLocaleOfIssue::RAW :
     break;

   case FieldUnderlyingRedemptionDate::RAW :
     break;

   case FieldUnderlyingStrikePrice::RAW :
     break;

   case FieldUnderlyingStrikeCurrency::RAW :
     break;

   case FieldUnderlyingOptAttribute::RAW :
     break;

   case FieldUnderlyingContractMultiplier::RAW :
     break;

   case FieldUnderlyingCouponRate::RAW :
     break;

   case FieldUnderlyingSecurityExchange::RAW :
     break;

   case FieldUnderlyingIssuer::RAW :
     break;

   case FieldEncodedUnderlyingIssuerLen::RAW :
     break;

   case FieldEncodedUnderlyingIssuer::RAW :
     break;

   case FieldUnderlyingSecurityDesc::RAW :
     break;

   case FieldEncodedUnderlyingSecurityDescLen::RAW :
     break;

   case FieldEncodedUnderlyingSecurityDesc::RAW :
     break;

   case FieldUnderlyingCPProgram::RAW :
     break;

   case FieldUnderlyingCPRegType::RAW :
     break;

   case FieldUnderlyingCurrency::RAW :
     break;

   case FieldUnderlyingQty::RAW :
     break;

   case FieldUnderlyingPx::RAW :
     break;

   case FieldUnderlyingDirtyPrice::RAW :
     break;

   case FieldUnderlyingEndPrice::RAW :
     break;

   case FieldUnderlyingStartValue::RAW :
     break;

   case FieldUnderlyingCurrentValue::RAW :
     break;

   case FieldUnderlyingEndValue::RAW :
     break;

   case FieldNoUnderlyingStips::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupUnderlyingStips::skip( fix+pos, len - pos );
     break;

   case FieldTotNoQuoteEntries::RAW :
     break;

   case FieldLastFragment::RAW :
     break;

   case FieldNoQuoteEntries::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupQuoteEntries::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSecurityTypes::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSecurityType::RAW :
     break;

   case FieldSecuritySubType::RAW :
     break;

   case FieldProduct::RAW :
     break;

   case FieldCFICode::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupNested3PartyIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldNested3PartyID::RAW :
     break;

   case FieldNested3PartyIDSource::RAW :
     break;

   case FieldNested3PartyRole::RAW :
     break;

   case FieldNoNested3PartySubIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNested3PartySubIDs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPositions::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldPosType::RAW :
     break;

   case FieldLongQty::RAW :
     break;

   case FieldShortQty::RAW :
     break;

   case FieldPosQtyStatus::RAW :
     break;

   case FieldNoNestedPartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartyIDs::skip( fix+pos, len - pos );
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupAffectedOrders::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldOrigClOrdID::RAW :
     break;

   case FieldAffectedOrderID::RAW :
     break;

   case FieldAffectedSecondaryOrderID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupExecs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldLastQty::RAW :
     break;

   case FieldExecID::RAW :
     break;

   case FieldSecondaryExecID::RAW :
     break;

   case FieldLastPx::RAW :
     break;

   case FieldLastParPx::RAW :
     break;

   case FieldLastCapacity::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMsgTypes::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldRefMsgType::RAW :
     break;

   case FieldMsgDirection::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupBidComponents::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldListID::RAW :
     break;

   case FieldSide::RAW :
     break;

   case FieldTradingSessionID::RAW :
     break;

   case FieldTradingSessionSubID::RAW :
     break;

   case FieldNetGrossInd::RAW :
     break;

   case FieldSettlType::RAW :
     break;

   case FieldSettlDate::RAW :
     break;

   case FieldAccount::RAW :
     break;

   case FieldAcctIDSource::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSettlInst::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSettlInstID::RAW :
     break;

   case FieldSettlInstTransType::RAW :
     break;

   case FieldSettlInstRefID::RAW :
     break;

   case FieldNoPartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartyIDs::skip( fix+pos, len - pos );
     break;

   case FieldSide::RAW :
     break;

   case FieldProduct::RAW :
     break;

   case FieldSecurityType::RAW :
     break;

   case FieldCFICode::RAW :
     break;

   case FieldEffectiveTime::RAW :
     break;

   case FieldExpireTime::RAW :
     break;

   case FieldLastUpdateTime::RAW :
     break;

   case FieldSettlDeliveryType::RAW :
     break;

   case FieldStandInstDbType::RAW :
     break;

   case FieldStandInstDbName::RAW :
     break;

   case FieldStandInstDbID::RAW :
     break;

   case FieldNoDlvyInst::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupDlvyInst::skip( fix+pos, len - pos );
     break;

   case FieldPaymentMethod::RAW :
     break;

   case FieldPaymentRef::RAW :
     break;

   case FieldCardHolderName::RAW :
     break;

   case FieldCardNumber::RAW :
     break;

   case FieldCardStartDate::RAW :
     break;

   case FieldCardExpDate::RAW :
     break;

   case FieldCardIssNum::RAW :
     break;

   case FieldPaymentDate::RAW :
     break;

   case FieldPaymentRemitterID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupInstrAttrib::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldInstrAttribType::RAW :
     break;

   case FieldInstrAttribValue::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMiscFees::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldMiscFeeAmt::RAW :
     break;

   case FieldMiscFeeCurr::RAW :
     break;

   case FieldMiscFeeType::RAW :
     break;

   case FieldMiscFeeBasis::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupQuoteQualifiers::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldQuoteQualifier::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupDistribInsts::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldDistribPaymentMethod::RAW :
     break;

   case FieldDistribPercentage::RAW :
     break;

   case FieldCashDistribCurr::RAW :
     break;

   case FieldCashDistribAgentName::RAW :
     break;

   case FieldCashDistribAgentCode::RAW :
     break;

   case FieldCashDistribAgentAcctNumber::RAW :
     break;

   case FieldCashDistribPayRef::RAW :
     break;

   case FieldCashDistribAgentAcctName::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupTrdRegTimestamps::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldTrdRegTimestamp::RAW :
     break;

   case FieldTrdRegTimestampType::RAW :
     break;

   case FieldTrdRegTimestampOrigin::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupAltMDSource::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldAltMDSourceID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupSides::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSide::RAW :
     break;

   case FieldOrigClOrdID::RAW :
     break;

   case FieldClOrdID::RAW :
     break;

   case FieldSecondaryClOrdID::RAW :
     break;

   case FieldClOrdLinkID::RAW :
     break;

   case FieldOrigOrdModTime::RAW :
     break;

   case FieldNoPartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupPartyIDs::skip( fix+pos, len - pos );
     break;

   case FieldTradeOriginationDate::RAW :
     break;

   case FieldTradeDate::RAW :
     break;

   case FieldOrderQty::RAW :
     break;

   case FieldCashOrderQty::RAW :
     break;

   case FieldOrderPercent::RAW :
     break;

   case FieldRoundingDirection::RAW :
     break;

   case FieldRoundingModulus::RAW :
     break;

   case FieldComplianceID::RAW :
     break;

   case FieldText::RAW :
     break;

   case FieldEncodedTextLen::RAW :
     break;

   case FieldEncodedText::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupRoutingIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldRoutingType::RAW :
     break;

   case FieldRoutingID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupPosAmt::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldPosAmtType::RAW :
     break;

   case FieldPosAmt::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLinesOfText::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldText::RAW :
     break;

   case FieldEncodedTextLen::RAW :
     break;

   case FieldEncodedText::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupIOIQualifiers::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldIOIQualifier::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupDates::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldTradeDate::RAW :
     break;

   case FieldTransactTime::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMDEntryTypes::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldMDEntryType::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupRelatedSym::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSymbol::RAW :
     break;

   case FieldSymbolSfx::RAW :
     break;

   case FieldSecurityID::RAW :
     break;

   case FieldSecurityIDSource::RAW :
     break;

   case FieldNoSecurityAltID::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::skip( fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     break;

   case FieldCFICode::RAW :
     break;

   case FieldSecurityType::RAW :
     break;

   case FieldSecuritySubType::RAW :
     break;

   case FieldMaturityMonthYear::RAW :
     break;

   case FieldMaturityDate::RAW :
     break;

   case FieldPutOrCall::RAW :
     break;

   case FieldCouponPaymentDate::RAW :
     break;

   case FieldIssueDate::RAW :
     break;

   case FieldRepoCollateralSecurityType::RAW :
     break;

   case FieldRepurchaseTerm::RAW :
     break;

   case FieldRepurchaseRate::RAW :
     break;

   case FieldFactor::RAW :
     break;

   case FieldCreditRating::RAW :
     break;

   case FieldInstrRegistry::RAW :
     break;

   case FieldCountryOfIssue::RAW :
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     break;

   case FieldLocaleOfIssue::RAW :
     break;

   case FieldRedemptionDate::RAW :
     break;

   case FieldStrikePrice::RAW :
     break;

   case FieldStrikeCurrency::RAW :
     break;

   case FieldOptAttribute::RAW :
     break;

   case FieldContractMultiplier::RAW :
     break;

   case FieldCouponRate::RAW :
     break;

   case FieldSecurityExchange::RAW :
     break;

   case FieldIssuer::RAW :
     break;

   case FieldEncodedIssuerLen::RAW :
     break;

   case FieldEncodedIssuer::RAW :
     break;

   case FieldSecurityDesc::RAW :
     break;

   case FieldEncodedSecurityDescLen::RAW :
     break;

   case FieldEncodedSecurityDesc::RAW :
     break;

   case FieldPool::RAW :
     break;

   case FieldContractSettlMonth::RAW :
     break;

   case FieldCPProgram::RAW :
     break;

   case FieldCPRegType::RAW :
     break;

   case FieldNoEvents::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::skip( fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     break;

   case FieldInterestAccrualDate::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupContraBrokers::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldContraBroker::RAW :
     break;

   case FieldContraTrader::RAW :
     break;

   case FieldContraTradeQty::RAW :
     break;

   case FieldContraTradeTime::RAW :
     break;

   case FieldContraLegRefID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupTrades::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldTradeReportID::RAW :
     break;

   case FieldSecondaryTradeReportID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupStrikes::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldSymbol::RAW :
     break;

   case FieldSymbolSfx::RAW :
     break;

   case FieldSecurityID::RAW :
     break;

   case FieldSecurityIDSource::RAW :
     break;

   case FieldNoSecurityAltID::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupSecurityAltID::skip( fix+pos, len - pos );
     break;

   case FieldProduct::RAW :
     break;

   case FieldCFICode::RAW :
     break;

   case FieldSecurityType::RAW :
     break;

   case FieldSecuritySubType::RAW :
     break;

   case FieldMaturityMonthYear::RAW :
     break;

   case FieldMaturityDate::RAW :
     break;

   case FieldPutOrCall::RAW :
     break;

   case FieldCouponPaymentDate::RAW :
     break;

   case FieldIssueDate::RAW :
     break;

   case FieldRepoCollateralSecurityType::RAW :
     break;

   case FieldRepurchaseTerm::RAW :
     break;

   case FieldRepurchaseRate::RAW :
     break;

   case FieldFactor::RAW :
     break;

   case FieldCreditRating::RAW :
     break;

   case FieldInstrRegistry::RAW :
     break;

   case FieldCountryOfIssue::RAW :
     break;

   case FieldStateOrProvinceOfIssue::RAW :
     break;

   case FieldLocaleOfIssue::RAW :
     break;

   case FieldRedemptionDate::RAW :
     break;

   case FieldStrikePrice::RAW :
     break;

   case FieldStrikeCurrency::RAW :
     break;

   case FieldOptAttribute::RAW :
     break;

   case FieldContractMultiplier::RAW :
     break;

   case FieldCouponRate::RAW :
     break;

   case FieldSecurityExchange::RAW :
     break;

   case FieldIssuer::RAW :
     break;

   case FieldEncodedIssuerLen::RAW :
     break;

   case FieldEncodedIssuer::RAW :
     break;

   case FieldSecurityDesc::RAW :
     break;

   case FieldEncodedSecurityDescLen::RAW :
     break;

   case FieldEncodedSecurityDesc::RAW :
     break;

   case FieldPool::RAW :
     break;

   case FieldContractSettlMonth::RAW :
     break;

   case FieldCPProgram::RAW :
     break;

   case FieldCPRegType::RAW :
     break;

   case FieldNoEvents::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupEvents::skip( fix+pos, len - pos );
     break;

   case FieldDatedDate::RAW :
     break;

   case FieldInterestAccrualDate::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupBidDescriptors::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldBidDescriptorType::RAW :
     break;

   case FieldBidDescriptor::RAW :
     break;

   case FieldSideValueInd::RAW :
     break;

   case FieldLiquidityValue::RAW :
     break;

   case FieldLiquidityNumSecurities::RAW :
     break;

   case FieldLiquidityPctLow::RAW :
     break;

   case FieldLiquidityPctHigh::RAW :
     break;

   case FieldEFPTrackingError::RAW :
     break;

   case FieldFairValue::RAW :
     break;

   case FieldOutsideIndexPct::RAW :
     break;

   case FieldValueOfFutures::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupCompIDs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldRefCompID::RAW :
     break;

   case FieldRefSubID::RAW :
     break;

   case FieldLocationID::RAW :
     break;

   case FieldDeskID::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupLegAllocs::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldLegAllocAccount::RAW :
     break;

   case FieldLegIndividualAllocID::RAW :
     break;

   case FieldNoNested2PartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNested2PartyIDs::skip( fix+pos, len - pos );
     break;

   case FieldLegAllocQty::RAW :
     break;

   case FieldLegAllocAcctIDSource::RAW :
     break;

   case FieldLegSettlCurrency::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupRegistDtls::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldRegistDtls::RAW :
     break;

   case FieldRegistEmail::RAW :
     break;

   case FieldMailingDtls::RAW :
     break;

   case FieldMailingInst::RAW :
     break;

   case FieldNoNestedPartyIDs::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupNestedPartyIDs::skip( fix+pos, len - pos );
     break;

   case FieldOwnerType::RAW :
     break;

   case FieldDateOfBirth::RAW :
     break;

   case FieldInvestorCountryOfResidence::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupContAmts::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldContAmtType::RAW :
     break;

   case FieldContAmtValue::RAW :
     break;

   case FieldContAmtCurr::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}

offset_t GroupMDEntries::skip( const char * fix, unsigned len ){
 offset_t prev = 0, pos = 0; 
 while( pos < (int)len ) { 
   bool isGroupStart = false;
   prev = pos;
   raw_tag_t tag = nextRawTag( fix+pos, pos );
   switch( tag ){
   case FieldMDEntryType::RAW :
     break;

   case FieldMDEntryPx::RAW :
     break;

   case FieldCurrency::RAW :
     break;

   case FieldMDEntrySize::RAW :
     break;

   case FieldMDEntryDate::RAW :
     break;

   case FieldMDEntryTime::RAW :
     break;

   case FieldTickDirection::RAW :
     break;

   case FieldMDMkt::RAW :
     break;

   case FieldTradingSessionID::RAW :
     break;

   case FieldTradingSessionSubID::RAW :
     break;

   case FieldQuoteCondition::RAW :
     break;

   case FieldTradeCondition::RAW :
     break;

   case FieldMDEntryOriginator::RAW :
     break;

   case FieldLocationID::RAW :
     break;

   case FieldDeskID::RAW :
     break;

   case FieldOpenCloseSettlFlag::RAW :
     break;

   case FieldTimeInForce::RAW :
     break;

   case FieldExpireDate::RAW :
     break;

   case FieldExpireTime::RAW :
     break;

   case FieldMinQty::RAW :
     break;

   case FieldExecInst::RAW :
     break;

   case FieldSellerDays::RAW :
     break;

   case FieldOrderID::RAW :
     break;

   case FieldQuoteEntryID::RAW :
     break;

   case FieldMDEntryBuyer::RAW :
     break;

   case FieldMDEntrySeller::RAW :
     break;

   case FieldNumberOfOrders::RAW :
     break;

   case FieldMDEntryPositionNo::RAW :
     break;

   case FieldScope::RAW :
     break;

   case FieldPriceDelta::RAW :
     break;

   case FieldText::RAW :
     break;

   case FieldEncodedTextLen::RAW :
     break;

   case FieldEncodedText::RAW :
     break;

   default: PRINT_UNKNOWN
     return prev;
   }
   if( ! isGroupStart ) gotoNextField( fix, pos );
 }
 return pos;
}


// ---------------------------------- getFieldDepth ---------------------------------

GetDepthMethod GroupLegStipulations::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupEvents::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupLegSecurityAltID::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupCapacities::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupNested3PartySubIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupPartySubIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupNested2PartySubIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupNested2PartyIDs::groupGetDepthMethods[] = {
   GroupNested2PartySubIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupHops::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupCollInquiryQualifier::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupPartyIDs::groupGetDepthMethods[] = {
   GroupPartySubIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupAllocs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupTradingSessions::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupSecurityAltID::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupUnderlyingSecurityAltID::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupUnderlyingStips::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupUnderlyings::groupGetDepthMethods[] = {
   GroupUnderlyingSecurityAltID::getFieldDepth,
   GroupUnderlyingStips::getFieldDepth,
   nullptr };

GetDepthMethod GroupStipulations::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupOrders::groupGetDepthMethods[] = {
   GroupPartyIDs::getFieldDepth,
   GroupAllocs::getFieldDepth,
   GroupTradingSessions::getFieldDepth,
   GroupSecurityAltID::getFieldDepth,
   GroupEvents::getFieldDepth,
   GroupUnderlyings::getFieldDepth,
   GroupStipulations::getFieldDepth,
   nullptr };

GetDepthMethod GroupSettlPartySubIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupSettlPartyIDs::groupGetDepthMethods[] = {
   GroupSettlPartySubIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupDlvyInst::groupGetDepthMethods[] = {
   GroupSettlPartyIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupClearingInstructions::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupNestedPartySubIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupNestedPartyIDs::groupGetDepthMethods[] = {
   GroupNestedPartySubIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupLegs::groupGetDepthMethods[] = {
   GroupLegSecurityAltID::getFieldDepth,
   GroupLegStipulations::getFieldDepth,
   GroupNestedPartyIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupQuoteEntries::groupGetDepthMethods[] = {
   GroupSecurityAltID::getFieldDepth,
   GroupEvents::getFieldDepth,
   GroupUnderlyings::getFieldDepth,
   GroupLegs::getFieldDepth,
   nullptr };

GetDepthMethod GroupQuoteSets::groupGetDepthMethods[] = {
   GroupUnderlyingSecurityAltID::getFieldDepth,
   GroupUnderlyingStips::getFieldDepth,
   GroupQuoteEntries::getFieldDepth,
   nullptr };

GetDepthMethod GroupSecurityTypes::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupNested3PartyIDs::groupGetDepthMethods[] = {
   GroupNested3PartySubIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupPositions::groupGetDepthMethods[] = {
   GroupNestedPartyIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupAffectedOrders::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupExecs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupMsgTypes::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupBidComponents::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupSettlInst::groupGetDepthMethods[] = {
   GroupPartyIDs::getFieldDepth,
   GroupDlvyInst::getFieldDepth,
   nullptr };

GetDepthMethod GroupInstrAttrib::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupMiscFees::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupQuoteQualifiers::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupDistribInsts::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupTrdRegTimestamps::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupAltMDSource::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupSides::groupGetDepthMethods[] = {
   GroupPartyIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupRoutingIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupPosAmt::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupLinesOfText::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupIOIQualifiers::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupDates::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupMDEntryTypes::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupRelatedSym::groupGetDepthMethods[] = {
   GroupSecurityAltID::getFieldDepth,
   GroupEvents::getFieldDepth,
   nullptr };

GetDepthMethod GroupContraBrokers::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupTrades::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupStrikes::groupGetDepthMethods[] = {
   GroupSecurityAltID::getFieldDepth,
   GroupEvents::getFieldDepth,
   nullptr };

GetDepthMethod GroupBidDescriptors::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupCompIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupLegAllocs::groupGetDepthMethods[] = {
   GroupNested2PartyIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupRegistDtls::groupGetDepthMethods[] = {
   GroupNestedPartyIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupContAmts::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupMDEntries::groupGetDepthMethods[] = {
   nullptr };


FieldDepth GroupLegStipulations::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldLegStipulationType::RAW :
     ret.isFirstInGroup = true;
     case FieldLegStipulationValue::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupEvents::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldEventType::RAW :
     ret.isFirstInGroup = true;
     case FieldEventDate::RAW :
     case FieldEventPx::RAW :
     case FieldEventText::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupLegSecurityAltID::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldLegSecurityAltID::RAW :
     ret.isFirstInGroup = true;
     case FieldLegSecurityAltIDSource::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupCapacities::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldOrderCapacity::RAW :
     ret.isFirstInGroup = true;
     case FieldOrderRestrictions::RAW :
     case FieldOrderCapacityQty::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupNested3PartySubIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldNested3PartySubID::RAW :
     ret.isFirstInGroup = true;
     case FieldNested3PartySubIDType::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupPartySubIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldPartySubID::RAW :
     ret.isFirstInGroup = true;
     case FieldPartySubIDType::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupNested2PartySubIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldNested2PartySubID::RAW :
     ret.isFirstInGroup = true;
     case FieldNested2PartySubIDType::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupNested2PartyIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldNested2PartyID::RAW :
     ret.isFirstInGroup = true;
     case FieldNested2PartyIDSource::RAW :
     case FieldNested2PartyRole::RAW :
     case FieldNoNested2PartySubIDs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupHops::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldHopCompID::RAW :
     ret.isFirstInGroup = true;
     case FieldHopSendingTime::RAW :
     case FieldHopRefID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupCollInquiryQualifier::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldCollInquiryQualifier::RAW :
     ret.isFirstInGroup = true;

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupPartyIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldPartyID::RAW :
     ret.isFirstInGroup = true;
     case FieldPartyIDSource::RAW :
     case FieldPartyRole::RAW :
     case FieldNoPartySubIDs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupAllocs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldAllocAccount::RAW :
     ret.isFirstInGroup = true;
     case FieldAllocAcctIDSource::RAW :
     case FieldAllocPrice::RAW :
     case FieldIndividualAllocID::RAW :
     case FieldIndividualAllocRejCode::RAW :
     case FieldAllocText::RAW :
     case FieldEncodedAllocTextLen::RAW :
     case FieldEncodedAllocText::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupTradingSessions::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldTradingSessionID::RAW :
     ret.isFirstInGroup = true;
     case FieldTradingSessionSubID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupSecurityAltID::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSecurityAltID::RAW :
     ret.isFirstInGroup = true;
     case FieldSecurityAltIDSource::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupUnderlyingSecurityAltID::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldUnderlyingSecurityAltID::RAW :
     ret.isFirstInGroup = true;
     case FieldUnderlyingSecurityAltIDSource::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupUnderlyingStips::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldUnderlyingStipType::RAW :
     ret.isFirstInGroup = true;
     case FieldUnderlyingStipValue::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupUnderlyings::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldUnderlyingSymbol::RAW :
     ret.isFirstInGroup = true;
     case FieldUnderlyingSymbolSfx::RAW :
     case FieldUnderlyingSecurityID::RAW :
     case FieldUnderlyingSecurityIDSource::RAW :
     case FieldNoUnderlyingSecurityAltID::RAW :
     case FieldUnderlyingProduct::RAW :
     case FieldUnderlyingCFICode::RAW :
     case FieldUnderlyingSecurityType::RAW :
     case FieldUnderlyingSecuritySubType::RAW :
     case FieldUnderlyingMaturityMonthYear::RAW :
     case FieldUnderlyingMaturityDate::RAW :
     case FieldUnderlyingPutOrCall::RAW :
     case FieldUnderlyingCouponPaymentDate::RAW :
     case FieldUnderlyingIssueDate::RAW :
     case FieldUnderlyingRepoCollateralSecurityType::RAW :
     case FieldUnderlyingRepurchaseTerm::RAW :
     case FieldUnderlyingRepurchaseRate::RAW :
     case FieldUnderlyingFactor::RAW :
     case FieldUnderlyingCreditRating::RAW :
     case FieldUnderlyingInstrRegistry::RAW :
     case FieldUnderlyingCountryOfIssue::RAW :
     case FieldUnderlyingStateOrProvinceOfIssue::RAW :
     case FieldUnderlyingLocaleOfIssue::RAW :
     case FieldUnderlyingRedemptionDate::RAW :
     case FieldUnderlyingStrikePrice::RAW :
     case FieldUnderlyingStrikeCurrency::RAW :
     case FieldUnderlyingOptAttribute::RAW :
     case FieldUnderlyingContractMultiplier::RAW :
     case FieldUnderlyingCouponRate::RAW :
     case FieldUnderlyingSecurityExchange::RAW :
     case FieldUnderlyingIssuer::RAW :
     case FieldEncodedUnderlyingIssuerLen::RAW :
     case FieldEncodedUnderlyingIssuer::RAW :
     case FieldUnderlyingSecurityDesc::RAW :
     case FieldEncodedUnderlyingSecurityDescLen::RAW :
     case FieldEncodedUnderlyingSecurityDesc::RAW :
     case FieldUnderlyingCPProgram::RAW :
     case FieldUnderlyingCPRegType::RAW :
     case FieldUnderlyingCurrency::RAW :
     case FieldUnderlyingQty::RAW :
     case FieldUnderlyingPx::RAW :
     case FieldUnderlyingDirtyPrice::RAW :
     case FieldUnderlyingEndPrice::RAW :
     case FieldUnderlyingStartValue::RAW :
     case FieldUnderlyingCurrentValue::RAW :
     case FieldUnderlyingEndValue::RAW :
     case FieldNoUnderlyingStips::RAW :
     case FieldUnderlyingSettlPrice::RAW :
     case FieldUnderlyingSettlPriceType::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupStipulations::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldStipulationType::RAW :
     ret.isFirstInGroup = true;
     case FieldStipulationValue::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupOrders::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldClOrdID::RAW :
     ret.isFirstInGroup = true;
     case FieldSecondaryClOrdID::RAW :
     case FieldListSeqNo::RAW :
     case FieldClOrdLinkID::RAW :
     case FieldSettlInstMode::RAW :
     case FieldNoPartyIDs::RAW :
     case FieldTradeOriginationDate::RAW :
     case FieldTradeDate::RAW :
     case FieldAccount::RAW :
     case FieldAcctIDSource::RAW :
     case FieldAccountType::RAW :
     case FieldDayBookingInst::RAW :
     case FieldBookingUnit::RAW :
     case FieldAllocID::RAW :
     case FieldPreallocMethod::RAW :
     case FieldNoAllocs::RAW :
     case FieldSettlType::RAW :
     case FieldSettlDate::RAW :
     case FieldCashMargin::RAW :
     case FieldClearingFeeIndicator::RAW :
     case FieldHandlInst::RAW :
     case FieldExecInst::RAW :
     case FieldMinQty::RAW :
     case FieldMaxFloor::RAW :
     case FieldExDestination::RAW :
     case FieldNoTradingSessions::RAW :
     case FieldProcessCode::RAW :
     case FieldSymbol::RAW :
     case FieldSymbolSfx::RAW :
     case FieldSecurityID::RAW :
     case FieldSecurityIDSource::RAW :
     case FieldNoSecurityAltID::RAW :
     case FieldProduct::RAW :
     case FieldCFICode::RAW :
     case FieldSecurityType::RAW :
     case FieldSecuritySubType::RAW :
     case FieldMaturityMonthYear::RAW :
     case FieldMaturityDate::RAW :
     case FieldPutOrCall::RAW :
     case FieldCouponPaymentDate::RAW :
     case FieldIssueDate::RAW :
     case FieldRepoCollateralSecurityType::RAW :
     case FieldRepurchaseTerm::RAW :
     case FieldRepurchaseRate::RAW :
     case FieldFactor::RAW :
     case FieldCreditRating::RAW :
     case FieldInstrRegistry::RAW :
     case FieldCountryOfIssue::RAW :
     case FieldStateOrProvinceOfIssue::RAW :
     case FieldLocaleOfIssue::RAW :
     case FieldRedemptionDate::RAW :
     case FieldStrikePrice::RAW :
     case FieldStrikeCurrency::RAW :
     case FieldOptAttribute::RAW :
     case FieldContractMultiplier::RAW :
     case FieldCouponRate::RAW :
     case FieldSecurityExchange::RAW :
     case FieldIssuer::RAW :
     case FieldEncodedIssuerLen::RAW :
     case FieldEncodedIssuer::RAW :
     case FieldSecurityDesc::RAW :
     case FieldEncodedSecurityDescLen::RAW :
     case FieldEncodedSecurityDesc::RAW :
     case FieldPool::RAW :
     case FieldContractSettlMonth::RAW :
     case FieldCPProgram::RAW :
     case FieldCPRegType::RAW :
     case FieldNoEvents::RAW :
     case FieldDatedDate::RAW :
     case FieldInterestAccrualDate::RAW :
     case FieldNoUnderlyings::RAW :
     case FieldPrevClosePx::RAW :
     case FieldSide::RAW :
     case FieldSideValueInd::RAW :
     case FieldLocateReqd::RAW :
     case FieldTransactTime::RAW :
     case FieldNoStipulations::RAW :
     case FieldQtyType::RAW :
     case FieldOrderQty::RAW :
     case FieldCashOrderQty::RAW :
     case FieldOrderPercent::RAW :
     case FieldRoundingDirection::RAW :
     case FieldRoundingModulus::RAW :
     case FieldOrdType::RAW :
     case FieldPriceType::RAW :
     case FieldPrice::RAW :
     case FieldStopPx::RAW :
     case FieldSpread::RAW :
     case FieldBenchmarkCurveCurrency::RAW :
     case FieldBenchmarkCurveName::RAW :
     case FieldBenchmarkCurvePoint::RAW :
     case FieldBenchmarkPrice::RAW :
     case FieldBenchmarkPriceType::RAW :
     case FieldBenchmarkSecurityID::RAW :
     case FieldBenchmarkSecurityIDSource::RAW :
     case FieldYieldType::RAW :
     case FieldYield::RAW :
     case FieldYieldCalcDate::RAW :
     case FieldYieldRedemptionDate::RAW :
     case FieldYieldRedemptionPrice::RAW :
     case FieldYieldRedemptionPriceType::RAW :
     case FieldCurrency::RAW :
     case FieldComplianceID::RAW :
     case FieldSolicitedFlag::RAW :
     case FieldIOIID::RAW :
     case FieldQuoteID::RAW :
     case FieldTimeInForce::RAW :
     case FieldEffectiveTime::RAW :
     case FieldExpireDate::RAW :
     case FieldExpireTime::RAW :
     case FieldGTBookingInst::RAW :
     case FieldCommission::RAW :
     case FieldCommType::RAW :
     case FieldCommCurrency::RAW :
     case FieldFundRenewWaiv::RAW :
     case FieldOrderCapacity::RAW :
     case FieldOrderRestrictions::RAW :
     case FieldCustOrderCapacity::RAW :
     case FieldForexReq::RAW :
     case FieldSettlCurrency::RAW :
     case FieldBookingType::RAW :
     case FieldText::RAW :
     case FieldEncodedTextLen::RAW :
     case FieldEncodedText::RAW :
     case FieldSettlDate2::RAW :
     case FieldOrderQty2::RAW :
     case FieldPrice2::RAW :
     case FieldPositionEffect::RAW :
     case FieldCoveredOrUncovered::RAW :
     case FieldMaxShow::RAW :
     case FieldPegOffsetValue::RAW :
     case FieldPegMoveType::RAW :
     case FieldPegOffsetType::RAW :
     case FieldPegLimitType::RAW :
     case FieldPegRoundDirection::RAW :
     case FieldPegScope::RAW :
     case FieldDiscretionInst::RAW :
     case FieldDiscretionOffsetValue::RAW :
     case FieldDiscretionMoveType::RAW :
     case FieldDiscretionOffsetType::RAW :
     case FieldDiscretionLimitType::RAW :
     case FieldDiscretionRoundDirection::RAW :
     case FieldDiscretionScope::RAW :
     case FieldTargetStrategy::RAW :
     case FieldTargetStrategyParameters::RAW :
     case FieldParticipationRate::RAW :
     case FieldDesignation::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupSettlPartySubIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSettlPartySubID::RAW :
     ret.isFirstInGroup = true;
     case FieldSettlPartySubIDType::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupSettlPartyIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSettlPartyID::RAW :
     ret.isFirstInGroup = true;
     case FieldSettlPartyIDSource::RAW :
     case FieldSettlPartyRole::RAW :
     case FieldNoSettlPartySubIDs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupDlvyInst::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSettlInstSource::RAW :
     ret.isFirstInGroup = true;
     case FieldDlvyInstType::RAW :
     case FieldNoSettlPartyIDs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupClearingInstructions::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldClearingInstruction::RAW :
     ret.isFirstInGroup = true;

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupNestedPartySubIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldNestedPartySubID::RAW :
     ret.isFirstInGroup = true;
     case FieldNestedPartySubIDType::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupNestedPartyIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldNestedPartyID::RAW :
     ret.isFirstInGroup = true;
     case FieldNestedPartyIDSource::RAW :
     case FieldNestedPartyRole::RAW :
     case FieldNoNestedPartySubIDs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupLegs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldLegSymbol::RAW :
     ret.isFirstInGroup = true;
     case FieldLegSymbolSfx::RAW :
     case FieldLegSecurityID::RAW :
     case FieldLegSecurityIDSource::RAW :
     case FieldNoLegSecurityAltID::RAW :
     case FieldLegProduct::RAW :
     case FieldLegCFICode::RAW :
     case FieldLegSecurityType::RAW :
     case FieldLegSecuritySubType::RAW :
     case FieldLegMaturityMonthYear::RAW :
     case FieldLegMaturityDate::RAW :
     case FieldLegCouponPaymentDate::RAW :
     case FieldLegIssueDate::RAW :
     case FieldLegRepoCollateralSecurityType::RAW :
     case FieldLegRepurchaseTerm::RAW :
     case FieldLegRepurchaseRate::RAW :
     case FieldLegFactor::RAW :
     case FieldLegCreditRating::RAW :
     case FieldLegInstrRegistry::RAW :
     case FieldLegCountryOfIssue::RAW :
     case FieldLegStateOrProvinceOfIssue::RAW :
     case FieldLegLocaleOfIssue::RAW :
     case FieldLegRedemptionDate::RAW :
     case FieldLegStrikePrice::RAW :
     case FieldLegStrikeCurrency::RAW :
     case FieldLegOptAttribute::RAW :
     case FieldLegContractMultiplier::RAW :
     case FieldLegCouponRate::RAW :
     case FieldLegSecurityExchange::RAW :
     case FieldLegIssuer::RAW :
     case FieldEncodedLegIssuerLen::RAW :
     case FieldEncodedLegIssuer::RAW :
     case FieldLegSecurityDesc::RAW :
     case FieldEncodedLegSecurityDescLen::RAW :
     case FieldEncodedLegSecurityDesc::RAW :
     case FieldLegRatioQty::RAW :
     case FieldLegSide::RAW :
     case FieldLegCurrency::RAW :
     case FieldLegPool::RAW :
     case FieldLegDatedDate::RAW :
     case FieldLegContractSettlMonth::RAW :
     case FieldLegInterestAccrualDate::RAW :
     case FieldLegQty::RAW :
     case FieldLegSwapType::RAW :
     case FieldNoLegStipulations::RAW :
     case FieldLegPositionEffect::RAW :
     case FieldLegCoveredOrUncovered::RAW :
     case FieldNoNestedPartyIDs::RAW :
     case FieldLegRefID::RAW :
     case FieldLegPrice::RAW :
     case FieldLegSettlType::RAW :
     case FieldLegSettlDate::RAW :
     case FieldLegLastPx::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupQuoteEntries::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSymbol::RAW :
     ret.isFirstInGroup = true;
     case FieldSymbolSfx::RAW :
     case FieldSecurityID::RAW :
     case FieldSecurityIDSource::RAW :
     case FieldNoSecurityAltID::RAW :
     case FieldProduct::RAW :
     case FieldCFICode::RAW :
     case FieldSecurityType::RAW :
     case FieldSecuritySubType::RAW :
     case FieldMaturityMonthYear::RAW :
     case FieldMaturityDate::RAW :
     case FieldPutOrCall::RAW :
     case FieldCouponPaymentDate::RAW :
     case FieldIssueDate::RAW :
     case FieldRepoCollateralSecurityType::RAW :
     case FieldRepurchaseTerm::RAW :
     case FieldRepurchaseRate::RAW :
     case FieldFactor::RAW :
     case FieldCreditRating::RAW :
     case FieldInstrRegistry::RAW :
     case FieldCountryOfIssue::RAW :
     case FieldStateOrProvinceOfIssue::RAW :
     case FieldLocaleOfIssue::RAW :
     case FieldRedemptionDate::RAW :
     case FieldStrikePrice::RAW :
     case FieldStrikeCurrency::RAW :
     case FieldOptAttribute::RAW :
     case FieldContractMultiplier::RAW :
     case FieldCouponRate::RAW :
     case FieldSecurityExchange::RAW :
     case FieldIssuer::RAW :
     case FieldEncodedIssuerLen::RAW :
     case FieldEncodedIssuer::RAW :
     case FieldSecurityDesc::RAW :
     case FieldEncodedSecurityDescLen::RAW :
     case FieldEncodedSecurityDesc::RAW :
     case FieldPool::RAW :
     case FieldContractSettlMonth::RAW :
     case FieldCPProgram::RAW :
     case FieldCPRegType::RAW :
     case FieldNoEvents::RAW :
     case FieldDatedDate::RAW :
     case FieldInterestAccrualDate::RAW :
     case FieldAgreementDesc::RAW :
     case FieldAgreementID::RAW :
     case FieldAgreementDate::RAW :
     case FieldAgreementCurrency::RAW :
     case FieldTerminationType::RAW :
     case FieldStartDate::RAW :
     case FieldEndDate::RAW :
     case FieldDeliveryType::RAW :
     case FieldMarginRatio::RAW :
     case FieldNoUnderlyings::RAW :
     case FieldNoLegs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupQuoteSets::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldQuoteSetID::RAW :
     ret.isFirstInGroup = true;
     case FieldUnderlyingSymbol::RAW :
     case FieldUnderlyingSymbolSfx::RAW :
     case FieldUnderlyingSecurityID::RAW :
     case FieldUnderlyingSecurityIDSource::RAW :
     case FieldNoUnderlyingSecurityAltID::RAW :
     case FieldUnderlyingProduct::RAW :
     case FieldUnderlyingCFICode::RAW :
     case FieldUnderlyingSecurityType::RAW :
     case FieldUnderlyingSecuritySubType::RAW :
     case FieldUnderlyingMaturityMonthYear::RAW :
     case FieldUnderlyingMaturityDate::RAW :
     case FieldUnderlyingPutOrCall::RAW :
     case FieldUnderlyingCouponPaymentDate::RAW :
     case FieldUnderlyingIssueDate::RAW :
     case FieldUnderlyingRepoCollateralSecurityType::RAW :
     case FieldUnderlyingRepurchaseTerm::RAW :
     case FieldUnderlyingRepurchaseRate::RAW :
     case FieldUnderlyingFactor::RAW :
     case FieldUnderlyingCreditRating::RAW :
     case FieldUnderlyingInstrRegistry::RAW :
     case FieldUnderlyingCountryOfIssue::RAW :
     case FieldUnderlyingStateOrProvinceOfIssue::RAW :
     case FieldUnderlyingLocaleOfIssue::RAW :
     case FieldUnderlyingRedemptionDate::RAW :
     case FieldUnderlyingStrikePrice::RAW :
     case FieldUnderlyingStrikeCurrency::RAW :
     case FieldUnderlyingOptAttribute::RAW :
     case FieldUnderlyingContractMultiplier::RAW :
     case FieldUnderlyingCouponRate::RAW :
     case FieldUnderlyingSecurityExchange::RAW :
     case FieldUnderlyingIssuer::RAW :
     case FieldEncodedUnderlyingIssuerLen::RAW :
     case FieldEncodedUnderlyingIssuer::RAW :
     case FieldUnderlyingSecurityDesc::RAW :
     case FieldEncodedUnderlyingSecurityDescLen::RAW :
     case FieldEncodedUnderlyingSecurityDesc::RAW :
     case FieldUnderlyingCPProgram::RAW :
     case FieldUnderlyingCPRegType::RAW :
     case FieldUnderlyingCurrency::RAW :
     case FieldUnderlyingQty::RAW :
     case FieldUnderlyingPx::RAW :
     case FieldUnderlyingDirtyPrice::RAW :
     case FieldUnderlyingEndPrice::RAW :
     case FieldUnderlyingStartValue::RAW :
     case FieldUnderlyingCurrentValue::RAW :
     case FieldUnderlyingEndValue::RAW :
     case FieldNoUnderlyingStips::RAW :
     case FieldTotNoQuoteEntries::RAW :
     case FieldLastFragment::RAW :
     case FieldNoQuoteEntries::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupSecurityTypes::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSecurityType::RAW :
     ret.isFirstInGroup = true;
     case FieldSecuritySubType::RAW :
     case FieldProduct::RAW :
     case FieldCFICode::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupNested3PartyIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldNested3PartyID::RAW :
     ret.isFirstInGroup = true;
     case FieldNested3PartyIDSource::RAW :
     case FieldNested3PartyRole::RAW :
     case FieldNoNested3PartySubIDs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupPositions::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldPosType::RAW :
     ret.isFirstInGroup = true;
     case FieldLongQty::RAW :
     case FieldShortQty::RAW :
     case FieldPosQtyStatus::RAW :
     case FieldNoNestedPartyIDs::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupAffectedOrders::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldOrigClOrdID::RAW :
     ret.isFirstInGroup = true;
     case FieldAffectedOrderID::RAW :
     case FieldAffectedSecondaryOrderID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupExecs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldLastQty::RAW :
     ret.isFirstInGroup = true;
     case FieldExecID::RAW :
     case FieldSecondaryExecID::RAW :
     case FieldLastPx::RAW :
     case FieldLastParPx::RAW :
     case FieldLastCapacity::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupMsgTypes::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldRefMsgType::RAW :
     ret.isFirstInGroup = true;
     case FieldMsgDirection::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupBidComponents::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldListID::RAW :
     ret.isFirstInGroup = true;
     case FieldSide::RAW :
     case FieldTradingSessionID::RAW :
     case FieldTradingSessionSubID::RAW :
     case FieldNetGrossInd::RAW :
     case FieldSettlType::RAW :
     case FieldSettlDate::RAW :
     case FieldAccount::RAW :
     case FieldAcctIDSource::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupSettlInst::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSettlInstID::RAW :
     ret.isFirstInGroup = true;
     case FieldSettlInstTransType::RAW :
     case FieldSettlInstRefID::RAW :
     case FieldNoPartyIDs::RAW :
     case FieldSide::RAW :
     case FieldProduct::RAW :
     case FieldSecurityType::RAW :
     case FieldCFICode::RAW :
     case FieldEffectiveTime::RAW :
     case FieldExpireTime::RAW :
     case FieldLastUpdateTime::RAW :
     case FieldSettlDeliveryType::RAW :
     case FieldStandInstDbType::RAW :
     case FieldStandInstDbName::RAW :
     case FieldStandInstDbID::RAW :
     case FieldNoDlvyInst::RAW :
     case FieldPaymentMethod::RAW :
     case FieldPaymentRef::RAW :
     case FieldCardHolderName::RAW :
     case FieldCardNumber::RAW :
     case FieldCardStartDate::RAW :
     case FieldCardExpDate::RAW :
     case FieldCardIssNum::RAW :
     case FieldPaymentDate::RAW :
     case FieldPaymentRemitterID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupInstrAttrib::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldInstrAttribType::RAW :
     ret.isFirstInGroup = true;
     case FieldInstrAttribValue::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupMiscFees::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldMiscFeeAmt::RAW :
     ret.isFirstInGroup = true;
     case FieldMiscFeeCurr::RAW :
     case FieldMiscFeeType::RAW :
     case FieldMiscFeeBasis::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupQuoteQualifiers::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldQuoteQualifier::RAW :
     ret.isFirstInGroup = true;

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupDistribInsts::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldDistribPaymentMethod::RAW :
     ret.isFirstInGroup = true;
     case FieldDistribPercentage::RAW :
     case FieldCashDistribCurr::RAW :
     case FieldCashDistribAgentName::RAW :
     case FieldCashDistribAgentCode::RAW :
     case FieldCashDistribAgentAcctNumber::RAW :
     case FieldCashDistribPayRef::RAW :
     case FieldCashDistribAgentAcctName::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupTrdRegTimestamps::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldTrdRegTimestamp::RAW :
     ret.isFirstInGroup = true;
     case FieldTrdRegTimestampType::RAW :
     case FieldTrdRegTimestampOrigin::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupAltMDSource::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldAltMDSourceID::RAW :
     ret.isFirstInGroup = true;

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupSides::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSide::RAW :
     ret.isFirstInGroup = true;
     case FieldOrigClOrdID::RAW :
     case FieldClOrdID::RAW :
     case FieldSecondaryClOrdID::RAW :
     case FieldClOrdLinkID::RAW :
     case FieldOrigOrdModTime::RAW :
     case FieldNoPartyIDs::RAW :
     case FieldTradeOriginationDate::RAW :
     case FieldTradeDate::RAW :
     case FieldOrderQty::RAW :
     case FieldCashOrderQty::RAW :
     case FieldOrderPercent::RAW :
     case FieldRoundingDirection::RAW :
     case FieldRoundingModulus::RAW :
     case FieldComplianceID::RAW :
     case FieldText::RAW :
     case FieldEncodedTextLen::RAW :
     case FieldEncodedText::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupRoutingIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldRoutingType::RAW :
     ret.isFirstInGroup = true;
     case FieldRoutingID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupPosAmt::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldPosAmtType::RAW :
     ret.isFirstInGroup = true;
     case FieldPosAmt::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupLinesOfText::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldText::RAW :
     ret.isFirstInGroup = true;
     case FieldEncodedTextLen::RAW :
     case FieldEncodedText::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupIOIQualifiers::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldIOIQualifier::RAW :
     ret.isFirstInGroup = true;

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupDates::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldTradeDate::RAW :
     ret.isFirstInGroup = true;
     case FieldTransactTime::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupMDEntryTypes::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldMDEntryType::RAW :
     ret.isFirstInGroup = true;

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupRelatedSym::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSymbol::RAW :
     ret.isFirstInGroup = true;
     case FieldSymbolSfx::RAW :
     case FieldSecurityID::RAW :
     case FieldSecurityIDSource::RAW :
     case FieldNoSecurityAltID::RAW :
     case FieldProduct::RAW :
     case FieldCFICode::RAW :
     case FieldSecurityType::RAW :
     case FieldSecuritySubType::RAW :
     case FieldMaturityMonthYear::RAW :
     case FieldMaturityDate::RAW :
     case FieldPutOrCall::RAW :
     case FieldCouponPaymentDate::RAW :
     case FieldIssueDate::RAW :
     case FieldRepoCollateralSecurityType::RAW :
     case FieldRepurchaseTerm::RAW :
     case FieldRepurchaseRate::RAW :
     case FieldFactor::RAW :
     case FieldCreditRating::RAW :
     case FieldInstrRegistry::RAW :
     case FieldCountryOfIssue::RAW :
     case FieldStateOrProvinceOfIssue::RAW :
     case FieldLocaleOfIssue::RAW :
     case FieldRedemptionDate::RAW :
     case FieldStrikePrice::RAW :
     case FieldStrikeCurrency::RAW :
     case FieldOptAttribute::RAW :
     case FieldContractMultiplier::RAW :
     case FieldCouponRate::RAW :
     case FieldSecurityExchange::RAW :
     case FieldIssuer::RAW :
     case FieldEncodedIssuerLen::RAW :
     case FieldEncodedIssuer::RAW :
     case FieldSecurityDesc::RAW :
     case FieldEncodedSecurityDescLen::RAW :
     case FieldEncodedSecurityDesc::RAW :
     case FieldPool::RAW :
     case FieldContractSettlMonth::RAW :
     case FieldCPProgram::RAW :
     case FieldCPRegType::RAW :
     case FieldNoEvents::RAW :
     case FieldDatedDate::RAW :
     case FieldInterestAccrualDate::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupContraBrokers::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldContraBroker::RAW :
     ret.isFirstInGroup = true;
     case FieldContraTrader::RAW :
     case FieldContraTradeQty::RAW :
     case FieldContraTradeTime::RAW :
     case FieldContraLegRefID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupTrades::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldTradeReportID::RAW :
     ret.isFirstInGroup = true;
     case FieldSecondaryTradeReportID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupStrikes::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldSymbol::RAW :
     ret.isFirstInGroup = true;
     case FieldSymbolSfx::RAW :
     case FieldSecurityID::RAW :
     case FieldSecurityIDSource::RAW :
     case FieldNoSecurityAltID::RAW :
     case FieldProduct::RAW :
     case FieldCFICode::RAW :
     case FieldSecurityType::RAW :
     case FieldSecuritySubType::RAW :
     case FieldMaturityMonthYear::RAW :
     case FieldMaturityDate::RAW :
     case FieldPutOrCall::RAW :
     case FieldCouponPaymentDate::RAW :
     case FieldIssueDate::RAW :
     case FieldRepoCollateralSecurityType::RAW :
     case FieldRepurchaseTerm::RAW :
     case FieldRepurchaseRate::RAW :
     case FieldFactor::RAW :
     case FieldCreditRating::RAW :
     case FieldInstrRegistry::RAW :
     case FieldCountryOfIssue::RAW :
     case FieldStateOrProvinceOfIssue::RAW :
     case FieldLocaleOfIssue::RAW :
     case FieldRedemptionDate::RAW :
     case FieldStrikePrice::RAW :
     case FieldStrikeCurrency::RAW :
     case FieldOptAttribute::RAW :
     case FieldContractMultiplier::RAW :
     case FieldCouponRate::RAW :
     case FieldSecurityExchange::RAW :
     case FieldIssuer::RAW :
     case FieldEncodedIssuerLen::RAW :
     case FieldEncodedIssuer::RAW :
     case FieldSecurityDesc::RAW :
     case FieldEncodedSecurityDescLen::RAW :
     case FieldEncodedSecurityDesc::RAW :
     case FieldPool::RAW :
     case FieldContractSettlMonth::RAW :
     case FieldCPProgram::RAW :
     case FieldCPRegType::RAW :
     case FieldNoEvents::RAW :
     case FieldDatedDate::RAW :
     case FieldInterestAccrualDate::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupBidDescriptors::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldBidDescriptorType::RAW :
     ret.isFirstInGroup = true;
     case FieldBidDescriptor::RAW :
     case FieldSideValueInd::RAW :
     case FieldLiquidityValue::RAW :
     case FieldLiquidityNumSecurities::RAW :
     case FieldLiquidityPctLow::RAW :
     case FieldLiquidityPctHigh::RAW :
     case FieldEFPTrackingError::RAW :
     case FieldFairValue::RAW :
     case FieldOutsideIndexPct::RAW :
     case FieldValueOfFutures::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupCompIDs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldRefCompID::RAW :
     ret.isFirstInGroup = true;
     case FieldRefSubID::RAW :
     case FieldLocationID::RAW :
     case FieldDeskID::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupLegAllocs::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldLegAllocAccount::RAW :
     ret.isFirstInGroup = true;
     case FieldLegIndividualAllocID::RAW :
     case FieldNoNested2PartyIDs::RAW :
     case FieldLegAllocQty::RAW :
     case FieldLegAllocAcctIDSource::RAW :
     case FieldLegSettlCurrency::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupRegistDtls::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldRegistDtls::RAW :
     ret.isFirstInGroup = true;
     case FieldRegistEmail::RAW :
     case FieldMailingDtls::RAW :
     case FieldMailingInst::RAW :
     case FieldNoNestedPartyIDs::RAW :
     case FieldOwnerType::RAW :
     case FieldDateOfBirth::RAW :
     case FieldInvestorCountryOfResidence::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupContAmts::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldContAmtType::RAW :
     ret.isFirstInGroup = true;
     case FieldContAmtValue::RAW :
     case FieldContAmtCurr::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

FieldDepth GroupMDEntries::getFieldDepth( raw_tag_t tag ){
   FieldDepth ret;
   switch( tag ){
     case FieldMDEntryType::RAW :
     ret.isFirstInGroup = true;
     case FieldMDEntryPx::RAW :
     case FieldCurrency::RAW :
     case FieldMDEntrySize::RAW :
     case FieldMDEntryDate::RAW :
     case FieldMDEntryTime::RAW :
     case FieldTickDirection::RAW :
     case FieldMDMkt::RAW :
     case FieldTradingSessionID::RAW :
     case FieldTradingSessionSubID::RAW :
     case FieldQuoteCondition::RAW :
     case FieldTradeCondition::RAW :
     case FieldMDEntryOriginator::RAW :
     case FieldLocationID::RAW :
     case FieldDeskID::RAW :
     case FieldOpenCloseSettlFlag::RAW :
     case FieldTimeInForce::RAW :
     case FieldExpireDate::RAW :
     case FieldExpireTime::RAW :
     case FieldMinQty::RAW :
     case FieldExecInst::RAW :
     case FieldSellerDays::RAW :
     case FieldOrderID::RAW :
     case FieldQuoteEntryID::RAW :
     case FieldMDEntryBuyer::RAW :
     case FieldMDEntrySeller::RAW :
     case FieldNumberOfOrders::RAW :
     case FieldMDEntryPositionNo::RAW :
     case FieldScope::RAW :
     case FieldPriceDelta::RAW :
     case FieldText::RAW :
     case FieldEncodedTextLen::RAW :
     case FieldEncodedText::RAW :

     ret.depth = 0; 
     return ret; 
   }
   for( auto m : groupGetDepthMethods ) if( m ){
     FieldDepth gdepth = (*m)( tag ); 
     if( gdepth.depth >= 0 ) { return gdepth.inc(); }
   }
   return ret;
}

const char * GroupLegStipulations::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldLegStipulationType::KEY : return fieldLegStipulationType.offset >= 0 ? buf + fieldLegStipulationType.offset : nullptr;
     case FieldLegStipulationValue::KEY : return fieldLegStipulationValue.offset >= 0 ? buf + fieldLegStipulationValue.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupEvents::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldEventType::KEY : return fieldEventType.offset >= 0 ? buf + fieldEventType.offset : nullptr;
     case FieldEventDate::KEY : return fieldEventDate.offset >= 0 ? buf + fieldEventDate.offset : nullptr;
     case FieldEventPx::KEY : return fieldEventPx.offset >= 0 ? buf + fieldEventPx.offset : nullptr;
     case FieldEventText::KEY : return fieldEventText.offset >= 0 ? buf + fieldEventText.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupLegSecurityAltID::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldLegSecurityAltID::KEY : return fieldLegSecurityAltID.offset >= 0 ? buf + fieldLegSecurityAltID.offset : nullptr;
     case FieldLegSecurityAltIDSource::KEY : return fieldLegSecurityAltIDSource.offset >= 0 ? buf + fieldLegSecurityAltIDSource.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupCapacities::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldOrderCapacity::KEY : return fieldOrderCapacity.offset >= 0 ? buf + fieldOrderCapacity.offset : nullptr;
     case FieldOrderRestrictions::KEY : return fieldOrderRestrictions.offset >= 0 ? buf + fieldOrderRestrictions.offset : nullptr;
     case FieldOrderCapacityQty::KEY : return fieldOrderCapacityQty.offset >= 0 ? buf + fieldOrderCapacityQty.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupNested3PartySubIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldNested3PartySubID::KEY : return fieldNested3PartySubID.offset >= 0 ? buf + fieldNested3PartySubID.offset : nullptr;
     case FieldNested3PartySubIDType::KEY : return fieldNested3PartySubIDType.offset >= 0 ? buf + fieldNested3PartySubIDType.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupPartySubIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldPartySubID::KEY : return fieldPartySubID.offset >= 0 ? buf + fieldPartySubID.offset : nullptr;
     case FieldPartySubIDType::KEY : return fieldPartySubIDType.offset >= 0 ? buf + fieldPartySubIDType.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupNested2PartySubIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldNested2PartySubID::KEY : return fieldNested2PartySubID.offset >= 0 ? buf + fieldNested2PartySubID.offset : nullptr;
     case FieldNested2PartySubIDType::KEY : return fieldNested2PartySubIDType.offset >= 0 ? buf + fieldNested2PartySubIDType.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupNested2PartyIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldNested2PartyID::KEY : return fieldNested2PartyID.offset >= 0 ? buf + fieldNested2PartyID.offset : nullptr;
     case FieldNested2PartyIDSource::KEY : return fieldNested2PartyIDSource.offset >= 0 ? buf + fieldNested2PartyIDSource.offset : nullptr;
     case FieldNested2PartyRole::KEY : return fieldNested2PartyRole.offset >= 0 ? buf + fieldNested2PartyRole.offset : nullptr;
     case FieldNoNested2PartySubIDs::KEY : return fieldNoNested2PartySubIDs.offset >= 0 ? buf + fieldNoNested2PartySubIDs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupHops::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldHopCompID::KEY : return fieldHopCompID.offset >= 0 ? buf + fieldHopCompID.offset : nullptr;
     case FieldHopSendingTime::KEY : return fieldHopSendingTime.offset >= 0 ? buf + fieldHopSendingTime.offset : nullptr;
     case FieldHopRefID::KEY : return fieldHopRefID.offset >= 0 ? buf + fieldHopRefID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupCollInquiryQualifier::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldCollInquiryQualifier::KEY : return fieldCollInquiryQualifier.offset >= 0 ? buf + fieldCollInquiryQualifier.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupPartyIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldPartyID::KEY : return fieldPartyID.offset >= 0 ? buf + fieldPartyID.offset : nullptr;
     case FieldPartyIDSource::KEY : return fieldPartyIDSource.offset >= 0 ? buf + fieldPartyIDSource.offset : nullptr;
     case FieldPartyRole::KEY : return fieldPartyRole.offset >= 0 ? buf + fieldPartyRole.offset : nullptr;
     case FieldNoPartySubIDs::KEY : return fieldNoPartySubIDs.offset >= 0 ? buf + fieldNoPartySubIDs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupAllocs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldAllocAccount::KEY : return fieldAllocAccount.offset >= 0 ? buf + fieldAllocAccount.offset : nullptr;
     case FieldAllocAcctIDSource::KEY : return fieldAllocAcctIDSource.offset >= 0 ? buf + fieldAllocAcctIDSource.offset : nullptr;
     case FieldAllocPrice::KEY : return fieldAllocPrice.offset >= 0 ? buf + fieldAllocPrice.offset : nullptr;
     case FieldIndividualAllocID::KEY : return fieldIndividualAllocID.offset >= 0 ? buf + fieldIndividualAllocID.offset : nullptr;
     case FieldIndividualAllocRejCode::KEY : return fieldIndividualAllocRejCode.offset >= 0 ? buf + fieldIndividualAllocRejCode.offset : nullptr;
     case FieldAllocText::KEY : return fieldAllocText.offset >= 0 ? buf + fieldAllocText.offset : nullptr;
     case FieldEncodedAllocTextLen::KEY : return fieldEncodedAllocTextLen.offset >= 0 ? buf + fieldEncodedAllocTextLen.offset : nullptr;
     case FieldEncodedAllocText::KEY : return fieldEncodedAllocText.offset >= 0 ? buf + fieldEncodedAllocText.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupTradingSessions::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldTradingSessionID::KEY : return fieldTradingSessionID.offset >= 0 ? buf + fieldTradingSessionID.offset : nullptr;
     case FieldTradingSessionSubID::KEY : return fieldTradingSessionSubID.offset >= 0 ? buf + fieldTradingSessionSubID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupSecurityAltID::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSecurityAltID::KEY : return fieldSecurityAltID.offset >= 0 ? buf + fieldSecurityAltID.offset : nullptr;
     case FieldSecurityAltIDSource::KEY : return fieldSecurityAltIDSource.offset >= 0 ? buf + fieldSecurityAltIDSource.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupUnderlyingSecurityAltID::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldUnderlyingSecurityAltID::KEY : return fieldUnderlyingSecurityAltID.offset >= 0 ? buf + fieldUnderlyingSecurityAltID.offset : nullptr;
     case FieldUnderlyingSecurityAltIDSource::KEY : return fieldUnderlyingSecurityAltIDSource.offset >= 0 ? buf + fieldUnderlyingSecurityAltIDSource.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupUnderlyingStips::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldUnderlyingStipType::KEY : return fieldUnderlyingStipType.offset >= 0 ? buf + fieldUnderlyingStipType.offset : nullptr;
     case FieldUnderlyingStipValue::KEY : return fieldUnderlyingStipValue.offset >= 0 ? buf + fieldUnderlyingStipValue.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupUnderlyings::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldUnderlyingSymbol::KEY : return fieldUnderlyingSymbol.offset >= 0 ? buf + fieldUnderlyingSymbol.offset : nullptr;
     case FieldUnderlyingSymbolSfx::KEY : return fieldUnderlyingSymbolSfx.offset >= 0 ? buf + fieldUnderlyingSymbolSfx.offset : nullptr;
     case FieldUnderlyingSecurityID::KEY : return fieldUnderlyingSecurityID.offset >= 0 ? buf + fieldUnderlyingSecurityID.offset : nullptr;
     case FieldUnderlyingSecurityIDSource::KEY : return fieldUnderlyingSecurityIDSource.offset >= 0 ? buf + fieldUnderlyingSecurityIDSource.offset : nullptr;
     case FieldNoUnderlyingSecurityAltID::KEY : return fieldNoUnderlyingSecurityAltID.offset >= 0 ? buf + fieldNoUnderlyingSecurityAltID.offset : nullptr;
     case FieldUnderlyingProduct::KEY : return fieldUnderlyingProduct.offset >= 0 ? buf + fieldUnderlyingProduct.offset : nullptr;
     case FieldUnderlyingCFICode::KEY : return fieldUnderlyingCFICode.offset >= 0 ? buf + fieldUnderlyingCFICode.offset : nullptr;
     case FieldUnderlyingSecurityType::KEY : return fieldUnderlyingSecurityType.offset >= 0 ? buf + fieldUnderlyingSecurityType.offset : nullptr;
     case FieldUnderlyingSecuritySubType::KEY : return fieldUnderlyingSecuritySubType.offset >= 0 ? buf + fieldUnderlyingSecuritySubType.offset : nullptr;
     case FieldUnderlyingMaturityMonthYear::KEY : return fieldUnderlyingMaturityMonthYear.offset >= 0 ? buf + fieldUnderlyingMaturityMonthYear.offset : nullptr;
     case FieldUnderlyingMaturityDate::KEY : return fieldUnderlyingMaturityDate.offset >= 0 ? buf + fieldUnderlyingMaturityDate.offset : nullptr;
     case FieldUnderlyingPutOrCall::KEY : return fieldUnderlyingPutOrCall.offset >= 0 ? buf + fieldUnderlyingPutOrCall.offset : nullptr;
     case FieldUnderlyingCouponPaymentDate::KEY : return fieldUnderlyingCouponPaymentDate.offset >= 0 ? buf + fieldUnderlyingCouponPaymentDate.offset : nullptr;
     case FieldUnderlyingIssueDate::KEY : return fieldUnderlyingIssueDate.offset >= 0 ? buf + fieldUnderlyingIssueDate.offset : nullptr;
     case FieldUnderlyingRepoCollateralSecurityType::KEY : return fieldUnderlyingRepoCollateralSecurityType.offset >= 0 ? buf + fieldUnderlyingRepoCollateralSecurityType.offset : nullptr;
     case FieldUnderlyingRepurchaseTerm::KEY : return fieldUnderlyingRepurchaseTerm.offset >= 0 ? buf + fieldUnderlyingRepurchaseTerm.offset : nullptr;
     case FieldUnderlyingRepurchaseRate::KEY : return fieldUnderlyingRepurchaseRate.offset >= 0 ? buf + fieldUnderlyingRepurchaseRate.offset : nullptr;
     case FieldUnderlyingFactor::KEY : return fieldUnderlyingFactor.offset >= 0 ? buf + fieldUnderlyingFactor.offset : nullptr;
     case FieldUnderlyingCreditRating::KEY : return fieldUnderlyingCreditRating.offset >= 0 ? buf + fieldUnderlyingCreditRating.offset : nullptr;
     case FieldUnderlyingInstrRegistry::KEY : return fieldUnderlyingInstrRegistry.offset >= 0 ? buf + fieldUnderlyingInstrRegistry.offset : nullptr;
     case FieldUnderlyingCountryOfIssue::KEY : return fieldUnderlyingCountryOfIssue.offset >= 0 ? buf + fieldUnderlyingCountryOfIssue.offset : nullptr;
     case FieldUnderlyingStateOrProvinceOfIssue::KEY : return fieldUnderlyingStateOrProvinceOfIssue.offset >= 0 ? buf + fieldUnderlyingStateOrProvinceOfIssue.offset : nullptr;
     case FieldUnderlyingLocaleOfIssue::KEY : return fieldUnderlyingLocaleOfIssue.offset >= 0 ? buf + fieldUnderlyingLocaleOfIssue.offset : nullptr;
     case FieldUnderlyingRedemptionDate::KEY : return fieldUnderlyingRedemptionDate.offset >= 0 ? buf + fieldUnderlyingRedemptionDate.offset : nullptr;
     case FieldUnderlyingStrikePrice::KEY : return fieldUnderlyingStrikePrice.offset >= 0 ? buf + fieldUnderlyingStrikePrice.offset : nullptr;
     case FieldUnderlyingStrikeCurrency::KEY : return fieldUnderlyingStrikeCurrency.offset >= 0 ? buf + fieldUnderlyingStrikeCurrency.offset : nullptr;
     case FieldUnderlyingOptAttribute::KEY : return fieldUnderlyingOptAttribute.offset >= 0 ? buf + fieldUnderlyingOptAttribute.offset : nullptr;
     case FieldUnderlyingContractMultiplier::KEY : return fieldUnderlyingContractMultiplier.offset >= 0 ? buf + fieldUnderlyingContractMultiplier.offset : nullptr;
     case FieldUnderlyingCouponRate::KEY : return fieldUnderlyingCouponRate.offset >= 0 ? buf + fieldUnderlyingCouponRate.offset : nullptr;
     case FieldUnderlyingSecurityExchange::KEY : return fieldUnderlyingSecurityExchange.offset >= 0 ? buf + fieldUnderlyingSecurityExchange.offset : nullptr;
     case FieldUnderlyingIssuer::KEY : return fieldUnderlyingIssuer.offset >= 0 ? buf + fieldUnderlyingIssuer.offset : nullptr;
     case FieldEncodedUnderlyingIssuerLen::KEY : return fieldEncodedUnderlyingIssuerLen.offset >= 0 ? buf + fieldEncodedUnderlyingIssuerLen.offset : nullptr;
     case FieldEncodedUnderlyingIssuer::KEY : return fieldEncodedUnderlyingIssuer.offset >= 0 ? buf + fieldEncodedUnderlyingIssuer.offset : nullptr;
     case FieldUnderlyingSecurityDesc::KEY : return fieldUnderlyingSecurityDesc.offset >= 0 ? buf + fieldUnderlyingSecurityDesc.offset : nullptr;
     case FieldEncodedUnderlyingSecurityDescLen::KEY : return fieldEncodedUnderlyingSecurityDescLen.offset >= 0 ? buf + fieldEncodedUnderlyingSecurityDescLen.offset : nullptr;
     case FieldEncodedUnderlyingSecurityDesc::KEY : return fieldEncodedUnderlyingSecurityDesc.offset >= 0 ? buf + fieldEncodedUnderlyingSecurityDesc.offset : nullptr;
     case FieldUnderlyingCPProgram::KEY : return fieldUnderlyingCPProgram.offset >= 0 ? buf + fieldUnderlyingCPProgram.offset : nullptr;
     case FieldUnderlyingCPRegType::KEY : return fieldUnderlyingCPRegType.offset >= 0 ? buf + fieldUnderlyingCPRegType.offset : nullptr;
     case FieldUnderlyingCurrency::KEY : return fieldUnderlyingCurrency.offset >= 0 ? buf + fieldUnderlyingCurrency.offset : nullptr;
     case FieldUnderlyingQty::KEY : return fieldUnderlyingQty.offset >= 0 ? buf + fieldUnderlyingQty.offset : nullptr;
     case FieldUnderlyingPx::KEY : return fieldUnderlyingPx.offset >= 0 ? buf + fieldUnderlyingPx.offset : nullptr;
     case FieldUnderlyingDirtyPrice::KEY : return fieldUnderlyingDirtyPrice.offset >= 0 ? buf + fieldUnderlyingDirtyPrice.offset : nullptr;
     case FieldUnderlyingEndPrice::KEY : return fieldUnderlyingEndPrice.offset >= 0 ? buf + fieldUnderlyingEndPrice.offset : nullptr;
     case FieldUnderlyingStartValue::KEY : return fieldUnderlyingStartValue.offset >= 0 ? buf + fieldUnderlyingStartValue.offset : nullptr;
     case FieldUnderlyingCurrentValue::KEY : return fieldUnderlyingCurrentValue.offset >= 0 ? buf + fieldUnderlyingCurrentValue.offset : nullptr;
     case FieldUnderlyingEndValue::KEY : return fieldUnderlyingEndValue.offset >= 0 ? buf + fieldUnderlyingEndValue.offset : nullptr;
     case FieldNoUnderlyingStips::KEY : return fieldNoUnderlyingStips.offset >= 0 ? buf + fieldNoUnderlyingStips.offset : nullptr;
     case FieldUnderlyingSettlPrice::KEY : return fieldUnderlyingSettlPrice.offset >= 0 ? buf + fieldUnderlyingSettlPrice.offset : nullptr;
     case FieldUnderlyingSettlPriceType::KEY : return fieldUnderlyingSettlPriceType.offset >= 0 ? buf + fieldUnderlyingSettlPriceType.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupStipulations::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldStipulationType::KEY : return fieldStipulationType.offset >= 0 ? buf + fieldStipulationType.offset : nullptr;
     case FieldStipulationValue::KEY : return fieldStipulationValue.offset >= 0 ? buf + fieldStipulationValue.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupOrders::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldClOrdID::KEY : return fieldClOrdID.offset >= 0 ? buf + fieldClOrdID.offset : nullptr;
     case FieldSecondaryClOrdID::KEY : return fieldSecondaryClOrdID.offset >= 0 ? buf + fieldSecondaryClOrdID.offset : nullptr;
     case FieldListSeqNo::KEY : return fieldListSeqNo.offset >= 0 ? buf + fieldListSeqNo.offset : nullptr;
     case FieldClOrdLinkID::KEY : return fieldClOrdLinkID.offset >= 0 ? buf + fieldClOrdLinkID.offset : nullptr;
     case FieldSettlInstMode::KEY : return fieldSettlInstMode.offset >= 0 ? buf + fieldSettlInstMode.offset : nullptr;
     case FieldNoPartyIDs::KEY : return fieldNoPartyIDs.offset >= 0 ? buf + fieldNoPartyIDs.offset : nullptr;
     case FieldTradeOriginationDate::KEY : return fieldTradeOriginationDate.offset >= 0 ? buf + fieldTradeOriginationDate.offset : nullptr;
     case FieldTradeDate::KEY : return fieldTradeDate.offset >= 0 ? buf + fieldTradeDate.offset : nullptr;
     case FieldAccount::KEY : return fieldAccount.offset >= 0 ? buf + fieldAccount.offset : nullptr;
     case FieldAcctIDSource::KEY : return fieldAcctIDSource.offset >= 0 ? buf + fieldAcctIDSource.offset : nullptr;
     case FieldAccountType::KEY : return fieldAccountType.offset >= 0 ? buf + fieldAccountType.offset : nullptr;
     case FieldDayBookingInst::KEY : return fieldDayBookingInst.offset >= 0 ? buf + fieldDayBookingInst.offset : nullptr;
     case FieldBookingUnit::KEY : return fieldBookingUnit.offset >= 0 ? buf + fieldBookingUnit.offset : nullptr;
     case FieldAllocID::KEY : return fieldAllocID.offset >= 0 ? buf + fieldAllocID.offset : nullptr;
     case FieldPreallocMethod::KEY : return fieldPreallocMethod.offset >= 0 ? buf + fieldPreallocMethod.offset : nullptr;
     case FieldNoAllocs::KEY : return fieldNoAllocs.offset >= 0 ? buf + fieldNoAllocs.offset : nullptr;
     case FieldSettlType::KEY : return fieldSettlType.offset >= 0 ? buf + fieldSettlType.offset : nullptr;
     case FieldSettlDate::KEY : return fieldSettlDate.offset >= 0 ? buf + fieldSettlDate.offset : nullptr;
     case FieldCashMargin::KEY : return fieldCashMargin.offset >= 0 ? buf + fieldCashMargin.offset : nullptr;
     case FieldClearingFeeIndicator::KEY : return fieldClearingFeeIndicator.offset >= 0 ? buf + fieldClearingFeeIndicator.offset : nullptr;
     case FieldHandlInst::KEY : return fieldHandlInst.offset >= 0 ? buf + fieldHandlInst.offset : nullptr;
     case FieldExecInst::KEY : return fieldExecInst.offset >= 0 ? buf + fieldExecInst.offset : nullptr;
     case FieldMinQty::KEY : return fieldMinQty.offset >= 0 ? buf + fieldMinQty.offset : nullptr;
     case FieldMaxFloor::KEY : return fieldMaxFloor.offset >= 0 ? buf + fieldMaxFloor.offset : nullptr;
     case FieldExDestination::KEY : return fieldExDestination.offset >= 0 ? buf + fieldExDestination.offset : nullptr;
     case FieldNoTradingSessions::KEY : return fieldNoTradingSessions.offset >= 0 ? buf + fieldNoTradingSessions.offset : nullptr;
     case FieldProcessCode::KEY : return fieldProcessCode.offset >= 0 ? buf + fieldProcessCode.offset : nullptr;
     case FieldSymbol::KEY : return fieldSymbol.offset >= 0 ? buf + fieldSymbol.offset : nullptr;
     case FieldSymbolSfx::KEY : return fieldSymbolSfx.offset >= 0 ? buf + fieldSymbolSfx.offset : nullptr;
     case FieldSecurityID::KEY : return fieldSecurityID.offset >= 0 ? buf + fieldSecurityID.offset : nullptr;
     case FieldSecurityIDSource::KEY : return fieldSecurityIDSource.offset >= 0 ? buf + fieldSecurityIDSource.offset : nullptr;
     case FieldNoSecurityAltID::KEY : return fieldNoSecurityAltID.offset >= 0 ? buf + fieldNoSecurityAltID.offset : nullptr;
     case FieldProduct::KEY : return fieldProduct.offset >= 0 ? buf + fieldProduct.offset : nullptr;
     case FieldCFICode::KEY : return fieldCFICode.offset >= 0 ? buf + fieldCFICode.offset : nullptr;
     case FieldSecurityType::KEY : return fieldSecurityType.offset >= 0 ? buf + fieldSecurityType.offset : nullptr;
     case FieldSecuritySubType::KEY : return fieldSecuritySubType.offset >= 0 ? buf + fieldSecuritySubType.offset : nullptr;
     case FieldMaturityMonthYear::KEY : return fieldMaturityMonthYear.offset >= 0 ? buf + fieldMaturityMonthYear.offset : nullptr;
     case FieldMaturityDate::KEY : return fieldMaturityDate.offset >= 0 ? buf + fieldMaturityDate.offset : nullptr;
     case FieldPutOrCall::KEY : return fieldPutOrCall.offset >= 0 ? buf + fieldPutOrCall.offset : nullptr;
     case FieldCouponPaymentDate::KEY : return fieldCouponPaymentDate.offset >= 0 ? buf + fieldCouponPaymentDate.offset : nullptr;
     case FieldIssueDate::KEY : return fieldIssueDate.offset >= 0 ? buf + fieldIssueDate.offset : nullptr;
     case FieldRepoCollateralSecurityType::KEY : return fieldRepoCollateralSecurityType.offset >= 0 ? buf + fieldRepoCollateralSecurityType.offset : nullptr;
     case FieldRepurchaseTerm::KEY : return fieldRepurchaseTerm.offset >= 0 ? buf + fieldRepurchaseTerm.offset : nullptr;
     case FieldRepurchaseRate::KEY : return fieldRepurchaseRate.offset >= 0 ? buf + fieldRepurchaseRate.offset : nullptr;
     case FieldFactor::KEY : return fieldFactor.offset >= 0 ? buf + fieldFactor.offset : nullptr;
     case FieldCreditRating::KEY : return fieldCreditRating.offset >= 0 ? buf + fieldCreditRating.offset : nullptr;
     case FieldInstrRegistry::KEY : return fieldInstrRegistry.offset >= 0 ? buf + fieldInstrRegistry.offset : nullptr;
     case FieldCountryOfIssue::KEY : return fieldCountryOfIssue.offset >= 0 ? buf + fieldCountryOfIssue.offset : nullptr;
     case FieldStateOrProvinceOfIssue::KEY : return fieldStateOrProvinceOfIssue.offset >= 0 ? buf + fieldStateOrProvinceOfIssue.offset : nullptr;
     case FieldLocaleOfIssue::KEY : return fieldLocaleOfIssue.offset >= 0 ? buf + fieldLocaleOfIssue.offset : nullptr;
     case FieldRedemptionDate::KEY : return fieldRedemptionDate.offset >= 0 ? buf + fieldRedemptionDate.offset : nullptr;
     case FieldStrikePrice::KEY : return fieldStrikePrice.offset >= 0 ? buf + fieldStrikePrice.offset : nullptr;
     case FieldStrikeCurrency::KEY : return fieldStrikeCurrency.offset >= 0 ? buf + fieldStrikeCurrency.offset : nullptr;
     case FieldOptAttribute::KEY : return fieldOptAttribute.offset >= 0 ? buf + fieldOptAttribute.offset : nullptr;
     case FieldContractMultiplier::KEY : return fieldContractMultiplier.offset >= 0 ? buf + fieldContractMultiplier.offset : nullptr;
     case FieldCouponRate::KEY : return fieldCouponRate.offset >= 0 ? buf + fieldCouponRate.offset : nullptr;
     case FieldSecurityExchange::KEY : return fieldSecurityExchange.offset >= 0 ? buf + fieldSecurityExchange.offset : nullptr;
     case FieldIssuer::KEY : return fieldIssuer.offset >= 0 ? buf + fieldIssuer.offset : nullptr;
     case FieldEncodedIssuerLen::KEY : return fieldEncodedIssuerLen.offset >= 0 ? buf + fieldEncodedIssuerLen.offset : nullptr;
     case FieldEncodedIssuer::KEY : return fieldEncodedIssuer.offset >= 0 ? buf + fieldEncodedIssuer.offset : nullptr;
     case FieldSecurityDesc::KEY : return fieldSecurityDesc.offset >= 0 ? buf + fieldSecurityDesc.offset : nullptr;
     case FieldEncodedSecurityDescLen::KEY : return fieldEncodedSecurityDescLen.offset >= 0 ? buf + fieldEncodedSecurityDescLen.offset : nullptr;
     case FieldEncodedSecurityDesc::KEY : return fieldEncodedSecurityDesc.offset >= 0 ? buf + fieldEncodedSecurityDesc.offset : nullptr;
     case FieldPool::KEY : return fieldPool.offset >= 0 ? buf + fieldPool.offset : nullptr;
     case FieldContractSettlMonth::KEY : return fieldContractSettlMonth.offset >= 0 ? buf + fieldContractSettlMonth.offset : nullptr;
     case FieldCPProgram::KEY : return fieldCPProgram.offset >= 0 ? buf + fieldCPProgram.offset : nullptr;
     case FieldCPRegType::KEY : return fieldCPRegType.offset >= 0 ? buf + fieldCPRegType.offset : nullptr;
     case FieldNoEvents::KEY : return fieldNoEvents.offset >= 0 ? buf + fieldNoEvents.offset : nullptr;
     case FieldDatedDate::KEY : return fieldDatedDate.offset >= 0 ? buf + fieldDatedDate.offset : nullptr;
     case FieldInterestAccrualDate::KEY : return fieldInterestAccrualDate.offset >= 0 ? buf + fieldInterestAccrualDate.offset : nullptr;
     case FieldNoUnderlyings::KEY : return fieldNoUnderlyings.offset >= 0 ? buf + fieldNoUnderlyings.offset : nullptr;
     case FieldPrevClosePx::KEY : return fieldPrevClosePx.offset >= 0 ? buf + fieldPrevClosePx.offset : nullptr;
     case FieldSide::KEY : return fieldSide.offset >= 0 ? buf + fieldSide.offset : nullptr;
     case FieldSideValueInd::KEY : return fieldSideValueInd.offset >= 0 ? buf + fieldSideValueInd.offset : nullptr;
     case FieldLocateReqd::KEY : return fieldLocateReqd.offset >= 0 ? buf + fieldLocateReqd.offset : nullptr;
     case FieldTransactTime::KEY : return fieldTransactTime.offset >= 0 ? buf + fieldTransactTime.offset : nullptr;
     case FieldNoStipulations::KEY : return fieldNoStipulations.offset >= 0 ? buf + fieldNoStipulations.offset : nullptr;
     case FieldQtyType::KEY : return fieldQtyType.offset >= 0 ? buf + fieldQtyType.offset : nullptr;
     case FieldOrderQty::KEY : return fieldOrderQty.offset >= 0 ? buf + fieldOrderQty.offset : nullptr;
     case FieldCashOrderQty::KEY : return fieldCashOrderQty.offset >= 0 ? buf + fieldCashOrderQty.offset : nullptr;
     case FieldOrderPercent::KEY : return fieldOrderPercent.offset >= 0 ? buf + fieldOrderPercent.offset : nullptr;
     case FieldRoundingDirection::KEY : return fieldRoundingDirection.offset >= 0 ? buf + fieldRoundingDirection.offset : nullptr;
     case FieldRoundingModulus::KEY : return fieldRoundingModulus.offset >= 0 ? buf + fieldRoundingModulus.offset : nullptr;
     case FieldOrdType::KEY : return fieldOrdType.offset >= 0 ? buf + fieldOrdType.offset : nullptr;
     case FieldPriceType::KEY : return fieldPriceType.offset >= 0 ? buf + fieldPriceType.offset : nullptr;
     case FieldPrice::KEY : return fieldPrice.offset >= 0 ? buf + fieldPrice.offset : nullptr;
     case FieldStopPx::KEY : return fieldStopPx.offset >= 0 ? buf + fieldStopPx.offset : nullptr;
     case FieldSpread::KEY : return fieldSpread.offset >= 0 ? buf + fieldSpread.offset : nullptr;
     case FieldBenchmarkCurveCurrency::KEY : return fieldBenchmarkCurveCurrency.offset >= 0 ? buf + fieldBenchmarkCurveCurrency.offset : nullptr;
     case FieldBenchmarkCurveName::KEY : return fieldBenchmarkCurveName.offset >= 0 ? buf + fieldBenchmarkCurveName.offset : nullptr;
     case FieldBenchmarkCurvePoint::KEY : return fieldBenchmarkCurvePoint.offset >= 0 ? buf + fieldBenchmarkCurvePoint.offset : nullptr;
     case FieldBenchmarkPrice::KEY : return fieldBenchmarkPrice.offset >= 0 ? buf + fieldBenchmarkPrice.offset : nullptr;
     case FieldBenchmarkPriceType::KEY : return fieldBenchmarkPriceType.offset >= 0 ? buf + fieldBenchmarkPriceType.offset : nullptr;
     case FieldBenchmarkSecurityID::KEY : return fieldBenchmarkSecurityID.offset >= 0 ? buf + fieldBenchmarkSecurityID.offset : nullptr;
     case FieldBenchmarkSecurityIDSource::KEY : return fieldBenchmarkSecurityIDSource.offset >= 0 ? buf + fieldBenchmarkSecurityIDSource.offset : nullptr;
     case FieldYieldType::KEY : return fieldYieldType.offset >= 0 ? buf + fieldYieldType.offset : nullptr;
     case FieldYield::KEY : return fieldYield.offset >= 0 ? buf + fieldYield.offset : nullptr;
     case FieldYieldCalcDate::KEY : return fieldYieldCalcDate.offset >= 0 ? buf + fieldYieldCalcDate.offset : nullptr;
     case FieldYieldRedemptionDate::KEY : return fieldYieldRedemptionDate.offset >= 0 ? buf + fieldYieldRedemptionDate.offset : nullptr;
     case FieldYieldRedemptionPrice::KEY : return fieldYieldRedemptionPrice.offset >= 0 ? buf + fieldYieldRedemptionPrice.offset : nullptr;
     case FieldYieldRedemptionPriceType::KEY : return fieldYieldRedemptionPriceType.offset >= 0 ? buf + fieldYieldRedemptionPriceType.offset : nullptr;
     case FieldCurrency::KEY : return fieldCurrency.offset >= 0 ? buf + fieldCurrency.offset : nullptr;
     case FieldComplianceID::KEY : return fieldComplianceID.offset >= 0 ? buf + fieldComplianceID.offset : nullptr;
     case FieldSolicitedFlag::KEY : return fieldSolicitedFlag.offset >= 0 ? buf + fieldSolicitedFlag.offset : nullptr;
     case FieldIOIID::KEY : return fieldIOIID.offset >= 0 ? buf + fieldIOIID.offset : nullptr;
     case FieldQuoteID::KEY : return fieldQuoteID.offset >= 0 ? buf + fieldQuoteID.offset : nullptr;
     case FieldTimeInForce::KEY : return fieldTimeInForce.offset >= 0 ? buf + fieldTimeInForce.offset : nullptr;
     case FieldEffectiveTime::KEY : return fieldEffectiveTime.offset >= 0 ? buf + fieldEffectiveTime.offset : nullptr;
     case FieldExpireDate::KEY : return fieldExpireDate.offset >= 0 ? buf + fieldExpireDate.offset : nullptr;
     case FieldExpireTime::KEY : return fieldExpireTime.offset >= 0 ? buf + fieldExpireTime.offset : nullptr;
     case FieldGTBookingInst::KEY : return fieldGTBookingInst.offset >= 0 ? buf + fieldGTBookingInst.offset : nullptr;
     case FieldCommission::KEY : return fieldCommission.offset >= 0 ? buf + fieldCommission.offset : nullptr;
     case FieldCommType::KEY : return fieldCommType.offset >= 0 ? buf + fieldCommType.offset : nullptr;
     case FieldCommCurrency::KEY : return fieldCommCurrency.offset >= 0 ? buf + fieldCommCurrency.offset : nullptr;
     case FieldFundRenewWaiv::KEY : return fieldFundRenewWaiv.offset >= 0 ? buf + fieldFundRenewWaiv.offset : nullptr;
     case FieldOrderCapacity::KEY : return fieldOrderCapacity.offset >= 0 ? buf + fieldOrderCapacity.offset : nullptr;
     case FieldOrderRestrictions::KEY : return fieldOrderRestrictions.offset >= 0 ? buf + fieldOrderRestrictions.offset : nullptr;
     case FieldCustOrderCapacity::KEY : return fieldCustOrderCapacity.offset >= 0 ? buf + fieldCustOrderCapacity.offset : nullptr;
     case FieldForexReq::KEY : return fieldForexReq.offset >= 0 ? buf + fieldForexReq.offset : nullptr;
     case FieldSettlCurrency::KEY : return fieldSettlCurrency.offset >= 0 ? buf + fieldSettlCurrency.offset : nullptr;
     case FieldBookingType::KEY : return fieldBookingType.offset >= 0 ? buf + fieldBookingType.offset : nullptr;
     case FieldText::KEY : return fieldText.offset >= 0 ? buf + fieldText.offset : nullptr;
     case FieldEncodedTextLen::KEY : return fieldEncodedTextLen.offset >= 0 ? buf + fieldEncodedTextLen.offset : nullptr;
     case FieldEncodedText::KEY : return fieldEncodedText.offset >= 0 ? buf + fieldEncodedText.offset : nullptr;
     case FieldSettlDate2::KEY : return fieldSettlDate2.offset >= 0 ? buf + fieldSettlDate2.offset : nullptr;
     case FieldOrderQty2::KEY : return fieldOrderQty2.offset >= 0 ? buf + fieldOrderQty2.offset : nullptr;
     case FieldPrice2::KEY : return fieldPrice2.offset >= 0 ? buf + fieldPrice2.offset : nullptr;
     case FieldPositionEffect::KEY : return fieldPositionEffect.offset >= 0 ? buf + fieldPositionEffect.offset : nullptr;
     case FieldCoveredOrUncovered::KEY : return fieldCoveredOrUncovered.offset >= 0 ? buf + fieldCoveredOrUncovered.offset : nullptr;
     case FieldMaxShow::KEY : return fieldMaxShow.offset >= 0 ? buf + fieldMaxShow.offset : nullptr;
     case FieldPegOffsetValue::KEY : return fieldPegOffsetValue.offset >= 0 ? buf + fieldPegOffsetValue.offset : nullptr;
     case FieldPegMoveType::KEY : return fieldPegMoveType.offset >= 0 ? buf + fieldPegMoveType.offset : nullptr;
     case FieldPegOffsetType::KEY : return fieldPegOffsetType.offset >= 0 ? buf + fieldPegOffsetType.offset : nullptr;
     case FieldPegLimitType::KEY : return fieldPegLimitType.offset >= 0 ? buf + fieldPegLimitType.offset : nullptr;
     case FieldPegRoundDirection::KEY : return fieldPegRoundDirection.offset >= 0 ? buf + fieldPegRoundDirection.offset : nullptr;
     case FieldPegScope::KEY : return fieldPegScope.offset >= 0 ? buf + fieldPegScope.offset : nullptr;
     case FieldDiscretionInst::KEY : return fieldDiscretionInst.offset >= 0 ? buf + fieldDiscretionInst.offset : nullptr;
     case FieldDiscretionOffsetValue::KEY : return fieldDiscretionOffsetValue.offset >= 0 ? buf + fieldDiscretionOffsetValue.offset : nullptr;
     case FieldDiscretionMoveType::KEY : return fieldDiscretionMoveType.offset >= 0 ? buf + fieldDiscretionMoveType.offset : nullptr;
     case FieldDiscretionOffsetType::KEY : return fieldDiscretionOffsetType.offset >= 0 ? buf + fieldDiscretionOffsetType.offset : nullptr;
     case FieldDiscretionLimitType::KEY : return fieldDiscretionLimitType.offset >= 0 ? buf + fieldDiscretionLimitType.offset : nullptr;
     case FieldDiscretionRoundDirection::KEY : return fieldDiscretionRoundDirection.offset >= 0 ? buf + fieldDiscretionRoundDirection.offset : nullptr;
     case FieldDiscretionScope::KEY : return fieldDiscretionScope.offset >= 0 ? buf + fieldDiscretionScope.offset : nullptr;
     case FieldTargetStrategy::KEY : return fieldTargetStrategy.offset >= 0 ? buf + fieldTargetStrategy.offset : nullptr;
     case FieldTargetStrategyParameters::KEY : return fieldTargetStrategyParameters.offset >= 0 ? buf + fieldTargetStrategyParameters.offset : nullptr;
     case FieldParticipationRate::KEY : return fieldParticipationRate.offset >= 0 ? buf + fieldParticipationRate.offset : nullptr;
     case FieldDesignation::KEY : return fieldDesignation.offset >= 0 ? buf + fieldDesignation.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupSettlPartySubIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSettlPartySubID::KEY : return fieldSettlPartySubID.offset >= 0 ? buf + fieldSettlPartySubID.offset : nullptr;
     case FieldSettlPartySubIDType::KEY : return fieldSettlPartySubIDType.offset >= 0 ? buf + fieldSettlPartySubIDType.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupSettlPartyIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSettlPartyID::KEY : return fieldSettlPartyID.offset >= 0 ? buf + fieldSettlPartyID.offset : nullptr;
     case FieldSettlPartyIDSource::KEY : return fieldSettlPartyIDSource.offset >= 0 ? buf + fieldSettlPartyIDSource.offset : nullptr;
     case FieldSettlPartyRole::KEY : return fieldSettlPartyRole.offset >= 0 ? buf + fieldSettlPartyRole.offset : nullptr;
     case FieldNoSettlPartySubIDs::KEY : return fieldNoSettlPartySubIDs.offset >= 0 ? buf + fieldNoSettlPartySubIDs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupDlvyInst::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSettlInstSource::KEY : return fieldSettlInstSource.offset >= 0 ? buf + fieldSettlInstSource.offset : nullptr;
     case FieldDlvyInstType::KEY : return fieldDlvyInstType.offset >= 0 ? buf + fieldDlvyInstType.offset : nullptr;
     case FieldNoSettlPartyIDs::KEY : return fieldNoSettlPartyIDs.offset >= 0 ? buf + fieldNoSettlPartyIDs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupClearingInstructions::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldClearingInstruction::KEY : return fieldClearingInstruction.offset >= 0 ? buf + fieldClearingInstruction.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupNestedPartySubIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldNestedPartySubID::KEY : return fieldNestedPartySubID.offset >= 0 ? buf + fieldNestedPartySubID.offset : nullptr;
     case FieldNestedPartySubIDType::KEY : return fieldNestedPartySubIDType.offset >= 0 ? buf + fieldNestedPartySubIDType.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupNestedPartyIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldNestedPartyID::KEY : return fieldNestedPartyID.offset >= 0 ? buf + fieldNestedPartyID.offset : nullptr;
     case FieldNestedPartyIDSource::KEY : return fieldNestedPartyIDSource.offset >= 0 ? buf + fieldNestedPartyIDSource.offset : nullptr;
     case FieldNestedPartyRole::KEY : return fieldNestedPartyRole.offset >= 0 ? buf + fieldNestedPartyRole.offset : nullptr;
     case FieldNoNestedPartySubIDs::KEY : return fieldNoNestedPartySubIDs.offset >= 0 ? buf + fieldNoNestedPartySubIDs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupLegs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldLegSymbol::KEY : return fieldLegSymbol.offset >= 0 ? buf + fieldLegSymbol.offset : nullptr;
     case FieldLegSymbolSfx::KEY : return fieldLegSymbolSfx.offset >= 0 ? buf + fieldLegSymbolSfx.offset : nullptr;
     case FieldLegSecurityID::KEY : return fieldLegSecurityID.offset >= 0 ? buf + fieldLegSecurityID.offset : nullptr;
     case FieldLegSecurityIDSource::KEY : return fieldLegSecurityIDSource.offset >= 0 ? buf + fieldLegSecurityIDSource.offset : nullptr;
     case FieldNoLegSecurityAltID::KEY : return fieldNoLegSecurityAltID.offset >= 0 ? buf + fieldNoLegSecurityAltID.offset : nullptr;
     case FieldLegProduct::KEY : return fieldLegProduct.offset >= 0 ? buf + fieldLegProduct.offset : nullptr;
     case FieldLegCFICode::KEY : return fieldLegCFICode.offset >= 0 ? buf + fieldLegCFICode.offset : nullptr;
     case FieldLegSecurityType::KEY : return fieldLegSecurityType.offset >= 0 ? buf + fieldLegSecurityType.offset : nullptr;
     case FieldLegSecuritySubType::KEY : return fieldLegSecuritySubType.offset >= 0 ? buf + fieldLegSecuritySubType.offset : nullptr;
     case FieldLegMaturityMonthYear::KEY : return fieldLegMaturityMonthYear.offset >= 0 ? buf + fieldLegMaturityMonthYear.offset : nullptr;
     case FieldLegMaturityDate::KEY : return fieldLegMaturityDate.offset >= 0 ? buf + fieldLegMaturityDate.offset : nullptr;
     case FieldLegCouponPaymentDate::KEY : return fieldLegCouponPaymentDate.offset >= 0 ? buf + fieldLegCouponPaymentDate.offset : nullptr;
     case FieldLegIssueDate::KEY : return fieldLegIssueDate.offset >= 0 ? buf + fieldLegIssueDate.offset : nullptr;
     case FieldLegRepoCollateralSecurityType::KEY : return fieldLegRepoCollateralSecurityType.offset >= 0 ? buf + fieldLegRepoCollateralSecurityType.offset : nullptr;
     case FieldLegRepurchaseTerm::KEY : return fieldLegRepurchaseTerm.offset >= 0 ? buf + fieldLegRepurchaseTerm.offset : nullptr;
     case FieldLegRepurchaseRate::KEY : return fieldLegRepurchaseRate.offset >= 0 ? buf + fieldLegRepurchaseRate.offset : nullptr;
     case FieldLegFactor::KEY : return fieldLegFactor.offset >= 0 ? buf + fieldLegFactor.offset : nullptr;
     case FieldLegCreditRating::KEY : return fieldLegCreditRating.offset >= 0 ? buf + fieldLegCreditRating.offset : nullptr;
     case FieldLegInstrRegistry::KEY : return fieldLegInstrRegistry.offset >= 0 ? buf + fieldLegInstrRegistry.offset : nullptr;
     case FieldLegCountryOfIssue::KEY : return fieldLegCountryOfIssue.offset >= 0 ? buf + fieldLegCountryOfIssue.offset : nullptr;
     case FieldLegStateOrProvinceOfIssue::KEY : return fieldLegStateOrProvinceOfIssue.offset >= 0 ? buf + fieldLegStateOrProvinceOfIssue.offset : nullptr;
     case FieldLegLocaleOfIssue::KEY : return fieldLegLocaleOfIssue.offset >= 0 ? buf + fieldLegLocaleOfIssue.offset : nullptr;
     case FieldLegRedemptionDate::KEY : return fieldLegRedemptionDate.offset >= 0 ? buf + fieldLegRedemptionDate.offset : nullptr;
     case FieldLegStrikePrice::KEY : return fieldLegStrikePrice.offset >= 0 ? buf + fieldLegStrikePrice.offset : nullptr;
     case FieldLegStrikeCurrency::KEY : return fieldLegStrikeCurrency.offset >= 0 ? buf + fieldLegStrikeCurrency.offset : nullptr;
     case FieldLegOptAttribute::KEY : return fieldLegOptAttribute.offset >= 0 ? buf + fieldLegOptAttribute.offset : nullptr;
     case FieldLegContractMultiplier::KEY : return fieldLegContractMultiplier.offset >= 0 ? buf + fieldLegContractMultiplier.offset : nullptr;
     case FieldLegCouponRate::KEY : return fieldLegCouponRate.offset >= 0 ? buf + fieldLegCouponRate.offset : nullptr;
     case FieldLegSecurityExchange::KEY : return fieldLegSecurityExchange.offset >= 0 ? buf + fieldLegSecurityExchange.offset : nullptr;
     case FieldLegIssuer::KEY : return fieldLegIssuer.offset >= 0 ? buf + fieldLegIssuer.offset : nullptr;
     case FieldEncodedLegIssuerLen::KEY : return fieldEncodedLegIssuerLen.offset >= 0 ? buf + fieldEncodedLegIssuerLen.offset : nullptr;
     case FieldEncodedLegIssuer::KEY : return fieldEncodedLegIssuer.offset >= 0 ? buf + fieldEncodedLegIssuer.offset : nullptr;
     case FieldLegSecurityDesc::KEY : return fieldLegSecurityDesc.offset >= 0 ? buf + fieldLegSecurityDesc.offset : nullptr;
     case FieldEncodedLegSecurityDescLen::KEY : return fieldEncodedLegSecurityDescLen.offset >= 0 ? buf + fieldEncodedLegSecurityDescLen.offset : nullptr;
     case FieldEncodedLegSecurityDesc::KEY : return fieldEncodedLegSecurityDesc.offset >= 0 ? buf + fieldEncodedLegSecurityDesc.offset : nullptr;
     case FieldLegRatioQty::KEY : return fieldLegRatioQty.offset >= 0 ? buf + fieldLegRatioQty.offset : nullptr;
     case FieldLegSide::KEY : return fieldLegSide.offset >= 0 ? buf + fieldLegSide.offset : nullptr;
     case FieldLegCurrency::KEY : return fieldLegCurrency.offset >= 0 ? buf + fieldLegCurrency.offset : nullptr;
     case FieldLegPool::KEY : return fieldLegPool.offset >= 0 ? buf + fieldLegPool.offset : nullptr;
     case FieldLegDatedDate::KEY : return fieldLegDatedDate.offset >= 0 ? buf + fieldLegDatedDate.offset : nullptr;
     case FieldLegContractSettlMonth::KEY : return fieldLegContractSettlMonth.offset >= 0 ? buf + fieldLegContractSettlMonth.offset : nullptr;
     case FieldLegInterestAccrualDate::KEY : return fieldLegInterestAccrualDate.offset >= 0 ? buf + fieldLegInterestAccrualDate.offset : nullptr;
     case FieldLegQty::KEY : return fieldLegQty.offset >= 0 ? buf + fieldLegQty.offset : nullptr;
     case FieldLegSwapType::KEY : return fieldLegSwapType.offset >= 0 ? buf + fieldLegSwapType.offset : nullptr;
     case FieldNoLegStipulations::KEY : return fieldNoLegStipulations.offset >= 0 ? buf + fieldNoLegStipulations.offset : nullptr;
     case FieldLegPositionEffect::KEY : return fieldLegPositionEffect.offset >= 0 ? buf + fieldLegPositionEffect.offset : nullptr;
     case FieldLegCoveredOrUncovered::KEY : return fieldLegCoveredOrUncovered.offset >= 0 ? buf + fieldLegCoveredOrUncovered.offset : nullptr;
     case FieldNoNestedPartyIDs::KEY : return fieldNoNestedPartyIDs.offset >= 0 ? buf + fieldNoNestedPartyIDs.offset : nullptr;
     case FieldLegRefID::KEY : return fieldLegRefID.offset >= 0 ? buf + fieldLegRefID.offset : nullptr;
     case FieldLegPrice::KEY : return fieldLegPrice.offset >= 0 ? buf + fieldLegPrice.offset : nullptr;
     case FieldLegSettlType::KEY : return fieldLegSettlType.offset >= 0 ? buf + fieldLegSettlType.offset : nullptr;
     case FieldLegSettlDate::KEY : return fieldLegSettlDate.offset >= 0 ? buf + fieldLegSettlDate.offset : nullptr;
     case FieldLegLastPx::KEY : return fieldLegLastPx.offset >= 0 ? buf + fieldLegLastPx.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupQuoteEntries::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSymbol::KEY : return fieldSymbol.offset >= 0 ? buf + fieldSymbol.offset : nullptr;
     case FieldSymbolSfx::KEY : return fieldSymbolSfx.offset >= 0 ? buf + fieldSymbolSfx.offset : nullptr;
     case FieldSecurityID::KEY : return fieldSecurityID.offset >= 0 ? buf + fieldSecurityID.offset : nullptr;
     case FieldSecurityIDSource::KEY : return fieldSecurityIDSource.offset >= 0 ? buf + fieldSecurityIDSource.offset : nullptr;
     case FieldNoSecurityAltID::KEY : return fieldNoSecurityAltID.offset >= 0 ? buf + fieldNoSecurityAltID.offset : nullptr;
     case FieldProduct::KEY : return fieldProduct.offset >= 0 ? buf + fieldProduct.offset : nullptr;
     case FieldCFICode::KEY : return fieldCFICode.offset >= 0 ? buf + fieldCFICode.offset : nullptr;
     case FieldSecurityType::KEY : return fieldSecurityType.offset >= 0 ? buf + fieldSecurityType.offset : nullptr;
     case FieldSecuritySubType::KEY : return fieldSecuritySubType.offset >= 0 ? buf + fieldSecuritySubType.offset : nullptr;
     case FieldMaturityMonthYear::KEY : return fieldMaturityMonthYear.offset >= 0 ? buf + fieldMaturityMonthYear.offset : nullptr;
     case FieldMaturityDate::KEY : return fieldMaturityDate.offset >= 0 ? buf + fieldMaturityDate.offset : nullptr;
     case FieldPutOrCall::KEY : return fieldPutOrCall.offset >= 0 ? buf + fieldPutOrCall.offset : nullptr;
     case FieldCouponPaymentDate::KEY : return fieldCouponPaymentDate.offset >= 0 ? buf + fieldCouponPaymentDate.offset : nullptr;
     case FieldIssueDate::KEY : return fieldIssueDate.offset >= 0 ? buf + fieldIssueDate.offset : nullptr;
     case FieldRepoCollateralSecurityType::KEY : return fieldRepoCollateralSecurityType.offset >= 0 ? buf + fieldRepoCollateralSecurityType.offset : nullptr;
     case FieldRepurchaseTerm::KEY : return fieldRepurchaseTerm.offset >= 0 ? buf + fieldRepurchaseTerm.offset : nullptr;
     case FieldRepurchaseRate::KEY : return fieldRepurchaseRate.offset >= 0 ? buf + fieldRepurchaseRate.offset : nullptr;
     case FieldFactor::KEY : return fieldFactor.offset >= 0 ? buf + fieldFactor.offset : nullptr;
     case FieldCreditRating::KEY : return fieldCreditRating.offset >= 0 ? buf + fieldCreditRating.offset : nullptr;
     case FieldInstrRegistry::KEY : return fieldInstrRegistry.offset >= 0 ? buf + fieldInstrRegistry.offset : nullptr;
     case FieldCountryOfIssue::KEY : return fieldCountryOfIssue.offset >= 0 ? buf + fieldCountryOfIssue.offset : nullptr;
     case FieldStateOrProvinceOfIssue::KEY : return fieldStateOrProvinceOfIssue.offset >= 0 ? buf + fieldStateOrProvinceOfIssue.offset : nullptr;
     case FieldLocaleOfIssue::KEY : return fieldLocaleOfIssue.offset >= 0 ? buf + fieldLocaleOfIssue.offset : nullptr;
     case FieldRedemptionDate::KEY : return fieldRedemptionDate.offset >= 0 ? buf + fieldRedemptionDate.offset : nullptr;
     case FieldStrikePrice::KEY : return fieldStrikePrice.offset >= 0 ? buf + fieldStrikePrice.offset : nullptr;
     case FieldStrikeCurrency::KEY : return fieldStrikeCurrency.offset >= 0 ? buf + fieldStrikeCurrency.offset : nullptr;
     case FieldOptAttribute::KEY : return fieldOptAttribute.offset >= 0 ? buf + fieldOptAttribute.offset : nullptr;
     case FieldContractMultiplier::KEY : return fieldContractMultiplier.offset >= 0 ? buf + fieldContractMultiplier.offset : nullptr;
     case FieldCouponRate::KEY : return fieldCouponRate.offset >= 0 ? buf + fieldCouponRate.offset : nullptr;
     case FieldSecurityExchange::KEY : return fieldSecurityExchange.offset >= 0 ? buf + fieldSecurityExchange.offset : nullptr;
     case FieldIssuer::KEY : return fieldIssuer.offset >= 0 ? buf + fieldIssuer.offset : nullptr;
     case FieldEncodedIssuerLen::KEY : return fieldEncodedIssuerLen.offset >= 0 ? buf + fieldEncodedIssuerLen.offset : nullptr;
     case FieldEncodedIssuer::KEY : return fieldEncodedIssuer.offset >= 0 ? buf + fieldEncodedIssuer.offset : nullptr;
     case FieldSecurityDesc::KEY : return fieldSecurityDesc.offset >= 0 ? buf + fieldSecurityDesc.offset : nullptr;
     case FieldEncodedSecurityDescLen::KEY : return fieldEncodedSecurityDescLen.offset >= 0 ? buf + fieldEncodedSecurityDescLen.offset : nullptr;
     case FieldEncodedSecurityDesc::KEY : return fieldEncodedSecurityDesc.offset >= 0 ? buf + fieldEncodedSecurityDesc.offset : nullptr;
     case FieldPool::KEY : return fieldPool.offset >= 0 ? buf + fieldPool.offset : nullptr;
     case FieldContractSettlMonth::KEY : return fieldContractSettlMonth.offset >= 0 ? buf + fieldContractSettlMonth.offset : nullptr;
     case FieldCPProgram::KEY : return fieldCPProgram.offset >= 0 ? buf + fieldCPProgram.offset : nullptr;
     case FieldCPRegType::KEY : return fieldCPRegType.offset >= 0 ? buf + fieldCPRegType.offset : nullptr;
     case FieldNoEvents::KEY : return fieldNoEvents.offset >= 0 ? buf + fieldNoEvents.offset : nullptr;
     case FieldDatedDate::KEY : return fieldDatedDate.offset >= 0 ? buf + fieldDatedDate.offset : nullptr;
     case FieldInterestAccrualDate::KEY : return fieldInterestAccrualDate.offset >= 0 ? buf + fieldInterestAccrualDate.offset : nullptr;
     case FieldAgreementDesc::KEY : return fieldAgreementDesc.offset >= 0 ? buf + fieldAgreementDesc.offset : nullptr;
     case FieldAgreementID::KEY : return fieldAgreementID.offset >= 0 ? buf + fieldAgreementID.offset : nullptr;
     case FieldAgreementDate::KEY : return fieldAgreementDate.offset >= 0 ? buf + fieldAgreementDate.offset : nullptr;
     case FieldAgreementCurrency::KEY : return fieldAgreementCurrency.offset >= 0 ? buf + fieldAgreementCurrency.offset : nullptr;
     case FieldTerminationType::KEY : return fieldTerminationType.offset >= 0 ? buf + fieldTerminationType.offset : nullptr;
     case FieldStartDate::KEY : return fieldStartDate.offset >= 0 ? buf + fieldStartDate.offset : nullptr;
     case FieldEndDate::KEY : return fieldEndDate.offset >= 0 ? buf + fieldEndDate.offset : nullptr;
     case FieldDeliveryType::KEY : return fieldDeliveryType.offset >= 0 ? buf + fieldDeliveryType.offset : nullptr;
     case FieldMarginRatio::KEY : return fieldMarginRatio.offset >= 0 ? buf + fieldMarginRatio.offset : nullptr;
     case FieldNoUnderlyings::KEY : return fieldNoUnderlyings.offset >= 0 ? buf + fieldNoUnderlyings.offset : nullptr;
     case FieldNoLegs::KEY : return fieldNoLegs.offset >= 0 ? buf + fieldNoLegs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupQuoteSets::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldQuoteSetID::KEY : return fieldQuoteSetID.offset >= 0 ? buf + fieldQuoteSetID.offset : nullptr;
     case FieldUnderlyingSymbol::KEY : return fieldUnderlyingSymbol.offset >= 0 ? buf + fieldUnderlyingSymbol.offset : nullptr;
     case FieldUnderlyingSymbolSfx::KEY : return fieldUnderlyingSymbolSfx.offset >= 0 ? buf + fieldUnderlyingSymbolSfx.offset : nullptr;
     case FieldUnderlyingSecurityID::KEY : return fieldUnderlyingSecurityID.offset >= 0 ? buf + fieldUnderlyingSecurityID.offset : nullptr;
     case FieldUnderlyingSecurityIDSource::KEY : return fieldUnderlyingSecurityIDSource.offset >= 0 ? buf + fieldUnderlyingSecurityIDSource.offset : nullptr;
     case FieldNoUnderlyingSecurityAltID::KEY : return fieldNoUnderlyingSecurityAltID.offset >= 0 ? buf + fieldNoUnderlyingSecurityAltID.offset : nullptr;
     case FieldUnderlyingProduct::KEY : return fieldUnderlyingProduct.offset >= 0 ? buf + fieldUnderlyingProduct.offset : nullptr;
     case FieldUnderlyingCFICode::KEY : return fieldUnderlyingCFICode.offset >= 0 ? buf + fieldUnderlyingCFICode.offset : nullptr;
     case FieldUnderlyingSecurityType::KEY : return fieldUnderlyingSecurityType.offset >= 0 ? buf + fieldUnderlyingSecurityType.offset : nullptr;
     case FieldUnderlyingSecuritySubType::KEY : return fieldUnderlyingSecuritySubType.offset >= 0 ? buf + fieldUnderlyingSecuritySubType.offset : nullptr;
     case FieldUnderlyingMaturityMonthYear::KEY : return fieldUnderlyingMaturityMonthYear.offset >= 0 ? buf + fieldUnderlyingMaturityMonthYear.offset : nullptr;
     case FieldUnderlyingMaturityDate::KEY : return fieldUnderlyingMaturityDate.offset >= 0 ? buf + fieldUnderlyingMaturityDate.offset : nullptr;
     case FieldUnderlyingPutOrCall::KEY : return fieldUnderlyingPutOrCall.offset >= 0 ? buf + fieldUnderlyingPutOrCall.offset : nullptr;
     case FieldUnderlyingCouponPaymentDate::KEY : return fieldUnderlyingCouponPaymentDate.offset >= 0 ? buf + fieldUnderlyingCouponPaymentDate.offset : nullptr;
     case FieldUnderlyingIssueDate::KEY : return fieldUnderlyingIssueDate.offset >= 0 ? buf + fieldUnderlyingIssueDate.offset : nullptr;
     case FieldUnderlyingRepoCollateralSecurityType::KEY : return fieldUnderlyingRepoCollateralSecurityType.offset >= 0 ? buf + fieldUnderlyingRepoCollateralSecurityType.offset : nullptr;
     case FieldUnderlyingRepurchaseTerm::KEY : return fieldUnderlyingRepurchaseTerm.offset >= 0 ? buf + fieldUnderlyingRepurchaseTerm.offset : nullptr;
     case FieldUnderlyingRepurchaseRate::KEY : return fieldUnderlyingRepurchaseRate.offset >= 0 ? buf + fieldUnderlyingRepurchaseRate.offset : nullptr;
     case FieldUnderlyingFactor::KEY : return fieldUnderlyingFactor.offset >= 0 ? buf + fieldUnderlyingFactor.offset : nullptr;
     case FieldUnderlyingCreditRating::KEY : return fieldUnderlyingCreditRating.offset >= 0 ? buf + fieldUnderlyingCreditRating.offset : nullptr;
     case FieldUnderlyingInstrRegistry::KEY : return fieldUnderlyingInstrRegistry.offset >= 0 ? buf + fieldUnderlyingInstrRegistry.offset : nullptr;
     case FieldUnderlyingCountryOfIssue::KEY : return fieldUnderlyingCountryOfIssue.offset >= 0 ? buf + fieldUnderlyingCountryOfIssue.offset : nullptr;
     case FieldUnderlyingStateOrProvinceOfIssue::KEY : return fieldUnderlyingStateOrProvinceOfIssue.offset >= 0 ? buf + fieldUnderlyingStateOrProvinceOfIssue.offset : nullptr;
     case FieldUnderlyingLocaleOfIssue::KEY : return fieldUnderlyingLocaleOfIssue.offset >= 0 ? buf + fieldUnderlyingLocaleOfIssue.offset : nullptr;
     case FieldUnderlyingRedemptionDate::KEY : return fieldUnderlyingRedemptionDate.offset >= 0 ? buf + fieldUnderlyingRedemptionDate.offset : nullptr;
     case FieldUnderlyingStrikePrice::KEY : return fieldUnderlyingStrikePrice.offset >= 0 ? buf + fieldUnderlyingStrikePrice.offset : nullptr;
     case FieldUnderlyingStrikeCurrency::KEY : return fieldUnderlyingStrikeCurrency.offset >= 0 ? buf + fieldUnderlyingStrikeCurrency.offset : nullptr;
     case FieldUnderlyingOptAttribute::KEY : return fieldUnderlyingOptAttribute.offset >= 0 ? buf + fieldUnderlyingOptAttribute.offset : nullptr;
     case FieldUnderlyingContractMultiplier::KEY : return fieldUnderlyingContractMultiplier.offset >= 0 ? buf + fieldUnderlyingContractMultiplier.offset : nullptr;
     case FieldUnderlyingCouponRate::KEY : return fieldUnderlyingCouponRate.offset >= 0 ? buf + fieldUnderlyingCouponRate.offset : nullptr;
     case FieldUnderlyingSecurityExchange::KEY : return fieldUnderlyingSecurityExchange.offset >= 0 ? buf + fieldUnderlyingSecurityExchange.offset : nullptr;
     case FieldUnderlyingIssuer::KEY : return fieldUnderlyingIssuer.offset >= 0 ? buf + fieldUnderlyingIssuer.offset : nullptr;
     case FieldEncodedUnderlyingIssuerLen::KEY : return fieldEncodedUnderlyingIssuerLen.offset >= 0 ? buf + fieldEncodedUnderlyingIssuerLen.offset : nullptr;
     case FieldEncodedUnderlyingIssuer::KEY : return fieldEncodedUnderlyingIssuer.offset >= 0 ? buf + fieldEncodedUnderlyingIssuer.offset : nullptr;
     case FieldUnderlyingSecurityDesc::KEY : return fieldUnderlyingSecurityDesc.offset >= 0 ? buf + fieldUnderlyingSecurityDesc.offset : nullptr;
     case FieldEncodedUnderlyingSecurityDescLen::KEY : return fieldEncodedUnderlyingSecurityDescLen.offset >= 0 ? buf + fieldEncodedUnderlyingSecurityDescLen.offset : nullptr;
     case FieldEncodedUnderlyingSecurityDesc::KEY : return fieldEncodedUnderlyingSecurityDesc.offset >= 0 ? buf + fieldEncodedUnderlyingSecurityDesc.offset : nullptr;
     case FieldUnderlyingCPProgram::KEY : return fieldUnderlyingCPProgram.offset >= 0 ? buf + fieldUnderlyingCPProgram.offset : nullptr;
     case FieldUnderlyingCPRegType::KEY : return fieldUnderlyingCPRegType.offset >= 0 ? buf + fieldUnderlyingCPRegType.offset : nullptr;
     case FieldUnderlyingCurrency::KEY : return fieldUnderlyingCurrency.offset >= 0 ? buf + fieldUnderlyingCurrency.offset : nullptr;
     case FieldUnderlyingQty::KEY : return fieldUnderlyingQty.offset >= 0 ? buf + fieldUnderlyingQty.offset : nullptr;
     case FieldUnderlyingPx::KEY : return fieldUnderlyingPx.offset >= 0 ? buf + fieldUnderlyingPx.offset : nullptr;
     case FieldUnderlyingDirtyPrice::KEY : return fieldUnderlyingDirtyPrice.offset >= 0 ? buf + fieldUnderlyingDirtyPrice.offset : nullptr;
     case FieldUnderlyingEndPrice::KEY : return fieldUnderlyingEndPrice.offset >= 0 ? buf + fieldUnderlyingEndPrice.offset : nullptr;
     case FieldUnderlyingStartValue::KEY : return fieldUnderlyingStartValue.offset >= 0 ? buf + fieldUnderlyingStartValue.offset : nullptr;
     case FieldUnderlyingCurrentValue::KEY : return fieldUnderlyingCurrentValue.offset >= 0 ? buf + fieldUnderlyingCurrentValue.offset : nullptr;
     case FieldUnderlyingEndValue::KEY : return fieldUnderlyingEndValue.offset >= 0 ? buf + fieldUnderlyingEndValue.offset : nullptr;
     case FieldNoUnderlyingStips::KEY : return fieldNoUnderlyingStips.offset >= 0 ? buf + fieldNoUnderlyingStips.offset : nullptr;
     case FieldTotNoQuoteEntries::KEY : return fieldTotNoQuoteEntries.offset >= 0 ? buf + fieldTotNoQuoteEntries.offset : nullptr;
     case FieldLastFragment::KEY : return fieldLastFragment.offset >= 0 ? buf + fieldLastFragment.offset : nullptr;
     case FieldNoQuoteEntries::KEY : return fieldNoQuoteEntries.offset >= 0 ? buf + fieldNoQuoteEntries.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupSecurityTypes::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSecurityType::KEY : return fieldSecurityType.offset >= 0 ? buf + fieldSecurityType.offset : nullptr;
     case FieldSecuritySubType::KEY : return fieldSecuritySubType.offset >= 0 ? buf + fieldSecuritySubType.offset : nullptr;
     case FieldProduct::KEY : return fieldProduct.offset >= 0 ? buf + fieldProduct.offset : nullptr;
     case FieldCFICode::KEY : return fieldCFICode.offset >= 0 ? buf + fieldCFICode.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupNested3PartyIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldNested3PartyID::KEY : return fieldNested3PartyID.offset >= 0 ? buf + fieldNested3PartyID.offset : nullptr;
     case FieldNested3PartyIDSource::KEY : return fieldNested3PartyIDSource.offset >= 0 ? buf + fieldNested3PartyIDSource.offset : nullptr;
     case FieldNested3PartyRole::KEY : return fieldNested3PartyRole.offset >= 0 ? buf + fieldNested3PartyRole.offset : nullptr;
     case FieldNoNested3PartySubIDs::KEY : return fieldNoNested3PartySubIDs.offset >= 0 ? buf + fieldNoNested3PartySubIDs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupPositions::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldPosType::KEY : return fieldPosType.offset >= 0 ? buf + fieldPosType.offset : nullptr;
     case FieldLongQty::KEY : return fieldLongQty.offset >= 0 ? buf + fieldLongQty.offset : nullptr;
     case FieldShortQty::KEY : return fieldShortQty.offset >= 0 ? buf + fieldShortQty.offset : nullptr;
     case FieldPosQtyStatus::KEY : return fieldPosQtyStatus.offset >= 0 ? buf + fieldPosQtyStatus.offset : nullptr;
     case FieldNoNestedPartyIDs::KEY : return fieldNoNestedPartyIDs.offset >= 0 ? buf + fieldNoNestedPartyIDs.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupAffectedOrders::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldOrigClOrdID::KEY : return fieldOrigClOrdID.offset >= 0 ? buf + fieldOrigClOrdID.offset : nullptr;
     case FieldAffectedOrderID::KEY : return fieldAffectedOrderID.offset >= 0 ? buf + fieldAffectedOrderID.offset : nullptr;
     case FieldAffectedSecondaryOrderID::KEY : return fieldAffectedSecondaryOrderID.offset >= 0 ? buf + fieldAffectedSecondaryOrderID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupExecs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldLastQty::KEY : return fieldLastQty.offset >= 0 ? buf + fieldLastQty.offset : nullptr;
     case FieldExecID::KEY : return fieldExecID.offset >= 0 ? buf + fieldExecID.offset : nullptr;
     case FieldSecondaryExecID::KEY : return fieldSecondaryExecID.offset >= 0 ? buf + fieldSecondaryExecID.offset : nullptr;
     case FieldLastPx::KEY : return fieldLastPx.offset >= 0 ? buf + fieldLastPx.offset : nullptr;
     case FieldLastParPx::KEY : return fieldLastParPx.offset >= 0 ? buf + fieldLastParPx.offset : nullptr;
     case FieldLastCapacity::KEY : return fieldLastCapacity.offset >= 0 ? buf + fieldLastCapacity.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupMsgTypes::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldRefMsgType::KEY : return fieldRefMsgType.offset >= 0 ? buf + fieldRefMsgType.offset : nullptr;
     case FieldMsgDirection::KEY : return fieldMsgDirection.offset >= 0 ? buf + fieldMsgDirection.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupBidComponents::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldListID::KEY : return fieldListID.offset >= 0 ? buf + fieldListID.offset : nullptr;
     case FieldSide::KEY : return fieldSide.offset >= 0 ? buf + fieldSide.offset : nullptr;
     case FieldTradingSessionID::KEY : return fieldTradingSessionID.offset >= 0 ? buf + fieldTradingSessionID.offset : nullptr;
     case FieldTradingSessionSubID::KEY : return fieldTradingSessionSubID.offset >= 0 ? buf + fieldTradingSessionSubID.offset : nullptr;
     case FieldNetGrossInd::KEY : return fieldNetGrossInd.offset >= 0 ? buf + fieldNetGrossInd.offset : nullptr;
     case FieldSettlType::KEY : return fieldSettlType.offset >= 0 ? buf + fieldSettlType.offset : nullptr;
     case FieldSettlDate::KEY : return fieldSettlDate.offset >= 0 ? buf + fieldSettlDate.offset : nullptr;
     case FieldAccount::KEY : return fieldAccount.offset >= 0 ? buf + fieldAccount.offset : nullptr;
     case FieldAcctIDSource::KEY : return fieldAcctIDSource.offset >= 0 ? buf + fieldAcctIDSource.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupSettlInst::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSettlInstID::KEY : return fieldSettlInstID.offset >= 0 ? buf + fieldSettlInstID.offset : nullptr;
     case FieldSettlInstTransType::KEY : return fieldSettlInstTransType.offset >= 0 ? buf + fieldSettlInstTransType.offset : nullptr;
     case FieldSettlInstRefID::KEY : return fieldSettlInstRefID.offset >= 0 ? buf + fieldSettlInstRefID.offset : nullptr;
     case FieldNoPartyIDs::KEY : return fieldNoPartyIDs.offset >= 0 ? buf + fieldNoPartyIDs.offset : nullptr;
     case FieldSide::KEY : return fieldSide.offset >= 0 ? buf + fieldSide.offset : nullptr;
     case FieldProduct::KEY : return fieldProduct.offset >= 0 ? buf + fieldProduct.offset : nullptr;
     case FieldSecurityType::KEY : return fieldSecurityType.offset >= 0 ? buf + fieldSecurityType.offset : nullptr;
     case FieldCFICode::KEY : return fieldCFICode.offset >= 0 ? buf + fieldCFICode.offset : nullptr;
     case FieldEffectiveTime::KEY : return fieldEffectiveTime.offset >= 0 ? buf + fieldEffectiveTime.offset : nullptr;
     case FieldExpireTime::KEY : return fieldExpireTime.offset >= 0 ? buf + fieldExpireTime.offset : nullptr;
     case FieldLastUpdateTime::KEY : return fieldLastUpdateTime.offset >= 0 ? buf + fieldLastUpdateTime.offset : nullptr;
     case FieldSettlDeliveryType::KEY : return fieldSettlDeliveryType.offset >= 0 ? buf + fieldSettlDeliveryType.offset : nullptr;
     case FieldStandInstDbType::KEY : return fieldStandInstDbType.offset >= 0 ? buf + fieldStandInstDbType.offset : nullptr;
     case FieldStandInstDbName::KEY : return fieldStandInstDbName.offset >= 0 ? buf + fieldStandInstDbName.offset : nullptr;
     case FieldStandInstDbID::KEY : return fieldStandInstDbID.offset >= 0 ? buf + fieldStandInstDbID.offset : nullptr;
     case FieldNoDlvyInst::KEY : return fieldNoDlvyInst.offset >= 0 ? buf + fieldNoDlvyInst.offset : nullptr;
     case FieldPaymentMethod::KEY : return fieldPaymentMethod.offset >= 0 ? buf + fieldPaymentMethod.offset : nullptr;
     case FieldPaymentRef::KEY : return fieldPaymentRef.offset >= 0 ? buf + fieldPaymentRef.offset : nullptr;
     case FieldCardHolderName::KEY : return fieldCardHolderName.offset >= 0 ? buf + fieldCardHolderName.offset : nullptr;
     case FieldCardNumber::KEY : return fieldCardNumber.offset >= 0 ? buf + fieldCardNumber.offset : nullptr;
     case FieldCardStartDate::KEY : return fieldCardStartDate.offset >= 0 ? buf + fieldCardStartDate.offset : nullptr;
     case FieldCardExpDate::KEY : return fieldCardExpDate.offset >= 0 ? buf + fieldCardExpDate.offset : nullptr;
     case FieldCardIssNum::KEY : return fieldCardIssNum.offset >= 0 ? buf + fieldCardIssNum.offset : nullptr;
     case FieldPaymentDate::KEY : return fieldPaymentDate.offset >= 0 ? buf + fieldPaymentDate.offset : nullptr;
     case FieldPaymentRemitterID::KEY : return fieldPaymentRemitterID.offset >= 0 ? buf + fieldPaymentRemitterID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupInstrAttrib::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldInstrAttribType::KEY : return fieldInstrAttribType.offset >= 0 ? buf + fieldInstrAttribType.offset : nullptr;
     case FieldInstrAttribValue::KEY : return fieldInstrAttribValue.offset >= 0 ? buf + fieldInstrAttribValue.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupMiscFees::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldMiscFeeAmt::KEY : return fieldMiscFeeAmt.offset >= 0 ? buf + fieldMiscFeeAmt.offset : nullptr;
     case FieldMiscFeeCurr::KEY : return fieldMiscFeeCurr.offset >= 0 ? buf + fieldMiscFeeCurr.offset : nullptr;
     case FieldMiscFeeType::KEY : return fieldMiscFeeType.offset >= 0 ? buf + fieldMiscFeeType.offset : nullptr;
     case FieldMiscFeeBasis::KEY : return fieldMiscFeeBasis.offset >= 0 ? buf + fieldMiscFeeBasis.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupQuoteQualifiers::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldQuoteQualifier::KEY : return fieldQuoteQualifier.offset >= 0 ? buf + fieldQuoteQualifier.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupDistribInsts::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldDistribPaymentMethod::KEY : return fieldDistribPaymentMethod.offset >= 0 ? buf + fieldDistribPaymentMethod.offset : nullptr;
     case FieldDistribPercentage::KEY : return fieldDistribPercentage.offset >= 0 ? buf + fieldDistribPercentage.offset : nullptr;
     case FieldCashDistribCurr::KEY : return fieldCashDistribCurr.offset >= 0 ? buf + fieldCashDistribCurr.offset : nullptr;
     case FieldCashDistribAgentName::KEY : return fieldCashDistribAgentName.offset >= 0 ? buf + fieldCashDistribAgentName.offset : nullptr;
     case FieldCashDistribAgentCode::KEY : return fieldCashDistribAgentCode.offset >= 0 ? buf + fieldCashDistribAgentCode.offset : nullptr;
     case FieldCashDistribAgentAcctNumber::KEY : return fieldCashDistribAgentAcctNumber.offset >= 0 ? buf + fieldCashDistribAgentAcctNumber.offset : nullptr;
     case FieldCashDistribPayRef::KEY : return fieldCashDistribPayRef.offset >= 0 ? buf + fieldCashDistribPayRef.offset : nullptr;
     case FieldCashDistribAgentAcctName::KEY : return fieldCashDistribAgentAcctName.offset >= 0 ? buf + fieldCashDistribAgentAcctName.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupTrdRegTimestamps::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldTrdRegTimestamp::KEY : return fieldTrdRegTimestamp.offset >= 0 ? buf + fieldTrdRegTimestamp.offset : nullptr;
     case FieldTrdRegTimestampType::KEY : return fieldTrdRegTimestampType.offset >= 0 ? buf + fieldTrdRegTimestampType.offset : nullptr;
     case FieldTrdRegTimestampOrigin::KEY : return fieldTrdRegTimestampOrigin.offset >= 0 ? buf + fieldTrdRegTimestampOrigin.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupAltMDSource::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldAltMDSourceID::KEY : return fieldAltMDSourceID.offset >= 0 ? buf + fieldAltMDSourceID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupSides::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSide::KEY : return fieldSide.offset >= 0 ? buf + fieldSide.offset : nullptr;
     case FieldOrigClOrdID::KEY : return fieldOrigClOrdID.offset >= 0 ? buf + fieldOrigClOrdID.offset : nullptr;
     case FieldClOrdID::KEY : return fieldClOrdID.offset >= 0 ? buf + fieldClOrdID.offset : nullptr;
     case FieldSecondaryClOrdID::KEY : return fieldSecondaryClOrdID.offset >= 0 ? buf + fieldSecondaryClOrdID.offset : nullptr;
     case FieldClOrdLinkID::KEY : return fieldClOrdLinkID.offset >= 0 ? buf + fieldClOrdLinkID.offset : nullptr;
     case FieldOrigOrdModTime::KEY : return fieldOrigOrdModTime.offset >= 0 ? buf + fieldOrigOrdModTime.offset : nullptr;
     case FieldNoPartyIDs::KEY : return fieldNoPartyIDs.offset >= 0 ? buf + fieldNoPartyIDs.offset : nullptr;
     case FieldTradeOriginationDate::KEY : return fieldTradeOriginationDate.offset >= 0 ? buf + fieldTradeOriginationDate.offset : nullptr;
     case FieldTradeDate::KEY : return fieldTradeDate.offset >= 0 ? buf + fieldTradeDate.offset : nullptr;
     case FieldOrderQty::KEY : return fieldOrderQty.offset >= 0 ? buf + fieldOrderQty.offset : nullptr;
     case FieldCashOrderQty::KEY : return fieldCashOrderQty.offset >= 0 ? buf + fieldCashOrderQty.offset : nullptr;
     case FieldOrderPercent::KEY : return fieldOrderPercent.offset >= 0 ? buf + fieldOrderPercent.offset : nullptr;
     case FieldRoundingDirection::KEY : return fieldRoundingDirection.offset >= 0 ? buf + fieldRoundingDirection.offset : nullptr;
     case FieldRoundingModulus::KEY : return fieldRoundingModulus.offset >= 0 ? buf + fieldRoundingModulus.offset : nullptr;
     case FieldComplianceID::KEY : return fieldComplianceID.offset >= 0 ? buf + fieldComplianceID.offset : nullptr;
     case FieldText::KEY : return fieldText.offset >= 0 ? buf + fieldText.offset : nullptr;
     case FieldEncodedTextLen::KEY : return fieldEncodedTextLen.offset >= 0 ? buf + fieldEncodedTextLen.offset : nullptr;
     case FieldEncodedText::KEY : return fieldEncodedText.offset >= 0 ? buf + fieldEncodedText.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupRoutingIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldRoutingType::KEY : return fieldRoutingType.offset >= 0 ? buf + fieldRoutingType.offset : nullptr;
     case FieldRoutingID::KEY : return fieldRoutingID.offset >= 0 ? buf + fieldRoutingID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupPosAmt::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldPosAmtType::KEY : return fieldPosAmtType.offset >= 0 ? buf + fieldPosAmtType.offset : nullptr;
     case FieldPosAmt::KEY : return fieldPosAmt.offset >= 0 ? buf + fieldPosAmt.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupLinesOfText::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldText::KEY : return fieldText.offset >= 0 ? buf + fieldText.offset : nullptr;
     case FieldEncodedTextLen::KEY : return fieldEncodedTextLen.offset >= 0 ? buf + fieldEncodedTextLen.offset : nullptr;
     case FieldEncodedText::KEY : return fieldEncodedText.offset >= 0 ? buf + fieldEncodedText.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupIOIQualifiers::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldIOIQualifier::KEY : return fieldIOIQualifier.offset >= 0 ? buf + fieldIOIQualifier.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupDates::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldTradeDate::KEY : return fieldTradeDate.offset >= 0 ? buf + fieldTradeDate.offset : nullptr;
     case FieldTransactTime::KEY : return fieldTransactTime.offset >= 0 ? buf + fieldTransactTime.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupMDEntryTypes::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldMDEntryType::KEY : return fieldMDEntryType.offset >= 0 ? buf + fieldMDEntryType.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupRelatedSym::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSymbol::KEY : return fieldSymbol.offset >= 0 ? buf + fieldSymbol.offset : nullptr;
     case FieldSymbolSfx::KEY : return fieldSymbolSfx.offset >= 0 ? buf + fieldSymbolSfx.offset : nullptr;
     case FieldSecurityID::KEY : return fieldSecurityID.offset >= 0 ? buf + fieldSecurityID.offset : nullptr;
     case FieldSecurityIDSource::KEY : return fieldSecurityIDSource.offset >= 0 ? buf + fieldSecurityIDSource.offset : nullptr;
     case FieldNoSecurityAltID::KEY : return fieldNoSecurityAltID.offset >= 0 ? buf + fieldNoSecurityAltID.offset : nullptr;
     case FieldProduct::KEY : return fieldProduct.offset >= 0 ? buf + fieldProduct.offset : nullptr;
     case FieldCFICode::KEY : return fieldCFICode.offset >= 0 ? buf + fieldCFICode.offset : nullptr;
     case FieldSecurityType::KEY : return fieldSecurityType.offset >= 0 ? buf + fieldSecurityType.offset : nullptr;
     case FieldSecuritySubType::KEY : return fieldSecuritySubType.offset >= 0 ? buf + fieldSecuritySubType.offset : nullptr;
     case FieldMaturityMonthYear::KEY : return fieldMaturityMonthYear.offset >= 0 ? buf + fieldMaturityMonthYear.offset : nullptr;
     case FieldMaturityDate::KEY : return fieldMaturityDate.offset >= 0 ? buf + fieldMaturityDate.offset : nullptr;
     case FieldPutOrCall::KEY : return fieldPutOrCall.offset >= 0 ? buf + fieldPutOrCall.offset : nullptr;
     case FieldCouponPaymentDate::KEY : return fieldCouponPaymentDate.offset >= 0 ? buf + fieldCouponPaymentDate.offset : nullptr;
     case FieldIssueDate::KEY : return fieldIssueDate.offset >= 0 ? buf + fieldIssueDate.offset : nullptr;
     case FieldRepoCollateralSecurityType::KEY : return fieldRepoCollateralSecurityType.offset >= 0 ? buf + fieldRepoCollateralSecurityType.offset : nullptr;
     case FieldRepurchaseTerm::KEY : return fieldRepurchaseTerm.offset >= 0 ? buf + fieldRepurchaseTerm.offset : nullptr;
     case FieldRepurchaseRate::KEY : return fieldRepurchaseRate.offset >= 0 ? buf + fieldRepurchaseRate.offset : nullptr;
     case FieldFactor::KEY : return fieldFactor.offset >= 0 ? buf + fieldFactor.offset : nullptr;
     case FieldCreditRating::KEY : return fieldCreditRating.offset >= 0 ? buf + fieldCreditRating.offset : nullptr;
     case FieldInstrRegistry::KEY : return fieldInstrRegistry.offset >= 0 ? buf + fieldInstrRegistry.offset : nullptr;
     case FieldCountryOfIssue::KEY : return fieldCountryOfIssue.offset >= 0 ? buf + fieldCountryOfIssue.offset : nullptr;
     case FieldStateOrProvinceOfIssue::KEY : return fieldStateOrProvinceOfIssue.offset >= 0 ? buf + fieldStateOrProvinceOfIssue.offset : nullptr;
     case FieldLocaleOfIssue::KEY : return fieldLocaleOfIssue.offset >= 0 ? buf + fieldLocaleOfIssue.offset : nullptr;
     case FieldRedemptionDate::KEY : return fieldRedemptionDate.offset >= 0 ? buf + fieldRedemptionDate.offset : nullptr;
     case FieldStrikePrice::KEY : return fieldStrikePrice.offset >= 0 ? buf + fieldStrikePrice.offset : nullptr;
     case FieldStrikeCurrency::KEY : return fieldStrikeCurrency.offset >= 0 ? buf + fieldStrikeCurrency.offset : nullptr;
     case FieldOptAttribute::KEY : return fieldOptAttribute.offset >= 0 ? buf + fieldOptAttribute.offset : nullptr;
     case FieldContractMultiplier::KEY : return fieldContractMultiplier.offset >= 0 ? buf + fieldContractMultiplier.offset : nullptr;
     case FieldCouponRate::KEY : return fieldCouponRate.offset >= 0 ? buf + fieldCouponRate.offset : nullptr;
     case FieldSecurityExchange::KEY : return fieldSecurityExchange.offset >= 0 ? buf + fieldSecurityExchange.offset : nullptr;
     case FieldIssuer::KEY : return fieldIssuer.offset >= 0 ? buf + fieldIssuer.offset : nullptr;
     case FieldEncodedIssuerLen::KEY : return fieldEncodedIssuerLen.offset >= 0 ? buf + fieldEncodedIssuerLen.offset : nullptr;
     case FieldEncodedIssuer::KEY : return fieldEncodedIssuer.offset >= 0 ? buf + fieldEncodedIssuer.offset : nullptr;
     case FieldSecurityDesc::KEY : return fieldSecurityDesc.offset >= 0 ? buf + fieldSecurityDesc.offset : nullptr;
     case FieldEncodedSecurityDescLen::KEY : return fieldEncodedSecurityDescLen.offset >= 0 ? buf + fieldEncodedSecurityDescLen.offset : nullptr;
     case FieldEncodedSecurityDesc::KEY : return fieldEncodedSecurityDesc.offset >= 0 ? buf + fieldEncodedSecurityDesc.offset : nullptr;
     case FieldPool::KEY : return fieldPool.offset >= 0 ? buf + fieldPool.offset : nullptr;
     case FieldContractSettlMonth::KEY : return fieldContractSettlMonth.offset >= 0 ? buf + fieldContractSettlMonth.offset : nullptr;
     case FieldCPProgram::KEY : return fieldCPProgram.offset >= 0 ? buf + fieldCPProgram.offset : nullptr;
     case FieldCPRegType::KEY : return fieldCPRegType.offset >= 0 ? buf + fieldCPRegType.offset : nullptr;
     case FieldNoEvents::KEY : return fieldNoEvents.offset >= 0 ? buf + fieldNoEvents.offset : nullptr;
     case FieldDatedDate::KEY : return fieldDatedDate.offset >= 0 ? buf + fieldDatedDate.offset : nullptr;
     case FieldInterestAccrualDate::KEY : return fieldInterestAccrualDate.offset >= 0 ? buf + fieldInterestAccrualDate.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupContraBrokers::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldContraBroker::KEY : return fieldContraBroker.offset >= 0 ? buf + fieldContraBroker.offset : nullptr;
     case FieldContraTrader::KEY : return fieldContraTrader.offset >= 0 ? buf + fieldContraTrader.offset : nullptr;
     case FieldContraTradeQty::KEY : return fieldContraTradeQty.offset >= 0 ? buf + fieldContraTradeQty.offset : nullptr;
     case FieldContraTradeTime::KEY : return fieldContraTradeTime.offset >= 0 ? buf + fieldContraTradeTime.offset : nullptr;
     case FieldContraLegRefID::KEY : return fieldContraLegRefID.offset >= 0 ? buf + fieldContraLegRefID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupTrades::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldTradeReportID::KEY : return fieldTradeReportID.offset >= 0 ? buf + fieldTradeReportID.offset : nullptr;
     case FieldSecondaryTradeReportID::KEY : return fieldSecondaryTradeReportID.offset >= 0 ? buf + fieldSecondaryTradeReportID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupStrikes::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldSymbol::KEY : return fieldSymbol.offset >= 0 ? buf + fieldSymbol.offset : nullptr;
     case FieldSymbolSfx::KEY : return fieldSymbolSfx.offset >= 0 ? buf + fieldSymbolSfx.offset : nullptr;
     case FieldSecurityID::KEY : return fieldSecurityID.offset >= 0 ? buf + fieldSecurityID.offset : nullptr;
     case FieldSecurityIDSource::KEY : return fieldSecurityIDSource.offset >= 0 ? buf + fieldSecurityIDSource.offset : nullptr;
     case FieldNoSecurityAltID::KEY : return fieldNoSecurityAltID.offset >= 0 ? buf + fieldNoSecurityAltID.offset : nullptr;
     case FieldProduct::KEY : return fieldProduct.offset >= 0 ? buf + fieldProduct.offset : nullptr;
     case FieldCFICode::KEY : return fieldCFICode.offset >= 0 ? buf + fieldCFICode.offset : nullptr;
     case FieldSecurityType::KEY : return fieldSecurityType.offset >= 0 ? buf + fieldSecurityType.offset : nullptr;
     case FieldSecuritySubType::KEY : return fieldSecuritySubType.offset >= 0 ? buf + fieldSecuritySubType.offset : nullptr;
     case FieldMaturityMonthYear::KEY : return fieldMaturityMonthYear.offset >= 0 ? buf + fieldMaturityMonthYear.offset : nullptr;
     case FieldMaturityDate::KEY : return fieldMaturityDate.offset >= 0 ? buf + fieldMaturityDate.offset : nullptr;
     case FieldPutOrCall::KEY : return fieldPutOrCall.offset >= 0 ? buf + fieldPutOrCall.offset : nullptr;
     case FieldCouponPaymentDate::KEY : return fieldCouponPaymentDate.offset >= 0 ? buf + fieldCouponPaymentDate.offset : nullptr;
     case FieldIssueDate::KEY : return fieldIssueDate.offset >= 0 ? buf + fieldIssueDate.offset : nullptr;
     case FieldRepoCollateralSecurityType::KEY : return fieldRepoCollateralSecurityType.offset >= 0 ? buf + fieldRepoCollateralSecurityType.offset : nullptr;
     case FieldRepurchaseTerm::KEY : return fieldRepurchaseTerm.offset >= 0 ? buf + fieldRepurchaseTerm.offset : nullptr;
     case FieldRepurchaseRate::KEY : return fieldRepurchaseRate.offset >= 0 ? buf + fieldRepurchaseRate.offset : nullptr;
     case FieldFactor::KEY : return fieldFactor.offset >= 0 ? buf + fieldFactor.offset : nullptr;
     case FieldCreditRating::KEY : return fieldCreditRating.offset >= 0 ? buf + fieldCreditRating.offset : nullptr;
     case FieldInstrRegistry::KEY : return fieldInstrRegistry.offset >= 0 ? buf + fieldInstrRegistry.offset : nullptr;
     case FieldCountryOfIssue::KEY : return fieldCountryOfIssue.offset >= 0 ? buf + fieldCountryOfIssue.offset : nullptr;
     case FieldStateOrProvinceOfIssue::KEY : return fieldStateOrProvinceOfIssue.offset >= 0 ? buf + fieldStateOrProvinceOfIssue.offset : nullptr;
     case FieldLocaleOfIssue::KEY : return fieldLocaleOfIssue.offset >= 0 ? buf + fieldLocaleOfIssue.offset : nullptr;
     case FieldRedemptionDate::KEY : return fieldRedemptionDate.offset >= 0 ? buf + fieldRedemptionDate.offset : nullptr;
     case FieldStrikePrice::KEY : return fieldStrikePrice.offset >= 0 ? buf + fieldStrikePrice.offset : nullptr;
     case FieldStrikeCurrency::KEY : return fieldStrikeCurrency.offset >= 0 ? buf + fieldStrikeCurrency.offset : nullptr;
     case FieldOptAttribute::KEY : return fieldOptAttribute.offset >= 0 ? buf + fieldOptAttribute.offset : nullptr;
     case FieldContractMultiplier::KEY : return fieldContractMultiplier.offset >= 0 ? buf + fieldContractMultiplier.offset : nullptr;
     case FieldCouponRate::KEY : return fieldCouponRate.offset >= 0 ? buf + fieldCouponRate.offset : nullptr;
     case FieldSecurityExchange::KEY : return fieldSecurityExchange.offset >= 0 ? buf + fieldSecurityExchange.offset : nullptr;
     case FieldIssuer::KEY : return fieldIssuer.offset >= 0 ? buf + fieldIssuer.offset : nullptr;
     case FieldEncodedIssuerLen::KEY : return fieldEncodedIssuerLen.offset >= 0 ? buf + fieldEncodedIssuerLen.offset : nullptr;
     case FieldEncodedIssuer::KEY : return fieldEncodedIssuer.offset >= 0 ? buf + fieldEncodedIssuer.offset : nullptr;
     case FieldSecurityDesc::KEY : return fieldSecurityDesc.offset >= 0 ? buf + fieldSecurityDesc.offset : nullptr;
     case FieldEncodedSecurityDescLen::KEY : return fieldEncodedSecurityDescLen.offset >= 0 ? buf + fieldEncodedSecurityDescLen.offset : nullptr;
     case FieldEncodedSecurityDesc::KEY : return fieldEncodedSecurityDesc.offset >= 0 ? buf + fieldEncodedSecurityDesc.offset : nullptr;
     case FieldPool::KEY : return fieldPool.offset >= 0 ? buf + fieldPool.offset : nullptr;
     case FieldContractSettlMonth::KEY : return fieldContractSettlMonth.offset >= 0 ? buf + fieldContractSettlMonth.offset : nullptr;
     case FieldCPProgram::KEY : return fieldCPProgram.offset >= 0 ? buf + fieldCPProgram.offset : nullptr;
     case FieldCPRegType::KEY : return fieldCPRegType.offset >= 0 ? buf + fieldCPRegType.offset : nullptr;
     case FieldNoEvents::KEY : return fieldNoEvents.offset >= 0 ? buf + fieldNoEvents.offset : nullptr;
     case FieldDatedDate::KEY : return fieldDatedDate.offset >= 0 ? buf + fieldDatedDate.offset : nullptr;
     case FieldInterestAccrualDate::KEY : return fieldInterestAccrualDate.offset >= 0 ? buf + fieldInterestAccrualDate.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupBidDescriptors::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldBidDescriptorType::KEY : return fieldBidDescriptorType.offset >= 0 ? buf + fieldBidDescriptorType.offset : nullptr;
     case FieldBidDescriptor::KEY : return fieldBidDescriptor.offset >= 0 ? buf + fieldBidDescriptor.offset : nullptr;
     case FieldSideValueInd::KEY : return fieldSideValueInd.offset >= 0 ? buf + fieldSideValueInd.offset : nullptr;
     case FieldLiquidityValue::KEY : return fieldLiquidityValue.offset >= 0 ? buf + fieldLiquidityValue.offset : nullptr;
     case FieldLiquidityNumSecurities::KEY : return fieldLiquidityNumSecurities.offset >= 0 ? buf + fieldLiquidityNumSecurities.offset : nullptr;
     case FieldLiquidityPctLow::KEY : return fieldLiquidityPctLow.offset >= 0 ? buf + fieldLiquidityPctLow.offset : nullptr;
     case FieldLiquidityPctHigh::KEY : return fieldLiquidityPctHigh.offset >= 0 ? buf + fieldLiquidityPctHigh.offset : nullptr;
     case FieldEFPTrackingError::KEY : return fieldEFPTrackingError.offset >= 0 ? buf + fieldEFPTrackingError.offset : nullptr;
     case FieldFairValue::KEY : return fieldFairValue.offset >= 0 ? buf + fieldFairValue.offset : nullptr;
     case FieldOutsideIndexPct::KEY : return fieldOutsideIndexPct.offset >= 0 ? buf + fieldOutsideIndexPct.offset : nullptr;
     case FieldValueOfFutures::KEY : return fieldValueOfFutures.offset >= 0 ? buf + fieldValueOfFutures.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupCompIDs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldRefCompID::KEY : return fieldRefCompID.offset >= 0 ? buf + fieldRefCompID.offset : nullptr;
     case FieldRefSubID::KEY : return fieldRefSubID.offset >= 0 ? buf + fieldRefSubID.offset : nullptr;
     case FieldLocationID::KEY : return fieldLocationID.offset >= 0 ? buf + fieldLocationID.offset : nullptr;
     case FieldDeskID::KEY : return fieldDeskID.offset >= 0 ? buf + fieldDeskID.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupLegAllocs::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldLegAllocAccount::KEY : return fieldLegAllocAccount.offset >= 0 ? buf + fieldLegAllocAccount.offset : nullptr;
     case FieldLegIndividualAllocID::KEY : return fieldLegIndividualAllocID.offset >= 0 ? buf + fieldLegIndividualAllocID.offset : nullptr;
     case FieldNoNested2PartyIDs::KEY : return fieldNoNested2PartyIDs.offset >= 0 ? buf + fieldNoNested2PartyIDs.offset : nullptr;
     case FieldLegAllocQty::KEY : return fieldLegAllocQty.offset >= 0 ? buf + fieldLegAllocQty.offset : nullptr;
     case FieldLegAllocAcctIDSource::KEY : return fieldLegAllocAcctIDSource.offset >= 0 ? buf + fieldLegAllocAcctIDSource.offset : nullptr;
     case FieldLegSettlCurrency::KEY : return fieldLegSettlCurrency.offset >= 0 ? buf + fieldLegSettlCurrency.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupRegistDtls::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldRegistDtls::KEY : return fieldRegistDtls.offset >= 0 ? buf + fieldRegistDtls.offset : nullptr;
     case FieldRegistEmail::KEY : return fieldRegistEmail.offset >= 0 ? buf + fieldRegistEmail.offset : nullptr;
     case FieldMailingDtls::KEY : return fieldMailingDtls.offset >= 0 ? buf + fieldMailingDtls.offset : nullptr;
     case FieldMailingInst::KEY : return fieldMailingInst.offset >= 0 ? buf + fieldMailingInst.offset : nullptr;
     case FieldNoNestedPartyIDs::KEY : return fieldNoNestedPartyIDs.offset >= 0 ? buf + fieldNoNestedPartyIDs.offset : nullptr;
     case FieldOwnerType::KEY : return fieldOwnerType.offset >= 0 ? buf + fieldOwnerType.offset : nullptr;
     case FieldDateOfBirth::KEY : return fieldDateOfBirth.offset >= 0 ? buf + fieldDateOfBirth.offset : nullptr;
     case FieldInvestorCountryOfResidence::KEY : return fieldInvestorCountryOfResidence.offset >= 0 ? buf + fieldInvestorCountryOfResidence.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupContAmts::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldContAmtType::KEY : return fieldContAmtType.offset >= 0 ? buf + fieldContAmtType.offset : nullptr;
     case FieldContAmtValue::KEY : return fieldContAmtValue.offset >= 0 ? buf + fieldContAmtValue.offset : nullptr;
     case FieldContAmtCurr::KEY : return fieldContAmtCurr.offset >= 0 ? buf + fieldContAmtCurr.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}

const char * GroupMDEntries::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldMDEntryType::KEY : return fieldMDEntryType.offset >= 0 ? buf + fieldMDEntryType.offset : nullptr;
     case FieldMDEntryPx::KEY : return fieldMDEntryPx.offset >= 0 ? buf + fieldMDEntryPx.offset : nullptr;
     case FieldCurrency::KEY : return fieldCurrency.offset >= 0 ? buf + fieldCurrency.offset : nullptr;
     case FieldMDEntrySize::KEY : return fieldMDEntrySize.offset >= 0 ? buf + fieldMDEntrySize.offset : nullptr;
     case FieldMDEntryDate::KEY : return fieldMDEntryDate.offset >= 0 ? buf + fieldMDEntryDate.offset : nullptr;
     case FieldMDEntryTime::KEY : return fieldMDEntryTime.offset >= 0 ? buf + fieldMDEntryTime.offset : nullptr;
     case FieldTickDirection::KEY : return fieldTickDirection.offset >= 0 ? buf + fieldTickDirection.offset : nullptr;
     case FieldMDMkt::KEY : return fieldMDMkt.offset >= 0 ? buf + fieldMDMkt.offset : nullptr;
     case FieldTradingSessionID::KEY : return fieldTradingSessionID.offset >= 0 ? buf + fieldTradingSessionID.offset : nullptr;
     case FieldTradingSessionSubID::KEY : return fieldTradingSessionSubID.offset >= 0 ? buf + fieldTradingSessionSubID.offset : nullptr;
     case FieldQuoteCondition::KEY : return fieldQuoteCondition.offset >= 0 ? buf + fieldQuoteCondition.offset : nullptr;
     case FieldTradeCondition::KEY : return fieldTradeCondition.offset >= 0 ? buf + fieldTradeCondition.offset : nullptr;
     case FieldMDEntryOriginator::KEY : return fieldMDEntryOriginator.offset >= 0 ? buf + fieldMDEntryOriginator.offset : nullptr;
     case FieldLocationID::KEY : return fieldLocationID.offset >= 0 ? buf + fieldLocationID.offset : nullptr;
     case FieldDeskID::KEY : return fieldDeskID.offset >= 0 ? buf + fieldDeskID.offset : nullptr;
     case FieldOpenCloseSettlFlag::KEY : return fieldOpenCloseSettlFlag.offset >= 0 ? buf + fieldOpenCloseSettlFlag.offset : nullptr;
     case FieldTimeInForce::KEY : return fieldTimeInForce.offset >= 0 ? buf + fieldTimeInForce.offset : nullptr;
     case FieldExpireDate::KEY : return fieldExpireDate.offset >= 0 ? buf + fieldExpireDate.offset : nullptr;
     case FieldExpireTime::KEY : return fieldExpireTime.offset >= 0 ? buf + fieldExpireTime.offset : nullptr;
     case FieldMinQty::KEY : return fieldMinQty.offset >= 0 ? buf + fieldMinQty.offset : nullptr;
     case FieldExecInst::KEY : return fieldExecInst.offset >= 0 ? buf + fieldExecInst.offset : nullptr;
     case FieldSellerDays::KEY : return fieldSellerDays.offset >= 0 ? buf + fieldSellerDays.offset : nullptr;
     case FieldOrderID::KEY : return fieldOrderID.offset >= 0 ? buf + fieldOrderID.offset : nullptr;
     case FieldQuoteEntryID::KEY : return fieldQuoteEntryID.offset >= 0 ? buf + fieldQuoteEntryID.offset : nullptr;
     case FieldMDEntryBuyer::KEY : return fieldMDEntryBuyer.offset >= 0 ? buf + fieldMDEntryBuyer.offset : nullptr;
     case FieldMDEntrySeller::KEY : return fieldMDEntrySeller.offset >= 0 ? buf + fieldMDEntrySeller.offset : nullptr;
     case FieldNumberOfOrders::KEY : return fieldNumberOfOrders.offset >= 0 ? buf + fieldNumberOfOrders.offset : nullptr;
     case FieldMDEntryPositionNo::KEY : return fieldMDEntryPositionNo.offset >= 0 ? buf + fieldMDEntryPositionNo.offset : nullptr;
     case FieldScope::KEY : return fieldScope.offset >= 0 ? buf + fieldScope.offset : nullptr;
     case FieldPriceDelta::KEY : return fieldPriceDelta.offset >= 0 ? buf + fieldPriceDelta.offset : nullptr;
     case FieldText::KEY : return fieldText.offset >= 0 ? buf + fieldText.offset : nullptr;
     case FieldEncodedTextLen::KEY : return fieldEncodedTextLen.offset >= 0 ? buf + fieldEncodedTextLen.offset : nullptr;
     case FieldEncodedText::KEY : return fieldEncodedText.offset >= 0 ? buf + fieldEncodedText.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}


namespace {

const std::vector<unsigned> LegStipulations_knownFields = { FieldLegStipulationType::KEY
, FieldLegStipulationValue::KEY
};

const std::vector<unsigned> Events_knownFields = { FieldEventType::KEY
, FieldEventDate::KEY
, FieldEventPx::KEY
, FieldEventText::KEY
};

const std::vector<unsigned> LegSecurityAltID_knownFields = { FieldLegSecurityAltID::KEY
, FieldLegSecurityAltIDSource::KEY
};

const std::vector<unsigned> Capacities_knownFields = { FieldOrderCapacity::KEY
, FieldOrderRestrictions::KEY
, FieldOrderCapacityQty::KEY
};

const std::vector<unsigned> Nested3PartySubIDs_knownFields = { FieldNested3PartySubID::KEY
, FieldNested3PartySubIDType::KEY
};

const std::vector<unsigned> PartySubIDs_knownFields = { FieldPartySubID::KEY
, FieldPartySubIDType::KEY
};

const std::vector<unsigned> Nested2PartySubIDs_knownFields = { FieldNested2PartySubID::KEY
, FieldNested2PartySubIDType::KEY
};

const std::vector<unsigned> Nested2PartyIDs_knownFields = { FieldNested2PartyID::KEY
, FieldNested2PartyIDSource::KEY
, FieldNested2PartyRole::KEY
, FieldNoNested2PartySubIDs::KEY
};

const std::vector<unsigned> Hops_knownFields = { FieldHopCompID::KEY
, FieldHopSendingTime::KEY
, FieldHopRefID::KEY
};

const std::vector<unsigned> CollInquiryQualifier_knownFields = { FieldCollInquiryQualifier::KEY
};

const std::vector<unsigned> PartyIDs_knownFields = { FieldPartyID::KEY
, FieldPartyIDSource::KEY
, FieldPartyRole::KEY
, FieldNoPartySubIDs::KEY
};

const std::vector<unsigned> Allocs_knownFields = { FieldAllocAccount::KEY
, FieldAllocAcctIDSource::KEY
, FieldAllocPrice::KEY
, FieldIndividualAllocID::KEY
, FieldIndividualAllocRejCode::KEY
, FieldAllocText::KEY
, FieldEncodedAllocTextLen::KEY
, FieldEncodedAllocText::KEY
};

const std::vector<unsigned> TradingSessions_knownFields = { FieldTradingSessionID::KEY
, FieldTradingSessionSubID::KEY
};

const std::vector<unsigned> SecurityAltID_knownFields = { FieldSecurityAltID::KEY
, FieldSecurityAltIDSource::KEY
};

const std::vector<unsigned> UnderlyingSecurityAltID_knownFields = { FieldUnderlyingSecurityAltID::KEY
, FieldUnderlyingSecurityAltIDSource::KEY
};

const std::vector<unsigned> UnderlyingStips_knownFields = { FieldUnderlyingStipType::KEY
, FieldUnderlyingStipValue::KEY
};

const std::vector<unsigned> Underlyings_knownFields = { FieldUnderlyingSymbol::KEY
, FieldUnderlyingSymbolSfx::KEY
, FieldUnderlyingSecurityID::KEY
, FieldUnderlyingSecurityIDSource::KEY
, FieldNoUnderlyingSecurityAltID::KEY
, FieldUnderlyingProduct::KEY
, FieldUnderlyingCFICode::KEY
, FieldUnderlyingSecurityType::KEY
, FieldUnderlyingSecuritySubType::KEY
, FieldUnderlyingMaturityMonthYear::KEY
, FieldUnderlyingMaturityDate::KEY
, FieldUnderlyingPutOrCall::KEY
, FieldUnderlyingCouponPaymentDate::KEY
, FieldUnderlyingIssueDate::KEY
, FieldUnderlyingRepoCollateralSecurityType::KEY
, FieldUnderlyingRepurchaseTerm::KEY
, FieldUnderlyingRepurchaseRate::KEY
, FieldUnderlyingFactor::KEY
, FieldUnderlyingCreditRating::KEY
, FieldUnderlyingInstrRegistry::KEY
, FieldUnderlyingCountryOfIssue::KEY
, FieldUnderlyingStateOrProvinceOfIssue::KEY
, FieldUnderlyingLocaleOfIssue::KEY
, FieldUnderlyingRedemptionDate::KEY
, FieldUnderlyingStrikePrice::KEY
, FieldUnderlyingStrikeCurrency::KEY
, FieldUnderlyingOptAttribute::KEY
, FieldUnderlyingContractMultiplier::KEY
, FieldUnderlyingCouponRate::KEY
, FieldUnderlyingSecurityExchange::KEY
, FieldUnderlyingIssuer::KEY
, FieldEncodedUnderlyingIssuerLen::KEY
, FieldEncodedUnderlyingIssuer::KEY
, FieldUnderlyingSecurityDesc::KEY
, FieldEncodedUnderlyingSecurityDescLen::KEY
, FieldEncodedUnderlyingSecurityDesc::KEY
, FieldUnderlyingCPProgram::KEY
, FieldUnderlyingCPRegType::KEY
, FieldUnderlyingCurrency::KEY
, FieldUnderlyingQty::KEY
, FieldUnderlyingPx::KEY
, FieldUnderlyingDirtyPrice::KEY
, FieldUnderlyingEndPrice::KEY
, FieldUnderlyingStartValue::KEY
, FieldUnderlyingCurrentValue::KEY
, FieldUnderlyingEndValue::KEY
, FieldNoUnderlyingStips::KEY
, FieldUnderlyingSettlPrice::KEY
, FieldUnderlyingSettlPriceType::KEY
};

const std::vector<unsigned> Stipulations_knownFields = { FieldStipulationType::KEY
, FieldStipulationValue::KEY
};

const std::vector<unsigned> Orders_knownFields = { FieldClOrdID::KEY
, FieldSecondaryClOrdID::KEY
, FieldListSeqNo::KEY
, FieldClOrdLinkID::KEY
, FieldSettlInstMode::KEY
, FieldNoPartyIDs::KEY
, FieldTradeOriginationDate::KEY
, FieldTradeDate::KEY
, FieldAccount::KEY
, FieldAcctIDSource::KEY
, FieldAccountType::KEY
, FieldDayBookingInst::KEY
, FieldBookingUnit::KEY
, FieldAllocID::KEY
, FieldPreallocMethod::KEY
, FieldNoAllocs::KEY
, FieldSettlType::KEY
, FieldSettlDate::KEY
, FieldCashMargin::KEY
, FieldClearingFeeIndicator::KEY
, FieldHandlInst::KEY
, FieldExecInst::KEY
, FieldMinQty::KEY
, FieldMaxFloor::KEY
, FieldExDestination::KEY
, FieldNoTradingSessions::KEY
, FieldProcessCode::KEY
, FieldSymbol::KEY
, FieldSymbolSfx::KEY
, FieldSecurityID::KEY
, FieldSecurityIDSource::KEY
, FieldNoSecurityAltID::KEY
, FieldProduct::KEY
, FieldCFICode::KEY
, FieldSecurityType::KEY
, FieldSecuritySubType::KEY
, FieldMaturityMonthYear::KEY
, FieldMaturityDate::KEY
, FieldPutOrCall::KEY
, FieldCouponPaymentDate::KEY
, FieldIssueDate::KEY
, FieldRepoCollateralSecurityType::KEY
, FieldRepurchaseTerm::KEY
, FieldRepurchaseRate::KEY
, FieldFactor::KEY
, FieldCreditRating::KEY
, FieldInstrRegistry::KEY
, FieldCountryOfIssue::KEY
, FieldStateOrProvinceOfIssue::KEY
, FieldLocaleOfIssue::KEY
, FieldRedemptionDate::KEY
, FieldStrikePrice::KEY
, FieldStrikeCurrency::KEY
, FieldOptAttribute::KEY
, FieldContractMultiplier::KEY
, FieldCouponRate::KEY
, FieldSecurityExchange::KEY
, FieldIssuer::KEY
, FieldEncodedIssuerLen::KEY
, FieldEncodedIssuer::KEY
, FieldSecurityDesc::KEY
, FieldEncodedSecurityDescLen::KEY
, FieldEncodedSecurityDesc::KEY
, FieldPool::KEY
, FieldContractSettlMonth::KEY
, FieldCPProgram::KEY
, FieldCPRegType::KEY
, FieldNoEvents::KEY
, FieldDatedDate::KEY
, FieldInterestAccrualDate::KEY
, FieldNoUnderlyings::KEY
, FieldPrevClosePx::KEY
, FieldSide::KEY
, FieldSideValueInd::KEY
, FieldLocateReqd::KEY
, FieldTransactTime::KEY
, FieldNoStipulations::KEY
, FieldQtyType::KEY
, FieldOrderQty::KEY
, FieldCashOrderQty::KEY
, FieldOrderPercent::KEY
, FieldRoundingDirection::KEY
, FieldRoundingModulus::KEY
, FieldOrdType::KEY
, FieldPriceType::KEY
, FieldPrice::KEY
, FieldStopPx::KEY
, FieldSpread::KEY
, FieldBenchmarkCurveCurrency::KEY
, FieldBenchmarkCurveName::KEY
, FieldBenchmarkCurvePoint::KEY
, FieldBenchmarkPrice::KEY
, FieldBenchmarkPriceType::KEY
, FieldBenchmarkSecurityID::KEY
, FieldBenchmarkSecurityIDSource::KEY
, FieldYieldType::KEY
, FieldYield::KEY
, FieldYieldCalcDate::KEY
, FieldYieldRedemptionDate::KEY
, FieldYieldRedemptionPrice::KEY
, FieldYieldRedemptionPriceType::KEY
, FieldCurrency::KEY
, FieldComplianceID::KEY
, FieldSolicitedFlag::KEY
, FieldIOIID::KEY
, FieldQuoteID::KEY
, FieldTimeInForce::KEY
, FieldEffectiveTime::KEY
, FieldExpireDate::KEY
, FieldExpireTime::KEY
, FieldGTBookingInst::KEY
, FieldCommission::KEY
, FieldCommType::KEY
, FieldCommCurrency::KEY
, FieldFundRenewWaiv::KEY
, FieldOrderCapacity::KEY
, FieldOrderRestrictions::KEY
, FieldCustOrderCapacity::KEY
, FieldForexReq::KEY
, FieldSettlCurrency::KEY
, FieldBookingType::KEY
, FieldText::KEY
, FieldEncodedTextLen::KEY
, FieldEncodedText::KEY
, FieldSettlDate2::KEY
, FieldOrderQty2::KEY
, FieldPrice2::KEY
, FieldPositionEffect::KEY
, FieldCoveredOrUncovered::KEY
, FieldMaxShow::KEY
, FieldPegOffsetValue::KEY
, FieldPegMoveType::KEY
, FieldPegOffsetType::KEY
, FieldPegLimitType::KEY
, FieldPegRoundDirection::KEY
, FieldPegScope::KEY
, FieldDiscretionInst::KEY
, FieldDiscretionOffsetValue::KEY
, FieldDiscretionMoveType::KEY
, FieldDiscretionOffsetType::KEY
, FieldDiscretionLimitType::KEY
, FieldDiscretionRoundDirection::KEY
, FieldDiscretionScope::KEY
, FieldTargetStrategy::KEY
, FieldTargetStrategyParameters::KEY
, FieldParticipationRate::KEY
, FieldDesignation::KEY
};

const std::vector<unsigned> SettlPartySubIDs_knownFields = { FieldSettlPartySubID::KEY
, FieldSettlPartySubIDType::KEY
};

const std::vector<unsigned> SettlPartyIDs_knownFields = { FieldSettlPartyID::KEY
, FieldSettlPartyIDSource::KEY
, FieldSettlPartyRole::KEY
, FieldNoSettlPartySubIDs::KEY
};

const std::vector<unsigned> DlvyInst_knownFields = { FieldSettlInstSource::KEY
, FieldDlvyInstType::KEY
, FieldNoSettlPartyIDs::KEY
};

const std::vector<unsigned> ClearingInstructions_knownFields = { FieldClearingInstruction::KEY
};

const std::vector<unsigned> NestedPartySubIDs_knownFields = { FieldNestedPartySubID::KEY
, FieldNestedPartySubIDType::KEY
};

const std::vector<unsigned> NestedPartyIDs_knownFields = { FieldNestedPartyID::KEY
, FieldNestedPartyIDSource::KEY
, FieldNestedPartyRole::KEY
, FieldNoNestedPartySubIDs::KEY
};

const std::vector<unsigned> Legs_knownFields = { FieldLegSymbol::KEY
, FieldLegSymbolSfx::KEY
, FieldLegSecurityID::KEY
, FieldLegSecurityIDSource::KEY
, FieldNoLegSecurityAltID::KEY
, FieldLegProduct::KEY
, FieldLegCFICode::KEY
, FieldLegSecurityType::KEY
, FieldLegSecuritySubType::KEY
, FieldLegMaturityMonthYear::KEY
, FieldLegMaturityDate::KEY
, FieldLegCouponPaymentDate::KEY
, FieldLegIssueDate::KEY
, FieldLegRepoCollateralSecurityType::KEY
, FieldLegRepurchaseTerm::KEY
, FieldLegRepurchaseRate::KEY
, FieldLegFactor::KEY
, FieldLegCreditRating::KEY
, FieldLegInstrRegistry::KEY
, FieldLegCountryOfIssue::KEY
, FieldLegStateOrProvinceOfIssue::KEY
, FieldLegLocaleOfIssue::KEY
, FieldLegRedemptionDate::KEY
, FieldLegStrikePrice::KEY
, FieldLegStrikeCurrency::KEY
, FieldLegOptAttribute::KEY
, FieldLegContractMultiplier::KEY
, FieldLegCouponRate::KEY
, FieldLegSecurityExchange::KEY
, FieldLegIssuer::KEY
, FieldEncodedLegIssuerLen::KEY
, FieldEncodedLegIssuer::KEY
, FieldLegSecurityDesc::KEY
, FieldEncodedLegSecurityDescLen::KEY
, FieldEncodedLegSecurityDesc::KEY
, FieldLegRatioQty::KEY
, FieldLegSide::KEY
, FieldLegCurrency::KEY
, FieldLegPool::KEY
, FieldLegDatedDate::KEY
, FieldLegContractSettlMonth::KEY
, FieldLegInterestAccrualDate::KEY
, FieldLegQty::KEY
, FieldLegSwapType::KEY
, FieldNoLegStipulations::KEY
, FieldLegPositionEffect::KEY
, FieldLegCoveredOrUncovered::KEY
, FieldNoNestedPartyIDs::KEY
, FieldLegRefID::KEY
, FieldLegPrice::KEY
, FieldLegSettlType::KEY
, FieldLegSettlDate::KEY
, FieldLegLastPx::KEY
};

const std::vector<unsigned> QuoteEntries_knownFields = { FieldSymbol::KEY
, FieldSymbolSfx::KEY
, FieldSecurityID::KEY
, FieldSecurityIDSource::KEY
, FieldNoSecurityAltID::KEY
, FieldProduct::KEY
, FieldCFICode::KEY
, FieldSecurityType::KEY
, FieldSecuritySubType::KEY
, FieldMaturityMonthYear::KEY
, FieldMaturityDate::KEY
, FieldPutOrCall::KEY
, FieldCouponPaymentDate::KEY
, FieldIssueDate::KEY
, FieldRepoCollateralSecurityType::KEY
, FieldRepurchaseTerm::KEY
, FieldRepurchaseRate::KEY
, FieldFactor::KEY
, FieldCreditRating::KEY
, FieldInstrRegistry::KEY
, FieldCountryOfIssue::KEY
, FieldStateOrProvinceOfIssue::KEY
, FieldLocaleOfIssue::KEY
, FieldRedemptionDate::KEY
, FieldStrikePrice::KEY
, FieldStrikeCurrency::KEY
, FieldOptAttribute::KEY
, FieldContractMultiplier::KEY
, FieldCouponRate::KEY
, FieldSecurityExchange::KEY
, FieldIssuer::KEY
, FieldEncodedIssuerLen::KEY
, FieldEncodedIssuer::KEY
, FieldSecurityDesc::KEY
, FieldEncodedSecurityDescLen::KEY
, FieldEncodedSecurityDesc::KEY
, FieldPool::KEY
, FieldContractSettlMonth::KEY
, FieldCPProgram::KEY
, FieldCPRegType::KEY
, FieldNoEvents::KEY
, FieldDatedDate::KEY
, FieldInterestAccrualDate::KEY
, FieldAgreementDesc::KEY
, FieldAgreementID::KEY
, FieldAgreementDate::KEY
, FieldAgreementCurrency::KEY
, FieldTerminationType::KEY
, FieldStartDate::KEY
, FieldEndDate::KEY
, FieldDeliveryType::KEY
, FieldMarginRatio::KEY
, FieldNoUnderlyings::KEY
, FieldNoLegs::KEY
};

const std::vector<unsigned> QuoteSets_knownFields = { FieldQuoteSetID::KEY
, FieldUnderlyingSymbol::KEY
, FieldUnderlyingSymbolSfx::KEY
, FieldUnderlyingSecurityID::KEY
, FieldUnderlyingSecurityIDSource::KEY
, FieldNoUnderlyingSecurityAltID::KEY
, FieldUnderlyingProduct::KEY
, FieldUnderlyingCFICode::KEY
, FieldUnderlyingSecurityType::KEY
, FieldUnderlyingSecuritySubType::KEY
, FieldUnderlyingMaturityMonthYear::KEY
, FieldUnderlyingMaturityDate::KEY
, FieldUnderlyingPutOrCall::KEY
, FieldUnderlyingCouponPaymentDate::KEY
, FieldUnderlyingIssueDate::KEY
, FieldUnderlyingRepoCollateralSecurityType::KEY
, FieldUnderlyingRepurchaseTerm::KEY
, FieldUnderlyingRepurchaseRate::KEY
, FieldUnderlyingFactor::KEY
, FieldUnderlyingCreditRating::KEY
, FieldUnderlyingInstrRegistry::KEY
, FieldUnderlyingCountryOfIssue::KEY
, FieldUnderlyingStateOrProvinceOfIssue::KEY
, FieldUnderlyingLocaleOfIssue::KEY
, FieldUnderlyingRedemptionDate::KEY
, FieldUnderlyingStrikePrice::KEY
, FieldUnderlyingStrikeCurrency::KEY
, FieldUnderlyingOptAttribute::KEY
, FieldUnderlyingContractMultiplier::KEY
, FieldUnderlyingCouponRate::KEY
, FieldUnderlyingSecurityExchange::KEY
, FieldUnderlyingIssuer::KEY
, FieldEncodedUnderlyingIssuerLen::KEY
, FieldEncodedUnderlyingIssuer::KEY
, FieldUnderlyingSecurityDesc::KEY
, FieldEncodedUnderlyingSecurityDescLen::KEY
, FieldEncodedUnderlyingSecurityDesc::KEY
, FieldUnderlyingCPProgram::KEY
, FieldUnderlyingCPRegType::KEY
, FieldUnderlyingCurrency::KEY
, FieldUnderlyingQty::KEY
, FieldUnderlyingPx::KEY
, FieldUnderlyingDirtyPrice::KEY
, FieldUnderlyingEndPrice::KEY
, FieldUnderlyingStartValue::KEY
, FieldUnderlyingCurrentValue::KEY
, FieldUnderlyingEndValue::KEY
, FieldNoUnderlyingStips::KEY
, FieldTotNoQuoteEntries::KEY
, FieldLastFragment::KEY
, FieldNoQuoteEntries::KEY
};

const std::vector<unsigned> SecurityTypes_knownFields = { FieldSecurityType::KEY
, FieldSecuritySubType::KEY
, FieldProduct::KEY
, FieldCFICode::KEY
};

const std::vector<unsigned> Nested3PartyIDs_knownFields = { FieldNested3PartyID::KEY
, FieldNested3PartyIDSource::KEY
, FieldNested3PartyRole::KEY
, FieldNoNested3PartySubIDs::KEY
};

const std::vector<unsigned> Positions_knownFields = { FieldPosType::KEY
, FieldLongQty::KEY
, FieldShortQty::KEY
, FieldPosQtyStatus::KEY
, FieldNoNestedPartyIDs::KEY
};

const std::vector<unsigned> AffectedOrders_knownFields = { FieldOrigClOrdID::KEY
, FieldAffectedOrderID::KEY
, FieldAffectedSecondaryOrderID::KEY
};

const std::vector<unsigned> Execs_knownFields = { FieldLastQty::KEY
, FieldExecID::KEY
, FieldSecondaryExecID::KEY
, FieldLastPx::KEY
, FieldLastParPx::KEY
, FieldLastCapacity::KEY
};

const std::vector<unsigned> MsgTypes_knownFields = { FieldRefMsgType::KEY
, FieldMsgDirection::KEY
};

const std::vector<unsigned> BidComponents_knownFields = { FieldListID::KEY
, FieldSide::KEY
, FieldTradingSessionID::KEY
, FieldTradingSessionSubID::KEY
, FieldNetGrossInd::KEY
, FieldSettlType::KEY
, FieldSettlDate::KEY
, FieldAccount::KEY
, FieldAcctIDSource::KEY
};

const std::vector<unsigned> SettlInst_knownFields = { FieldSettlInstID::KEY
, FieldSettlInstTransType::KEY
, FieldSettlInstRefID::KEY
, FieldNoPartyIDs::KEY
, FieldSide::KEY
, FieldProduct::KEY
, FieldSecurityType::KEY
, FieldCFICode::KEY
, FieldEffectiveTime::KEY
, FieldExpireTime::KEY
, FieldLastUpdateTime::KEY
, FieldSettlDeliveryType::KEY
, FieldStandInstDbType::KEY
, FieldStandInstDbName::KEY
, FieldStandInstDbID::KEY
, FieldNoDlvyInst::KEY
, FieldPaymentMethod::KEY
, FieldPaymentRef::KEY
, FieldCardHolderName::KEY
, FieldCardNumber::KEY
, FieldCardStartDate::KEY
, FieldCardExpDate::KEY
, FieldCardIssNum::KEY
, FieldPaymentDate::KEY
, FieldPaymentRemitterID::KEY
};

const std::vector<unsigned> InstrAttrib_knownFields = { FieldInstrAttribType::KEY
, FieldInstrAttribValue::KEY
};

const std::vector<unsigned> MiscFees_knownFields = { FieldMiscFeeAmt::KEY
, FieldMiscFeeCurr::KEY
, FieldMiscFeeType::KEY
, FieldMiscFeeBasis::KEY
};

const std::vector<unsigned> QuoteQualifiers_knownFields = { FieldQuoteQualifier::KEY
};

const std::vector<unsigned> DistribInsts_knownFields = { FieldDistribPaymentMethod::KEY
, FieldDistribPercentage::KEY
, FieldCashDistribCurr::KEY
, FieldCashDistribAgentName::KEY
, FieldCashDistribAgentCode::KEY
, FieldCashDistribAgentAcctNumber::KEY
, FieldCashDistribPayRef::KEY
, FieldCashDistribAgentAcctName::KEY
};

const std::vector<unsigned> TrdRegTimestamps_knownFields = { FieldTrdRegTimestamp::KEY
, FieldTrdRegTimestampType::KEY
, FieldTrdRegTimestampOrigin::KEY
};

const std::vector<unsigned> AltMDSource_knownFields = { FieldAltMDSourceID::KEY
};

const std::vector<unsigned> Sides_knownFields = { FieldSide::KEY
, FieldOrigClOrdID::KEY
, FieldClOrdID::KEY
, FieldSecondaryClOrdID::KEY
, FieldClOrdLinkID::KEY
, FieldOrigOrdModTime::KEY
, FieldNoPartyIDs::KEY
, FieldTradeOriginationDate::KEY
, FieldTradeDate::KEY
, FieldOrderQty::KEY
, FieldCashOrderQty::KEY
, FieldOrderPercent::KEY
, FieldRoundingDirection::KEY
, FieldRoundingModulus::KEY
, FieldComplianceID::KEY
, FieldText::KEY
, FieldEncodedTextLen::KEY
, FieldEncodedText::KEY
};

const std::vector<unsigned> RoutingIDs_knownFields = { FieldRoutingType::KEY
, FieldRoutingID::KEY
};

const std::vector<unsigned> PosAmt_knownFields = { FieldPosAmtType::KEY
, FieldPosAmt::KEY
};

const std::vector<unsigned> LinesOfText_knownFields = { FieldText::KEY
, FieldEncodedTextLen::KEY
, FieldEncodedText::KEY
};

const std::vector<unsigned> IOIQualifiers_knownFields = { FieldIOIQualifier::KEY
};

const std::vector<unsigned> Dates_knownFields = { FieldTradeDate::KEY
, FieldTransactTime::KEY
};

const std::vector<unsigned> MDEntryTypes_knownFields = { FieldMDEntryType::KEY
};

const std::vector<unsigned> RelatedSym_knownFields = { FieldSymbol::KEY
, FieldSymbolSfx::KEY
, FieldSecurityID::KEY
, FieldSecurityIDSource::KEY
, FieldNoSecurityAltID::KEY
, FieldProduct::KEY
, FieldCFICode::KEY
, FieldSecurityType::KEY
, FieldSecuritySubType::KEY
, FieldMaturityMonthYear::KEY
, FieldMaturityDate::KEY
, FieldPutOrCall::KEY
, FieldCouponPaymentDate::KEY
, FieldIssueDate::KEY
, FieldRepoCollateralSecurityType::KEY
, FieldRepurchaseTerm::KEY
, FieldRepurchaseRate::KEY
, FieldFactor::KEY
, FieldCreditRating::KEY
, FieldInstrRegistry::KEY
, FieldCountryOfIssue::KEY
, FieldStateOrProvinceOfIssue::KEY
, FieldLocaleOfIssue::KEY
, FieldRedemptionDate::KEY
, FieldStrikePrice::KEY
, FieldStrikeCurrency::KEY
, FieldOptAttribute::KEY
, FieldContractMultiplier::KEY
, FieldCouponRate::KEY
, FieldSecurityExchange::KEY
, FieldIssuer::KEY
, FieldEncodedIssuerLen::KEY
, FieldEncodedIssuer::KEY
, FieldSecurityDesc::KEY
, FieldEncodedSecurityDescLen::KEY
, FieldEncodedSecurityDesc::KEY
, FieldPool::KEY
, FieldContractSettlMonth::KEY
, FieldCPProgram::KEY
, FieldCPRegType::KEY
, FieldNoEvents::KEY
, FieldDatedDate::KEY
, FieldInterestAccrualDate::KEY
};

const std::vector<unsigned> ContraBrokers_knownFields = { FieldContraBroker::KEY
, FieldContraTrader::KEY
, FieldContraTradeQty::KEY
, FieldContraTradeTime::KEY
, FieldContraLegRefID::KEY
};

const std::vector<unsigned> Trades_knownFields = { FieldTradeReportID::KEY
, FieldSecondaryTradeReportID::KEY
};

const std::vector<unsigned> Strikes_knownFields = { FieldSymbol::KEY
, FieldSymbolSfx::KEY
, FieldSecurityID::KEY
, FieldSecurityIDSource::KEY
, FieldNoSecurityAltID::KEY
, FieldProduct::KEY
, FieldCFICode::KEY
, FieldSecurityType::KEY
, FieldSecuritySubType::KEY
, FieldMaturityMonthYear::KEY
, FieldMaturityDate::KEY
, FieldPutOrCall::KEY
, FieldCouponPaymentDate::KEY
, FieldIssueDate::KEY
, FieldRepoCollateralSecurityType::KEY
, FieldRepurchaseTerm::KEY
, FieldRepurchaseRate::KEY
, FieldFactor::KEY
, FieldCreditRating::KEY
, FieldInstrRegistry::KEY
, FieldCountryOfIssue::KEY
, FieldStateOrProvinceOfIssue::KEY
, FieldLocaleOfIssue::KEY
, FieldRedemptionDate::KEY
, FieldStrikePrice::KEY
, FieldStrikeCurrency::KEY
, FieldOptAttribute::KEY
, FieldContractMultiplier::KEY
, FieldCouponRate::KEY
, FieldSecurityExchange::KEY
, FieldIssuer::KEY
, FieldEncodedIssuerLen::KEY
, FieldEncodedIssuer::KEY
, FieldSecurityDesc::KEY
, FieldEncodedSecurityDescLen::KEY
, FieldEncodedSecurityDesc::KEY
, FieldPool::KEY
, FieldContractSettlMonth::KEY
, FieldCPProgram::KEY
, FieldCPRegType::KEY
, FieldNoEvents::KEY
, FieldDatedDate::KEY
, FieldInterestAccrualDate::KEY
};

const std::vector<unsigned> BidDescriptors_knownFields = { FieldBidDescriptorType::KEY
, FieldBidDescriptor::KEY
, FieldSideValueInd::KEY
, FieldLiquidityValue::KEY
, FieldLiquidityNumSecurities::KEY
, FieldLiquidityPctLow::KEY
, FieldLiquidityPctHigh::KEY
, FieldEFPTrackingError::KEY
, FieldFairValue::KEY
, FieldOutsideIndexPct::KEY
, FieldValueOfFutures::KEY
};

const std::vector<unsigned> CompIDs_knownFields = { FieldRefCompID::KEY
, FieldRefSubID::KEY
, FieldLocationID::KEY
, FieldDeskID::KEY
};

const std::vector<unsigned> LegAllocs_knownFields = { FieldLegAllocAccount::KEY
, FieldLegIndividualAllocID::KEY
, FieldNoNested2PartyIDs::KEY
, FieldLegAllocQty::KEY
, FieldLegAllocAcctIDSource::KEY
, FieldLegSettlCurrency::KEY
};

const std::vector<unsigned> RegistDtls_knownFields = { FieldRegistDtls::KEY
, FieldRegistEmail::KEY
, FieldMailingDtls::KEY
, FieldMailingInst::KEY
, FieldNoNestedPartyIDs::KEY
, FieldOwnerType::KEY
, FieldDateOfBirth::KEY
, FieldInvestorCountryOfResidence::KEY
};

const std::vector<unsigned> ContAmts_knownFields = { FieldContAmtType::KEY
, FieldContAmtValue::KEY
, FieldContAmtCurr::KEY
};

const std::vector<unsigned> MDEntries_knownFields = { FieldMDEntryType::KEY
, FieldMDEntryPx::KEY
, FieldCurrency::KEY
, FieldMDEntrySize::KEY
, FieldMDEntryDate::KEY
, FieldMDEntryTime::KEY
, FieldTickDirection::KEY
, FieldMDMkt::KEY
, FieldTradingSessionID::KEY
, FieldTradingSessionSubID::KEY
, FieldQuoteCondition::KEY
, FieldTradeCondition::KEY
, FieldMDEntryOriginator::KEY
, FieldLocationID::KEY
, FieldDeskID::KEY
, FieldOpenCloseSettlFlag::KEY
, FieldTimeInForce::KEY
, FieldExpireDate::KEY
, FieldExpireTime::KEY
, FieldMinQty::KEY
, FieldExecInst::KEY
, FieldSellerDays::KEY
, FieldOrderID::KEY
, FieldQuoteEntryID::KEY
, FieldMDEntryBuyer::KEY
, FieldMDEntrySeller::KEY
, FieldNumberOfOrders::KEY
, FieldMDEntryPositionNo::KEY
, FieldScope::KEY
, FieldPriceDelta::KEY
, FieldText::KEY
, FieldEncodedTextLen::KEY
, FieldEncodedText::KEY
};

}


const std::vector<unsigned> & GroupLegStipulations::getKnownFields(){ return LegStipulations_knownFields; }

const std::vector<unsigned> & GroupEvents::getKnownFields(){ return Events_knownFields; }

const std::vector<unsigned> & GroupLegSecurityAltID::getKnownFields(){ return LegSecurityAltID_knownFields; }

const std::vector<unsigned> & GroupCapacities::getKnownFields(){ return Capacities_knownFields; }

const std::vector<unsigned> & GroupNested3PartySubIDs::getKnownFields(){ return Nested3PartySubIDs_knownFields; }

const std::vector<unsigned> & GroupPartySubIDs::getKnownFields(){ return PartySubIDs_knownFields; }

const std::vector<unsigned> & GroupNested2PartySubIDs::getKnownFields(){ return Nested2PartySubIDs_knownFields; }

const std::vector<unsigned> & GroupNested2PartyIDs::getKnownFields(){ return Nested2PartyIDs_knownFields; }

const std::vector<unsigned> & GroupHops::getKnownFields(){ return Hops_knownFields; }

const std::vector<unsigned> & GroupCollInquiryQualifier::getKnownFields(){ return CollInquiryQualifier_knownFields; }

const std::vector<unsigned> & GroupPartyIDs::getKnownFields(){ return PartyIDs_knownFields; }

const std::vector<unsigned> & GroupAllocs::getKnownFields(){ return Allocs_knownFields; }

const std::vector<unsigned> & GroupTradingSessions::getKnownFields(){ return TradingSessions_knownFields; }

const std::vector<unsigned> & GroupSecurityAltID::getKnownFields(){ return SecurityAltID_knownFields; }

const std::vector<unsigned> & GroupUnderlyingSecurityAltID::getKnownFields(){ return UnderlyingSecurityAltID_knownFields; }

const std::vector<unsigned> & GroupUnderlyingStips::getKnownFields(){ return UnderlyingStips_knownFields; }

const std::vector<unsigned> & GroupUnderlyings::getKnownFields(){ return Underlyings_knownFields; }

const std::vector<unsigned> & GroupStipulations::getKnownFields(){ return Stipulations_knownFields; }

const std::vector<unsigned> & GroupOrders::getKnownFields(){ return Orders_knownFields; }

const std::vector<unsigned> & GroupSettlPartySubIDs::getKnownFields(){ return SettlPartySubIDs_knownFields; }

const std::vector<unsigned> & GroupSettlPartyIDs::getKnownFields(){ return SettlPartyIDs_knownFields; }

const std::vector<unsigned> & GroupDlvyInst::getKnownFields(){ return DlvyInst_knownFields; }

const std::vector<unsigned> & GroupClearingInstructions::getKnownFields(){ return ClearingInstructions_knownFields; }

const std::vector<unsigned> & GroupNestedPartySubIDs::getKnownFields(){ return NestedPartySubIDs_knownFields; }

const std::vector<unsigned> & GroupNestedPartyIDs::getKnownFields(){ return NestedPartyIDs_knownFields; }

const std::vector<unsigned> & GroupLegs::getKnownFields(){ return Legs_knownFields; }

const std::vector<unsigned> & GroupQuoteEntries::getKnownFields(){ return QuoteEntries_knownFields; }

const std::vector<unsigned> & GroupQuoteSets::getKnownFields(){ return QuoteSets_knownFields; }

const std::vector<unsigned> & GroupSecurityTypes::getKnownFields(){ return SecurityTypes_knownFields; }

const std::vector<unsigned> & GroupNested3PartyIDs::getKnownFields(){ return Nested3PartyIDs_knownFields; }

const std::vector<unsigned> & GroupPositions::getKnownFields(){ return Positions_knownFields; }

const std::vector<unsigned> & GroupAffectedOrders::getKnownFields(){ return AffectedOrders_knownFields; }

const std::vector<unsigned> & GroupExecs::getKnownFields(){ return Execs_knownFields; }

const std::vector<unsigned> & GroupMsgTypes::getKnownFields(){ return MsgTypes_knownFields; }

const std::vector<unsigned> & GroupBidComponents::getKnownFields(){ return BidComponents_knownFields; }

const std::vector<unsigned> & GroupSettlInst::getKnownFields(){ return SettlInst_knownFields; }

const std::vector<unsigned> & GroupInstrAttrib::getKnownFields(){ return InstrAttrib_knownFields; }

const std::vector<unsigned> & GroupMiscFees::getKnownFields(){ return MiscFees_knownFields; }

const std::vector<unsigned> & GroupQuoteQualifiers::getKnownFields(){ return QuoteQualifiers_knownFields; }

const std::vector<unsigned> & GroupDistribInsts::getKnownFields(){ return DistribInsts_knownFields; }

const std::vector<unsigned> & GroupTrdRegTimestamps::getKnownFields(){ return TrdRegTimestamps_knownFields; }

const std::vector<unsigned> & GroupAltMDSource::getKnownFields(){ return AltMDSource_knownFields; }

const std::vector<unsigned> & GroupSides::getKnownFields(){ return Sides_knownFields; }

const std::vector<unsigned> & GroupRoutingIDs::getKnownFields(){ return RoutingIDs_knownFields; }

const std::vector<unsigned> & GroupPosAmt::getKnownFields(){ return PosAmt_knownFields; }

const std::vector<unsigned> & GroupLinesOfText::getKnownFields(){ return LinesOfText_knownFields; }

const std::vector<unsigned> & GroupIOIQualifiers::getKnownFields(){ return IOIQualifiers_knownFields; }

const std::vector<unsigned> & GroupDates::getKnownFields(){ return Dates_knownFields; }

const std::vector<unsigned> & GroupMDEntryTypes::getKnownFields(){ return MDEntryTypes_knownFields; }

const std::vector<unsigned> & GroupRelatedSym::getKnownFields(){ return RelatedSym_knownFields; }

const std::vector<unsigned> & GroupContraBrokers::getKnownFields(){ return ContraBrokers_knownFields; }

const std::vector<unsigned> & GroupTrades::getKnownFields(){ return Trades_knownFields; }

const std::vector<unsigned> & GroupStrikes::getKnownFields(){ return Strikes_knownFields; }

const std::vector<unsigned> & GroupBidDescriptors::getKnownFields(){ return BidDescriptors_knownFields; }

const std::vector<unsigned> & GroupCompIDs::getKnownFields(){ return CompIDs_knownFields; }

const std::vector<unsigned> & GroupLegAllocs::getKnownFields(){ return LegAllocs_knownFields; }

const std::vector<unsigned> & GroupRegistDtls::getKnownFields(){ return RegistDtls_knownFields; }

const std::vector<unsigned> & GroupContAmts::getKnownFields(){ return ContAmts_knownFields; }

const std::vector<unsigned> & GroupMDEntries::getKnownFields(){ return MDEntries_knownFields; }


// -------------------------------------- reset ----------------------------------------

void GroupLegStipulations::reset(){
     buf = nullptr;
     fieldLegStipulationValue.offset = -1;
}

void GroupEvents::reset(){
     buf = nullptr;
     fieldEventDate.offset = -1;
     fieldEventPx.offset = -1;
     fieldEventText.offset = -1;
}

void GroupLegSecurityAltID::reset(){
     buf = nullptr;
     fieldLegSecurityAltIDSource.offset = -1;
}

void GroupCapacities::reset(){
     buf = nullptr;
     fieldOrderRestrictions.offset = -1;
     fieldOrderCapacityQty.offset = -1;
}

void GroupNested3PartySubIDs::reset(){
     buf = nullptr;
     fieldNested3PartySubIDType.offset = -1;
}

void GroupPartySubIDs::reset(){
     buf = nullptr;
     fieldPartySubIDType.offset = -1;
}

void GroupNested2PartySubIDs::reset(){
     buf = nullptr;
     fieldNested2PartySubIDType.offset = -1;
}

void GroupNested2PartyIDs::reset(){
     buf = nullptr;
     fieldNested2PartyIDSource.offset = -1;
     fieldNested2PartyRole.offset = -1;
     for( auto g = groupsNested2PartySubIDs.begin(); g != groupsNested2PartySubIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupHops::reset(){
     buf = nullptr;
     fieldHopSendingTime.offset = -1;
     fieldHopRefID.offset = -1;
}

void GroupCollInquiryQualifier::reset(){
     buf = nullptr;
}

void GroupPartyIDs::reset(){
     buf = nullptr;
     fieldPartyIDSource.offset = -1;
     fieldPartyRole.offset = -1;
     for( auto g = groupsPartySubIDs.begin(); g != groupsPartySubIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupAllocs::reset(){
     buf = nullptr;
     fieldAllocAcctIDSource.offset = -1;
     fieldAllocPrice.offset = -1;
     fieldIndividualAllocID.offset = -1;
     fieldIndividualAllocRejCode.offset = -1;
     fieldAllocText.offset = -1;
     fieldEncodedAllocTextLen.offset = -1;
     fieldEncodedAllocText.offset = -1;
}

void GroupTradingSessions::reset(){
     buf = nullptr;
     fieldTradingSessionSubID.offset = -1;
}

void GroupSecurityAltID::reset(){
     buf = nullptr;
     fieldSecurityAltIDSource.offset = -1;
}

void GroupUnderlyingSecurityAltID::reset(){
     buf = nullptr;
     fieldUnderlyingSecurityAltIDSource.offset = -1;
}

void GroupUnderlyingStips::reset(){
     buf = nullptr;
     fieldUnderlyingStipValue.offset = -1;
}

void GroupUnderlyings::reset(){
     buf = nullptr;
     fieldUnderlyingSymbolSfx.offset = -1;
     fieldUnderlyingSecurityID.offset = -1;
     fieldUnderlyingSecurityIDSource.offset = -1;
     for( auto g = groupsUnderlyingSecurityAltID.begin(); g != groupsUnderlyingSecurityAltID.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldUnderlyingProduct.offset = -1;
     fieldUnderlyingCFICode.offset = -1;
     fieldUnderlyingSecurityType.offset = -1;
     fieldUnderlyingSecuritySubType.offset = -1;
     fieldUnderlyingMaturityMonthYear.offset = -1;
     fieldUnderlyingMaturityDate.offset = -1;
     fieldUnderlyingPutOrCall.offset = -1;
     fieldUnderlyingCouponPaymentDate.offset = -1;
     fieldUnderlyingIssueDate.offset = -1;
     fieldUnderlyingRepoCollateralSecurityType.offset = -1;
     fieldUnderlyingRepurchaseTerm.offset = -1;
     fieldUnderlyingRepurchaseRate.offset = -1;
     fieldUnderlyingFactor.offset = -1;
     fieldUnderlyingCreditRating.offset = -1;
     fieldUnderlyingInstrRegistry.offset = -1;
     fieldUnderlyingCountryOfIssue.offset = -1;
     fieldUnderlyingStateOrProvinceOfIssue.offset = -1;
     fieldUnderlyingLocaleOfIssue.offset = -1;
     fieldUnderlyingRedemptionDate.offset = -1;
     fieldUnderlyingStrikePrice.offset = -1;
     fieldUnderlyingStrikeCurrency.offset = -1;
     fieldUnderlyingOptAttribute.offset = -1;
     fieldUnderlyingContractMultiplier.offset = -1;
     fieldUnderlyingCouponRate.offset = -1;
     fieldUnderlyingSecurityExchange.offset = -1;
     fieldUnderlyingIssuer.offset = -1;
     fieldEncodedUnderlyingIssuerLen.offset = -1;
     fieldEncodedUnderlyingIssuer.offset = -1;
     fieldUnderlyingSecurityDesc.offset = -1;
     fieldEncodedUnderlyingSecurityDescLen.offset = -1;
     fieldEncodedUnderlyingSecurityDesc.offset = -1;
     fieldUnderlyingCPProgram.offset = -1;
     fieldUnderlyingCPRegType.offset = -1;
     fieldUnderlyingCurrency.offset = -1;
     fieldUnderlyingQty.offset = -1;
     fieldUnderlyingPx.offset = -1;
     fieldUnderlyingDirtyPrice.offset = -1;
     fieldUnderlyingEndPrice.offset = -1;
     fieldUnderlyingStartValue.offset = -1;
     fieldUnderlyingCurrentValue.offset = -1;
     fieldUnderlyingEndValue.offset = -1;
     for( auto g = groupsUnderlyingStips.begin(); g != groupsUnderlyingStips.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldUnderlyingSettlPrice.offset = -1;
     fieldUnderlyingSettlPriceType.offset = -1;
}

void GroupStipulations::reset(){
     buf = nullptr;
     fieldStipulationValue.offset = -1;
}

void GroupOrders::reset(){
     buf = nullptr;
     fieldSecondaryClOrdID.offset = -1;
     fieldListSeqNo.offset = -1;
     fieldClOrdLinkID.offset = -1;
     fieldSettlInstMode.offset = -1;
     for( auto g = groupsPartyIDs.begin(); g != groupsPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldTradeOriginationDate.offset = -1;
     fieldTradeDate.offset = -1;
     fieldAccount.offset = -1;
     fieldAcctIDSource.offset = -1;
     fieldAccountType.offset = -1;
     fieldDayBookingInst.offset = -1;
     fieldBookingUnit.offset = -1;
     fieldAllocID.offset = -1;
     fieldPreallocMethod.offset = -1;
     for( auto g = groupsAllocs.begin(); g != groupsAllocs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldSettlType.offset = -1;
     fieldSettlDate.offset = -1;
     fieldCashMargin.offset = -1;
     fieldClearingFeeIndicator.offset = -1;
     fieldHandlInst.offset = -1;
     fieldExecInst.offset = -1;
     fieldMinQty.offset = -1;
     fieldMaxFloor.offset = -1;
     fieldExDestination.offset = -1;
     for( auto g = groupsTradingSessions.begin(); g != groupsTradingSessions.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldProcessCode.offset = -1;
     fieldSymbol.offset = -1;
     fieldSymbolSfx.offset = -1;
     fieldSecurityID.offset = -1;
     fieldSecurityIDSource.offset = -1;
     for( auto g = groupsSecurityAltID.begin(); g != groupsSecurityAltID.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldProduct.offset = -1;
     fieldCFICode.offset = -1;
     fieldSecurityType.offset = -1;
     fieldSecuritySubType.offset = -1;
     fieldMaturityMonthYear.offset = -1;
     fieldMaturityDate.offset = -1;
     fieldPutOrCall.offset = -1;
     fieldCouponPaymentDate.offset = -1;
     fieldIssueDate.offset = -1;
     fieldRepoCollateralSecurityType.offset = -1;
     fieldRepurchaseTerm.offset = -1;
     fieldRepurchaseRate.offset = -1;
     fieldFactor.offset = -1;
     fieldCreditRating.offset = -1;
     fieldInstrRegistry.offset = -1;
     fieldCountryOfIssue.offset = -1;
     fieldStateOrProvinceOfIssue.offset = -1;
     fieldLocaleOfIssue.offset = -1;
     fieldRedemptionDate.offset = -1;
     fieldStrikePrice.offset = -1;
     fieldStrikeCurrency.offset = -1;
     fieldOptAttribute.offset = -1;
     fieldContractMultiplier.offset = -1;
     fieldCouponRate.offset = -1;
     fieldSecurityExchange.offset = -1;
     fieldIssuer.offset = -1;
     fieldEncodedIssuerLen.offset = -1;
     fieldEncodedIssuer.offset = -1;
     fieldSecurityDesc.offset = -1;
     fieldEncodedSecurityDescLen.offset = -1;
     fieldEncodedSecurityDesc.offset = -1;
     fieldPool.offset = -1;
     fieldContractSettlMonth.offset = -1;
     fieldCPProgram.offset = -1;
     fieldCPRegType.offset = -1;
     for( auto g = groupsEvents.begin(); g != groupsEvents.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldDatedDate.offset = -1;
     fieldInterestAccrualDate.offset = -1;
     for( auto g = groupsUnderlyings.begin(); g != groupsUnderlyings.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldPrevClosePx.offset = -1;
     fieldSide.offset = -1;
     fieldSideValueInd.offset = -1;
     fieldLocateReqd.offset = -1;
     fieldTransactTime.offset = -1;
     for( auto g = groupsStipulations.begin(); g != groupsStipulations.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldQtyType.offset = -1;
     fieldOrderQty.offset = -1;
     fieldCashOrderQty.offset = -1;
     fieldOrderPercent.offset = -1;
     fieldRoundingDirection.offset = -1;
     fieldRoundingModulus.offset = -1;
     fieldOrdType.offset = -1;
     fieldPriceType.offset = -1;
     fieldPrice.offset = -1;
     fieldStopPx.offset = -1;
     fieldSpread.offset = -1;
     fieldBenchmarkCurveCurrency.offset = -1;
     fieldBenchmarkCurveName.offset = -1;
     fieldBenchmarkCurvePoint.offset = -1;
     fieldBenchmarkPrice.offset = -1;
     fieldBenchmarkPriceType.offset = -1;
     fieldBenchmarkSecurityID.offset = -1;
     fieldBenchmarkSecurityIDSource.offset = -1;
     fieldYieldType.offset = -1;
     fieldYield.offset = -1;
     fieldYieldCalcDate.offset = -1;
     fieldYieldRedemptionDate.offset = -1;
     fieldYieldRedemptionPrice.offset = -1;
     fieldYieldRedemptionPriceType.offset = -1;
     fieldCurrency.offset = -1;
     fieldComplianceID.offset = -1;
     fieldSolicitedFlag.offset = -1;
     fieldIOIID.offset = -1;
     fieldQuoteID.offset = -1;
     fieldTimeInForce.offset = -1;
     fieldEffectiveTime.offset = -1;
     fieldExpireDate.offset = -1;
     fieldExpireTime.offset = -1;
     fieldGTBookingInst.offset = -1;
     fieldCommission.offset = -1;
     fieldCommType.offset = -1;
     fieldCommCurrency.offset = -1;
     fieldFundRenewWaiv.offset = -1;
     fieldOrderCapacity.offset = -1;
     fieldOrderRestrictions.offset = -1;
     fieldCustOrderCapacity.offset = -1;
     fieldForexReq.offset = -1;
     fieldSettlCurrency.offset = -1;
     fieldBookingType.offset = -1;
     fieldText.offset = -1;
     fieldEncodedTextLen.offset = -1;
     fieldEncodedText.offset = -1;
     fieldSettlDate2.offset = -1;
     fieldOrderQty2.offset = -1;
     fieldPrice2.offset = -1;
     fieldPositionEffect.offset = -1;
     fieldCoveredOrUncovered.offset = -1;
     fieldMaxShow.offset = -1;
     fieldPegOffsetValue.offset = -1;
     fieldPegMoveType.offset = -1;
     fieldPegOffsetType.offset = -1;
     fieldPegLimitType.offset = -1;
     fieldPegRoundDirection.offset = -1;
     fieldPegScope.offset = -1;
     fieldDiscretionInst.offset = -1;
     fieldDiscretionOffsetValue.offset = -1;
     fieldDiscretionMoveType.offset = -1;
     fieldDiscretionOffsetType.offset = -1;
     fieldDiscretionLimitType.offset = -1;
     fieldDiscretionRoundDirection.offset = -1;
     fieldDiscretionScope.offset = -1;
     fieldTargetStrategy.offset = -1;
     fieldTargetStrategyParameters.offset = -1;
     fieldParticipationRate.offset = -1;
     fieldDesignation.offset = -1;
}

void GroupSettlPartySubIDs::reset(){
     buf = nullptr;
     fieldSettlPartySubIDType.offset = -1;
}

void GroupSettlPartyIDs::reset(){
     buf = nullptr;
     fieldSettlPartyIDSource.offset = -1;
     fieldSettlPartyRole.offset = -1;
     for( auto g = groupsSettlPartySubIDs.begin(); g != groupsSettlPartySubIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupDlvyInst::reset(){
     buf = nullptr;
     fieldDlvyInstType.offset = -1;
     for( auto g = groupsSettlPartyIDs.begin(); g != groupsSettlPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupClearingInstructions::reset(){
     buf = nullptr;
}

void GroupNestedPartySubIDs::reset(){
     buf = nullptr;
     fieldNestedPartySubIDType.offset = -1;
}

void GroupNestedPartyIDs::reset(){
     buf = nullptr;
     fieldNestedPartyIDSource.offset = -1;
     fieldNestedPartyRole.offset = -1;
     for( auto g = groupsNestedPartySubIDs.begin(); g != groupsNestedPartySubIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupLegs::reset(){
     buf = nullptr;
     fieldLegSymbolSfx.offset = -1;
     fieldLegSecurityID.offset = -1;
     fieldLegSecurityIDSource.offset = -1;
     for( auto g = groupsLegSecurityAltID.begin(); g != groupsLegSecurityAltID.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldLegProduct.offset = -1;
     fieldLegCFICode.offset = -1;
     fieldLegSecurityType.offset = -1;
     fieldLegSecuritySubType.offset = -1;
     fieldLegMaturityMonthYear.offset = -1;
     fieldLegMaturityDate.offset = -1;
     fieldLegCouponPaymentDate.offset = -1;
     fieldLegIssueDate.offset = -1;
     fieldLegRepoCollateralSecurityType.offset = -1;
     fieldLegRepurchaseTerm.offset = -1;
     fieldLegRepurchaseRate.offset = -1;
     fieldLegFactor.offset = -1;
     fieldLegCreditRating.offset = -1;
     fieldLegInstrRegistry.offset = -1;
     fieldLegCountryOfIssue.offset = -1;
     fieldLegStateOrProvinceOfIssue.offset = -1;
     fieldLegLocaleOfIssue.offset = -1;
     fieldLegRedemptionDate.offset = -1;
     fieldLegStrikePrice.offset = -1;
     fieldLegStrikeCurrency.offset = -1;
     fieldLegOptAttribute.offset = -1;
     fieldLegContractMultiplier.offset = -1;
     fieldLegCouponRate.offset = -1;
     fieldLegSecurityExchange.offset = -1;
     fieldLegIssuer.offset = -1;
     fieldEncodedLegIssuerLen.offset = -1;
     fieldEncodedLegIssuer.offset = -1;
     fieldLegSecurityDesc.offset = -1;
     fieldEncodedLegSecurityDescLen.offset = -1;
     fieldEncodedLegSecurityDesc.offset = -1;
     fieldLegRatioQty.offset = -1;
     fieldLegSide.offset = -1;
     fieldLegCurrency.offset = -1;
     fieldLegPool.offset = -1;
     fieldLegDatedDate.offset = -1;
     fieldLegContractSettlMonth.offset = -1;
     fieldLegInterestAccrualDate.offset = -1;
     fieldLegQty.offset = -1;
     fieldLegSwapType.offset = -1;
     for( auto g = groupsLegStipulations.begin(); g != groupsLegStipulations.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldLegPositionEffect.offset = -1;
     fieldLegCoveredOrUncovered.offset = -1;
     for( auto g = groupsNestedPartyIDs.begin(); g != groupsNestedPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldLegRefID.offset = -1;
     fieldLegPrice.offset = -1;
     fieldLegSettlType.offset = -1;
     fieldLegSettlDate.offset = -1;
     fieldLegLastPx.offset = -1;
}

void GroupQuoteEntries::reset(){
     buf = nullptr;
     fieldSymbolSfx.offset = -1;
     fieldSecurityID.offset = -1;
     fieldSecurityIDSource.offset = -1;
     for( auto g = groupsSecurityAltID.begin(); g != groupsSecurityAltID.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldProduct.offset = -1;
     fieldCFICode.offset = -1;
     fieldSecurityType.offset = -1;
     fieldSecuritySubType.offset = -1;
     fieldMaturityMonthYear.offset = -1;
     fieldMaturityDate.offset = -1;
     fieldPutOrCall.offset = -1;
     fieldCouponPaymentDate.offset = -1;
     fieldIssueDate.offset = -1;
     fieldRepoCollateralSecurityType.offset = -1;
     fieldRepurchaseTerm.offset = -1;
     fieldRepurchaseRate.offset = -1;
     fieldFactor.offset = -1;
     fieldCreditRating.offset = -1;
     fieldInstrRegistry.offset = -1;
     fieldCountryOfIssue.offset = -1;
     fieldStateOrProvinceOfIssue.offset = -1;
     fieldLocaleOfIssue.offset = -1;
     fieldRedemptionDate.offset = -1;
     fieldStrikePrice.offset = -1;
     fieldStrikeCurrency.offset = -1;
     fieldOptAttribute.offset = -1;
     fieldContractMultiplier.offset = -1;
     fieldCouponRate.offset = -1;
     fieldSecurityExchange.offset = -1;
     fieldIssuer.offset = -1;
     fieldEncodedIssuerLen.offset = -1;
     fieldEncodedIssuer.offset = -1;
     fieldSecurityDesc.offset = -1;
     fieldEncodedSecurityDescLen.offset = -1;
     fieldEncodedSecurityDesc.offset = -1;
     fieldPool.offset = -1;
     fieldContractSettlMonth.offset = -1;
     fieldCPProgram.offset = -1;
     fieldCPRegType.offset = -1;
     for( auto g = groupsEvents.begin(); g != groupsEvents.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldDatedDate.offset = -1;
     fieldInterestAccrualDate.offset = -1;
     fieldAgreementDesc.offset = -1;
     fieldAgreementID.offset = -1;
     fieldAgreementDate.offset = -1;
     fieldAgreementCurrency.offset = -1;
     fieldTerminationType.offset = -1;
     fieldStartDate.offset = -1;
     fieldEndDate.offset = -1;
     fieldDeliveryType.offset = -1;
     fieldMarginRatio.offset = -1;
     for( auto g = groupsUnderlyings.begin(); g != groupsUnderlyings.end() and g->getMessageBuffer(); ++g ) g->reset();
     for( auto g = groupsLegs.begin(); g != groupsLegs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupQuoteSets::reset(){
     buf = nullptr;
     fieldUnderlyingSymbol.offset = -1;
     fieldUnderlyingSymbolSfx.offset = -1;
     fieldUnderlyingSecurityID.offset = -1;
     fieldUnderlyingSecurityIDSource.offset = -1;
     for( auto g = groupsUnderlyingSecurityAltID.begin(); g != groupsUnderlyingSecurityAltID.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldUnderlyingProduct.offset = -1;
     fieldUnderlyingCFICode.offset = -1;
     fieldUnderlyingSecurityType.offset = -1;
     fieldUnderlyingSecuritySubType.offset = -1;
     fieldUnderlyingMaturityMonthYear.offset = -1;
     fieldUnderlyingMaturityDate.offset = -1;
     fieldUnderlyingPutOrCall.offset = -1;
     fieldUnderlyingCouponPaymentDate.offset = -1;
     fieldUnderlyingIssueDate.offset = -1;
     fieldUnderlyingRepoCollateralSecurityType.offset = -1;
     fieldUnderlyingRepurchaseTerm.offset = -1;
     fieldUnderlyingRepurchaseRate.offset = -1;
     fieldUnderlyingFactor.offset = -1;
     fieldUnderlyingCreditRating.offset = -1;
     fieldUnderlyingInstrRegistry.offset = -1;
     fieldUnderlyingCountryOfIssue.offset = -1;
     fieldUnderlyingStateOrProvinceOfIssue.offset = -1;
     fieldUnderlyingLocaleOfIssue.offset = -1;
     fieldUnderlyingRedemptionDate.offset = -1;
     fieldUnderlyingStrikePrice.offset = -1;
     fieldUnderlyingStrikeCurrency.offset = -1;
     fieldUnderlyingOptAttribute.offset = -1;
     fieldUnderlyingContractMultiplier.offset = -1;
     fieldUnderlyingCouponRate.offset = -1;
     fieldUnderlyingSecurityExchange.offset = -1;
     fieldUnderlyingIssuer.offset = -1;
     fieldEncodedUnderlyingIssuerLen.offset = -1;
     fieldEncodedUnderlyingIssuer.offset = -1;
     fieldUnderlyingSecurityDesc.offset = -1;
     fieldEncodedUnderlyingSecurityDescLen.offset = -1;
     fieldEncodedUnderlyingSecurityDesc.offset = -1;
     fieldUnderlyingCPProgram.offset = -1;
     fieldUnderlyingCPRegType.offset = -1;
     fieldUnderlyingCurrency.offset = -1;
     fieldUnderlyingQty.offset = -1;
     fieldUnderlyingPx.offset = -1;
     fieldUnderlyingDirtyPrice.offset = -1;
     fieldUnderlyingEndPrice.offset = -1;
     fieldUnderlyingStartValue.offset = -1;
     fieldUnderlyingCurrentValue.offset = -1;
     fieldUnderlyingEndValue.offset = -1;
     for( auto g = groupsUnderlyingStips.begin(); g != groupsUnderlyingStips.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldTotNoQuoteEntries.offset = -1;
     fieldLastFragment.offset = -1;
     for( auto g = groupsQuoteEntries.begin(); g != groupsQuoteEntries.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupSecurityTypes::reset(){
     buf = nullptr;
     fieldSecuritySubType.offset = -1;
     fieldProduct.offset = -1;
     fieldCFICode.offset = -1;
}

void GroupNested3PartyIDs::reset(){
     buf = nullptr;
     fieldNested3PartyIDSource.offset = -1;
     fieldNested3PartyRole.offset = -1;
     for( auto g = groupsNested3PartySubIDs.begin(); g != groupsNested3PartySubIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupPositions::reset(){
     buf = nullptr;
     fieldLongQty.offset = -1;
     fieldShortQty.offset = -1;
     fieldPosQtyStatus.offset = -1;
     for( auto g = groupsNestedPartyIDs.begin(); g != groupsNestedPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
}

void GroupAffectedOrders::reset(){
     buf = nullptr;
     fieldAffectedOrderID.offset = -1;
     fieldAffectedSecondaryOrderID.offset = -1;
}

void GroupExecs::reset(){
     buf = nullptr;
     fieldExecID.offset = -1;
     fieldSecondaryExecID.offset = -1;
     fieldLastPx.offset = -1;
     fieldLastParPx.offset = -1;
     fieldLastCapacity.offset = -1;
}

void GroupMsgTypes::reset(){
     buf = nullptr;
     fieldMsgDirection.offset = -1;
}

void GroupBidComponents::reset(){
     buf = nullptr;
     fieldSide.offset = -1;
     fieldTradingSessionID.offset = -1;
     fieldTradingSessionSubID.offset = -1;
     fieldNetGrossInd.offset = -1;
     fieldSettlType.offset = -1;
     fieldSettlDate.offset = -1;
     fieldAccount.offset = -1;
     fieldAcctIDSource.offset = -1;
}

void GroupSettlInst::reset(){
     buf = nullptr;
     fieldSettlInstTransType.offset = -1;
     fieldSettlInstRefID.offset = -1;
     for( auto g = groupsPartyIDs.begin(); g != groupsPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldSide.offset = -1;
     fieldProduct.offset = -1;
     fieldSecurityType.offset = -1;
     fieldCFICode.offset = -1;
     fieldEffectiveTime.offset = -1;
     fieldExpireTime.offset = -1;
     fieldLastUpdateTime.offset = -1;
     fieldSettlDeliveryType.offset = -1;
     fieldStandInstDbType.offset = -1;
     fieldStandInstDbName.offset = -1;
     fieldStandInstDbID.offset = -1;
     for( auto g = groupsDlvyInst.begin(); g != groupsDlvyInst.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldPaymentMethod.offset = -1;
     fieldPaymentRef.offset = -1;
     fieldCardHolderName.offset = -1;
     fieldCardNumber.offset = -1;
     fieldCardStartDate.offset = -1;
     fieldCardExpDate.offset = -1;
     fieldCardIssNum.offset = -1;
     fieldPaymentDate.offset = -1;
     fieldPaymentRemitterID.offset = -1;
}

void GroupInstrAttrib::reset(){
     buf = nullptr;
     fieldInstrAttribValue.offset = -1;
}

void GroupMiscFees::reset(){
     buf = nullptr;
     fieldMiscFeeCurr.offset = -1;
     fieldMiscFeeType.offset = -1;
     fieldMiscFeeBasis.offset = -1;
}

void GroupQuoteQualifiers::reset(){
     buf = nullptr;
}

void GroupDistribInsts::reset(){
     buf = nullptr;
     fieldDistribPercentage.offset = -1;
     fieldCashDistribCurr.offset = -1;
     fieldCashDistribAgentName.offset = -1;
     fieldCashDistribAgentCode.offset = -1;
     fieldCashDistribAgentAcctNumber.offset = -1;
     fieldCashDistribPayRef.offset = -1;
     fieldCashDistribAgentAcctName.offset = -1;
}

void GroupTrdRegTimestamps::reset(){
     buf = nullptr;
     fieldTrdRegTimestampType.offset = -1;
     fieldTrdRegTimestampOrigin.offset = -1;
}

void GroupAltMDSource::reset(){
     buf = nullptr;
}

void GroupSides::reset(){
     buf = nullptr;
     fieldOrigClOrdID.offset = -1;
     fieldClOrdID.offset = -1;
     fieldSecondaryClOrdID.offset = -1;
     fieldClOrdLinkID.offset = -1;
     fieldOrigOrdModTime.offset = -1;
     for( auto g = groupsPartyIDs.begin(); g != groupsPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldTradeOriginationDate.offset = -1;
     fieldTradeDate.offset = -1;
     fieldOrderQty.offset = -1;
     fieldCashOrderQty.offset = -1;
     fieldOrderPercent.offset = -1;
     fieldRoundingDirection.offset = -1;
     fieldRoundingModulus.offset = -1;
     fieldComplianceID.offset = -1;
     fieldText.offset = -1;
     fieldEncodedTextLen.offset = -1;
     fieldEncodedText.offset = -1;
}

void GroupRoutingIDs::reset(){
     buf = nullptr;
     fieldRoutingID.offset = -1;
}

void GroupPosAmt::reset(){
     buf = nullptr;
     fieldPosAmt.offset = -1;
}

void GroupLinesOfText::reset(){
     buf = nullptr;
     fieldEncodedTextLen.offset = -1;
     fieldEncodedText.offset = -1;
}

void GroupIOIQualifiers::reset(){
     buf = nullptr;
}

void GroupDates::reset(){
     buf = nullptr;
     fieldTransactTime.offset = -1;
}

void GroupMDEntryTypes::reset(){
     buf = nullptr;
}

void GroupRelatedSym::reset(){
     buf = nullptr;
     fieldSymbolSfx.offset = -1;
     fieldSecurityID.offset = -1;
     fieldSecurityIDSource.offset = -1;
     for( auto g = groupsSecurityAltID.begin(); g != groupsSecurityAltID.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldProduct.offset = -1;
     fieldCFICode.offset = -1;
     fieldSecurityType.offset = -1;
     fieldSecuritySubType.offset = -1;
     fieldMaturityMonthYear.offset = -1;
     fieldMaturityDate.offset = -1;
     fieldPutOrCall.offset = -1;
     fieldCouponPaymentDate.offset = -1;
     fieldIssueDate.offset = -1;
     fieldRepoCollateralSecurityType.offset = -1;
     fieldRepurchaseTerm.offset = -1;
     fieldRepurchaseRate.offset = -1;
     fieldFactor.offset = -1;
     fieldCreditRating.offset = -1;
     fieldInstrRegistry.offset = -1;
     fieldCountryOfIssue.offset = -1;
     fieldStateOrProvinceOfIssue.offset = -1;
     fieldLocaleOfIssue.offset = -1;
     fieldRedemptionDate.offset = -1;
     fieldStrikePrice.offset = -1;
     fieldStrikeCurrency.offset = -1;
     fieldOptAttribute.offset = -1;
     fieldContractMultiplier.offset = -1;
     fieldCouponRate.offset = -1;
     fieldSecurityExchange.offset = -1;
     fieldIssuer.offset = -1;
     fieldEncodedIssuerLen.offset = -1;
     fieldEncodedIssuer.offset = -1;
     fieldSecurityDesc.offset = -1;
     fieldEncodedSecurityDescLen.offset = -1;
     fieldEncodedSecurityDesc.offset = -1;
     fieldPool.offset = -1;
     fieldContractSettlMonth.offset = -1;
     fieldCPProgram.offset = -1;
     fieldCPRegType.offset = -1;
     for( auto g = groupsEvents.begin(); g != groupsEvents.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldDatedDate.offset = -1;
     fieldInterestAccrualDate.offset = -1;
}

void GroupContraBrokers::reset(){
     buf = nullptr;
     fieldContraTrader.offset = -1;
     fieldContraTradeQty.offset = -1;
     fieldContraTradeTime.offset = -1;
     fieldContraLegRefID.offset = -1;
}

void GroupTrades::reset(){
     buf = nullptr;
     fieldSecondaryTradeReportID.offset = -1;
}

void GroupStrikes::reset(){
     buf = nullptr;
     fieldSymbolSfx.offset = -1;
     fieldSecurityID.offset = -1;
     fieldSecurityIDSource.offset = -1;
     for( auto g = groupsSecurityAltID.begin(); g != groupsSecurityAltID.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldProduct.offset = -1;
     fieldCFICode.offset = -1;
     fieldSecurityType.offset = -1;
     fieldSecuritySubType.offset = -1;
     fieldMaturityMonthYear.offset = -1;
     fieldMaturityDate.offset = -1;
     fieldPutOrCall.offset = -1;
     fieldCouponPaymentDate.offset = -1;
     fieldIssueDate.offset = -1;
     fieldRepoCollateralSecurityType.offset = -1;
     fieldRepurchaseTerm.offset = -1;
     fieldRepurchaseRate.offset = -1;
     fieldFactor.offset = -1;
     fieldCreditRating.offset = -1;
     fieldInstrRegistry.offset = -1;
     fieldCountryOfIssue.offset = -1;
     fieldStateOrProvinceOfIssue.offset = -1;
     fieldLocaleOfIssue.offset = -1;
     fieldRedemptionDate.offset = -1;
     fieldStrikePrice.offset = -1;
     fieldStrikeCurrency.offset = -1;
     fieldOptAttribute.offset = -1;
     fieldContractMultiplier.offset = -1;
     fieldCouponRate.offset = -1;
     fieldSecurityExchange.offset = -1;
     fieldIssuer.offset = -1;
     fieldEncodedIssuerLen.offset = -1;
     fieldEncodedIssuer.offset = -1;
     fieldSecurityDesc.offset = -1;
     fieldEncodedSecurityDescLen.offset = -1;
     fieldEncodedSecurityDesc.offset = -1;
     fieldPool.offset = -1;
     fieldContractSettlMonth.offset = -1;
     fieldCPProgram.offset = -1;
     fieldCPRegType.offset = -1;
     for( auto g = groupsEvents.begin(); g != groupsEvents.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldDatedDate.offset = -1;
     fieldInterestAccrualDate.offset = -1;
}

void GroupBidDescriptors::reset(){
     buf = nullptr;
     fieldBidDescriptor.offset = -1;
     fieldSideValueInd.offset = -1;
     fieldLiquidityValue.offset = -1;
     fieldLiquidityNumSecurities.offset = -1;
     fieldLiquidityPctLow.offset = -1;
     fieldLiquidityPctHigh.offset = -1;
     fieldEFPTrackingError.offset = -1;
     fieldFairValue.offset = -1;
     fieldOutsideIndexPct.offset = -1;
     fieldValueOfFutures.offset = -1;
}

void GroupCompIDs::reset(){
     buf = nullptr;
     fieldRefSubID.offset = -1;
     fieldLocationID.offset = -1;
     fieldDeskID.offset = -1;
}

void GroupLegAllocs::reset(){
     buf = nullptr;
     fieldLegIndividualAllocID.offset = -1;
     for( auto g = groupsNested2PartyIDs.begin(); g != groupsNested2PartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldLegAllocQty.offset = -1;
     fieldLegAllocAcctIDSource.offset = -1;
     fieldLegSettlCurrency.offset = -1;
}

void GroupRegistDtls::reset(){
     buf = nullptr;
     fieldRegistEmail.offset = -1;
     fieldMailingDtls.offset = -1;
     fieldMailingInst.offset = -1;
     for( auto g = groupsNestedPartyIDs.begin(); g != groupsNestedPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldOwnerType.offset = -1;
     fieldDateOfBirth.offset = -1;
     fieldInvestorCountryOfResidence.offset = -1;
}

void GroupContAmts::reset(){
     buf = nullptr;
     fieldContAmtValue.offset = -1;
     fieldContAmtCurr.offset = -1;
}

void GroupMDEntries::reset(){
     buf = nullptr;
     fieldMDEntryPx.offset = -1;
     fieldCurrency.offset = -1;
     fieldMDEntrySize.offset = -1;
     fieldMDEntryDate.offset = -1;
     fieldMDEntryTime.offset = -1;
     fieldTickDirection.offset = -1;
     fieldMDMkt.offset = -1;
     fieldTradingSessionID.offset = -1;
     fieldTradingSessionSubID.offset = -1;
     fieldQuoteCondition.offset = -1;
     fieldTradeCondition.offset = -1;
     fieldMDEntryOriginator.offset = -1;
     fieldLocationID.offset = -1;
     fieldDeskID.offset = -1;
     fieldOpenCloseSettlFlag.offset = -1;
     fieldTimeInForce.offset = -1;
     fieldExpireDate.offset = -1;
     fieldExpireTime.offset = -1;
     fieldMinQty.offset = -1;
     fieldExecInst.offset = -1;
     fieldSellerDays.offset = -1;
     fieldOrderID.offset = -1;
     fieldQuoteEntryID.offset = -1;
     fieldMDEntryBuyer.offset = -1;
     fieldMDEntrySeller.offset = -1;
     fieldNumberOfOrders.offset = -1;
     fieldMDEntryPositionNo.offset = -1;
     fieldScope.offset = -1;
     fieldPriceDelta.offset = -1;
     fieldText.offset = -1;
     fieldEncodedTextLen.offset = -1;
     fieldEncodedText.offset = -1;
}
// end of Groups.cxx

} // namespace fix44
