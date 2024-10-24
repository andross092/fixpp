#include <vector>

#include <order/Groups.h>


namespace order
{

// start of Groups.cxx

// Generated

// -------------------------------------- getMessageName -------------------------------
const char * GroupLegStipulations::getMessageName(){
     return "LegStipulations";
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


// -------------------------------------- constructor ----------------------------------------
GroupLegStipulations::GroupLegStipulations(){

}

GroupNestedPartySubIDs::GroupNestedPartySubIDs(){

}

GroupNestedPartyIDs::GroupNestedPartyIDs(){

     groupsNestedPartySubIDs.assign( 10, {} );

}

GroupLegs::GroupLegs(){

     groupsLegStipulations.assign( 10, {} );

     groupsNestedPartyIDs.assign( 10, {} );

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

   case FieldLegSide::RAW :
     PRINT_FIELD(LegSide) 
     group->fieldLegSide.offset = gpos;
     break;

   case FieldLegQty::RAW :
     PRINT_FIELD(LegQty) 
     group->fieldLegQty.offset = gpos;
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

   case FieldLegSide::RAW :
     break;

   case FieldLegQty::RAW :
     break;

   case FieldNoLegStipulations::RAW :
     isGroupStart = true;
     gotoNextField( fix, pos );
     pos += GroupLegStipulations::skip( fix+pos, len - pos );
     break;

   case FieldLegPositionEffect::RAW :
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

   case FieldLegLastPx::RAW :
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

GetDepthMethod GroupNestedPartySubIDs::groupGetDepthMethods[] = {
   nullptr };

GetDepthMethod GroupNestedPartyIDs::groupGetDepthMethods[] = {
   GroupNestedPartySubIDs::getFieldDepth,
   nullptr };

GetDepthMethod GroupLegs::groupGetDepthMethods[] = {
   GroupLegStipulations::getFieldDepth,
   GroupNestedPartyIDs::getFieldDepth,
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
     case FieldLegSide::RAW :
     case FieldLegQty::RAW :
     case FieldNoLegStipulations::RAW :
     case FieldLegPositionEffect::RAW :
     case FieldNoNestedPartyIDs::RAW :
     case FieldLegRefID::RAW :
     case FieldLegPrice::RAW :
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
const char * GroupLegStipulations::getFieldValue( unsigned tag ) const {
   if( buf == nullptr ) return nullptr;
   switch( tag ){
     case FieldLegStipulationType::KEY : return fieldLegStipulationType.offset >= 0 ? buf + fieldLegStipulationType.offset : nullptr;
     case FieldLegStipulationValue::KEY : return fieldLegStipulationValue.offset >= 0 ? buf + fieldLegStipulationValue.offset : nullptr;

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
     case FieldLegSide::KEY : return fieldLegSide.offset >= 0 ? buf + fieldLegSide.offset : nullptr;
     case FieldLegQty::KEY : return fieldLegQty.offset >= 0 ? buf + fieldLegQty.offset : nullptr;
     case FieldNoLegStipulations::KEY : return fieldNoLegStipulations.offset >= 0 ? buf + fieldNoLegStipulations.offset : nullptr;
     case FieldLegPositionEffect::KEY : return fieldLegPositionEffect.offset >= 0 ? buf + fieldLegPositionEffect.offset : nullptr;
     case FieldNoNestedPartyIDs::KEY : return fieldNoNestedPartyIDs.offset >= 0 ? buf + fieldNoNestedPartyIDs.offset : nullptr;
     case FieldLegRefID::KEY : return fieldLegRefID.offset >= 0 ? buf + fieldLegRefID.offset : nullptr;
     case FieldLegPrice::KEY : return fieldLegPrice.offset >= 0 ? buf + fieldLegPrice.offset : nullptr;
     case FieldLegLastPx::KEY : return fieldLegLastPx.offset >= 0 ? buf + fieldLegLastPx.offset : nullptr;

     default : return nullptr; 
   }
   return nullptr;
}


namespace {
const std::vector<unsigned> LegStipulations_knownFields = { FieldLegStipulationType::KEY
, FieldLegStipulationValue::KEY
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
, FieldLegSide::KEY
, FieldLegQty::KEY
, FieldNoLegStipulations::KEY
, FieldLegPositionEffect::KEY
, FieldNoNestedPartyIDs::KEY
, FieldLegRefID::KEY
, FieldLegPrice::KEY
, FieldLegLastPx::KEY
};

}


const std::vector<unsigned> & GroupLegStipulations::getKnownFields(){ return LegStipulations_knownFields; }

const std::vector<unsigned> & GroupNestedPartySubIDs::getKnownFields(){ return NestedPartySubIDs_knownFields; }

const std::vector<unsigned> & GroupNestedPartyIDs::getKnownFields(){ return NestedPartyIDs_knownFields; }

const std::vector<unsigned> & GroupLegs::getKnownFields(){ return Legs_knownFields; }


// -------------------------------------- reset ----------------------------------------
void GroupLegStipulations::reset(){
     buf = nullptr;
     fieldLegStipulationValue.offset = -1;
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
     fieldLegSide.offset = -1;
     fieldLegQty.offset = -1;
     for( auto g = groupsLegStipulations.begin(); g != groupsLegStipulations.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldLegPositionEffect.offset = -1;
     for( auto g = groupsNestedPartyIDs.begin(); g != groupsNestedPartyIDs.end() and g->getMessageBuffer(); ++g ) g->reset();
     fieldLegRefID.offset = -1;
     fieldLegPrice.offset = -1;
     fieldLegLastPx.offset = -1;
}
// end of Groups.cxx

} // namespace order
