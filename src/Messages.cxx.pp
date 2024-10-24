<com> Generated
<com> -------------------------- getMessageName getMessageType -------------------------

const std::string EMPTY_STRING;

#define FIX_FIELD_BEGIN_STRING( STR )

#define FIX_MSG_BEGIN(NAME,TYPE) \
const char * Message##NAME::getMessageName(){\
<n2> return #NAME;\
<nl>}\
<nl>\
<nl>const std::string & Message##NAME::getMessageType(){\
<n2> return MsgTypeEnums::TYPE.str;\
<nl>}

#define FIX_MSG_FIELD(NAME)
#define FIX_MSG_GROUP(NAME)
#define FIX_MSG_END

#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<com> -------------------------------------- scan ----------------------------------------

#define FIX_MSG_BEGIN(NAME,TYPE) \
offset_t Message##NAME::scan( const char * fix, unsigned len ){\
<nl>buf = fix; \
<nl>offset_t prev = 0, pos = 0; \
<nl>while( pos < (int)len ) {\
<n1>  bool isGroupStart = false;\
<n1>  prev = pos;\
<n1>  raw_tag_t tag = nextRawTag( fix+pos, pos );\
<n1>  switch( tag ){\


#define FIX_MSG_FIELD(NAME) \
<n1>  case Field##NAME::RAW :\
<n2>    PRINT_FIELD(NAME) \
<n2>    field##NAME.offset = pos;\
<n2>    break;\

#define FIX_MSG_GROUP(NAME) \
<n1>  case FieldNo##NAME::RAW :\
<n2>    PRINT_FIELD(No##NAME) \
<n2>    fieldNo##NAME.offset = pos;\
<n2>    isGroupStart = true;\
<n2>    gotoNextField( fix, pos );\
<n2>    pos += Group##NAME::scan( groups##NAME, fix+pos, len - pos );\
<n2>    break;\

#define FIX_MSG_END \
<n1>  case FieldCheckSum::RAW :\
<n2>    PRINT_FIELD(CheckSum) \
<n2>    fieldCheckSum.offset = pos;\
<n2>    gotoNextField( fix, pos );\
<n2>    return pos; \
<nl>\
<n1>  default: PRINT_UNKNOWN\
<n2>    return prev;\
<n1>    }\
<n1>  if( ! isGroupStart ) gotoNextField( fix, pos );\
<nl>  }\
<nl>  return pos;\
<nl>}\

#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<com> -------------------------------------- skip ----------------------------------------

#define FIX_MSG_BEGIN(NAME,TYPE) \
offset_t Message##NAME::skip( const char * fix, unsigned len ) const\
<nl>{\
<nl>offset_t prev = 0, pos = 0; \
<nl>gotoNextField( fix, pos );\
<nl>while( pos < (int)len ) {\
<n1>  bool isGroupStart = false;\
<n1>  prev = pos;\
<n1>  raw_tag_t tag = nextRawTag( fix+pos, pos );\
<n1>  switch( tag ){\

        
#define FIX_MSG_FIELD(NAME) \
<n1>  case Field##NAME::RAW :\
<n2>    break;\

#define FIX_MSG_GROUP(NAME) \
<n1>  case FieldNo##NAME::RAW :\
<n2>    isGroupStart = true;\
<n2>    gotoNextField( fix, pos );\
<n2>    pos += Group##NAME::skip( fix+pos, len - pos );\
<n2>    break;\

#define FIX_MSG_END \
<n1>  case FieldCheckSum::RAW :\
<n2>    gotoNextField( fix, pos );\
<n2>    return pos;\
<nl>\
<n1>  default: PRINT_UNKNOWN\
<n2>    return prev;\
<n1>    }\
<n1>  if( ! isGroupStart ) gotoNextField( fix, pos );\
<nl>  }\
<nl>  return pos;\
<nl>}\

#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<com> ---------------------------------- fields ---------------------------------

#define FIX_MSG_BEGIN(NAME,TYPE) \
GetDepthMethod Message##NAME::groupGetDepthMethods[] = {

#define FIX_MSG_FIELD(NAME) <remove-me>

#define FIX_MSG_GROUP(NAME) \
<t1>Group##NAME::getFieldDepth,

#define FIX_MSG_END \
<t1>nullptr };\

#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<nl>

#define FIX_MSG_BEGIN(NAME,TYPE) \
FieldDepth Message##NAME::getFieldDepth( raw_tag_t tag ){\
<n1>  FieldDepth ret;\
<n1>  switch( tag ){\

#define FIX_MSG_FIELD(NAME) \
<t2>  case Field##NAME::RAW :

#define FIX_MSG_GROUP(NAME) \
<t2>  case FieldNo##NAME::RAW : 

#define FIX_MSG_END \
<t2>  case FieldCheckSum::RAW :\
<n2>  ret.depth = 0; \
<n2>  return ret; \
<n1>  }\
<n1>  for( auto m : groupGetDepthMethods ) if( m ){\
<n2>      FieldDepth gdepth = (*m)( tag ); \
<n2>      if( gdepth.depth >= 0 ) { return gdepth.inc(); }\
<n1>  }\
<n1>  return ret;\
<nl>}\


#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<nl>

#define FIX_MSG_BEGIN(NAME,TYPE) \
const char * Message##NAME::getFieldValue( unsigned tag ) const {\
<n1>  if( buf == nullptr ) return nullptr;\
<n1>  switch( tag ){\

#define FIX_MSG_FIELD(NAME) \
<t2>  case Field##NAME::KEY : return field##NAME.offset >= 0 ? buf + field##NAME.offset : nullptr; \

#define FIX_MSG_GROUP(NAME) \
<t2>  case FieldNo##NAME::KEY : return fieldNo##NAME.offset >= 0 ? buf + fieldNo##NAME.offset : nullptr; \

#define FIX_MSG_END \
<t2>  case FieldCheckSum::KEY : return fieldCheckSum.offset >= 0 ? buf + fieldCheckSum.offset : nullptr; \
<n2>  default :  return nullptr; \
<n1>  }\
<n1>  return nullptr;\
<nl>}\


#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<nl>

#define FIX_MSG_BEGIN(NAME,TYPE) \
const std::vector<tag_t> NAME##_knownFields = {

#define FIX_MSG_FIELD(NAME) Field##NAME::KEY,

#define FIX_MSG_GROUP(NAME) FieldNo##NAME::KEY,

#define FIX_MSG_END FieldCheckSum::KEY };

namespace {
#include <Messages.def>

}

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<nl>
#define FIX_MSG_BEGIN(NAME,TYPE) \
const std::vector<tag_t> & Message##NAME::getKnownFields(){ return NAME##_knownFields; }

#define FIX_MSG_FIELD(NAME) <remove-me>
#define FIX_MSG_GROUP(NAME) <remove-me>
#define FIX_MSG_END <remove-me>

#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<nl>

#define FIX_MSG_BEGIN(NAME,TYPE) \
<t1> case MsgTypeRaw_##TYPE :\
<n2> return Message##NAME::getFieldDepth;

#define FIX_MSG_FIELD(NAME)  <remove-me>
#define FIX_MSG_GROUP(NAME)  <remove-me>
#define FIX_MSG_END <remove-me>

GetDepthMethod getTagDepthMethodByRawMsgType( raw_enum_t rawMsgType ){
  switch( rawMsgType ){
#include <Messages.def>
  }
  return nullptr;
}

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP


<com> -------------------------------------- reset ----------------------------------------


#define FIX_MSG_BEGIN(NAME,TYPE) \
void Message##NAME::reset(){\
<n2> buf = nullptr;
        
#define FIX_MSG_FIELD(NAME) <t2> field##NAME.offset = -1;

#define FIX_MSG_GROUP(NAME) \
<t2> for( auto g = groups##NAME.begin(); g != groups##NAME.end() and g->getMessageBuffer(); ++g ) g->reset();

#define FIX_MSG_END \
<t2> fieldCheckSum.offset = -1;\
<nl>}\

#include <Messages.def>

#undef FIX_MSG_FIELD
#undef FIX_MSG_BEGIN
#undef FIX_MSG_END
#undef FIX_MSG_GROUP

<com> -------------------------------------- ParserDispatcher ----------------------------------------

#define FIX_MSG_FIELD(NAME) 
#define FIX_MSG_GROUP(NAME) 
#define FIX_MSG_END

const char * ParserDispatcher::parseAndDipatch( const char * buf, unsigned len, bool resetMessage )
{
    if( resetMessage ) 
    {
        _msgHeader.reset();    
    }
    offset_t pos = _msgHeader.scan( buf, len );

    unsigned bodyLength = _msgHeader.getBodyLength();
    const char * endOfMessage = _msgHeader.ptrToMsgType() + bodyLength + 4; <icom> 7 for checkSum - 3 for msg type tag
    if( endOfMessage - buf > len )
    {
        return nullptr;
    }

    const raw_enum_t msgType = toRawEnum( _msgHeader.ptrToMsgType() );
    if( ignoreMessage( msgType ) )
    {
      return endOfMessage;
    }

    buf += pos;
    switch( msgType )
    {
#undef FIX_MSG_BEGIN
#define FIX_MSG_BEGIN(NAME,TYPE) \
<nl><com> case-begin-TYPE\
<n3>case MsgTypeRaw_##TYPE : {\
<n3>  if( resetMessage ) _msg##NAME.reset();\
<n3>  pos = _msg##NAME.scan( buf, len - pos );\
<n3>  onMessage( _msg##NAME );\
<n3>  break;\
<n3>}\
<com> case-end-TYPE
#include <Messages.def>
      default:
        onUnknownMessage( msgType );
        return endOfMessage;
    }
    return buf + pos;
}

#undef FIX_MSG_BEGIN
#define FIX_MSG_BEGIN(NAME,TYPE) void ParserDispatcher::onMessage( Message##NAME & msg )\
<nl>{\
<n1>  unprocessedMessage( MsgTypeRaw_##TYPE, msg ); \
<n1>  msg.reset(); \
<nl>}

#include <Messages.def>
