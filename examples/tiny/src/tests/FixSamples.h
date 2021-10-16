#pragma once

// Lazy: definition and declaration in .h

#define I "\001"

#define EXAMPLE_EXEC_REPORT \
"8=FIX.4.4" I "9=156" I "35=8" I "49=foo" I "56=bar" I "52=20071123-05:30:00.000" I "11=OID123456" I "150=E" I "39=A" I "55=XYZ" I "167=CS" I "54=1" I "38=15" I "40=2" I "44=15.001" I "58=EQUITYTESTING" I "59=0" I "32=0" I "31=0" I "151=15" I "14=0" I "6=0" I "10=118" I 

#define EXAMPLE_LARGE_EXEC_REPORT \
"8=FIX.4.4" I "9=332" I "35=8" I "49=foo" I "56=bar" I "52=20071123-05:30:00.000" I "11=OID123456" I "150=E" I "39=A" I "55=XYZ" I "167=CS" I "54=1" I "38=15" I "40=2" I "44=15.001" I "58=EQUITYTESTING" I "59=0" I "32=0" I "31=0" I "151=15" I "14=0" I "6=0" I  \
"555=2" I "600=SYM1" I "624=0" I "687=10" I "683=1" I  \
                             "688=A" I "689=a" I  \
                             "564=1" I  \
                             "539=2" I "524=PARTY1" I "525=S" I  \
                                   "524=PARTY2" I "525=S" I  \
                                   "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
      "600=SYM2" I "624=1" I "687=20" I "683=2" I  \
                             "688=A" I "689=a" I  \
                             "688=B" I "689=b" I  \
"10=027" I

#define EXAMPLE_MARKETDATA_FULL_REFRESH \
"8=FIX.4.4" I "9=315" I "35=W" I "49=foo" I "56=bar" I "34=1234" I "52=20190101-01:01:01.000" I "55=EUR/USD" I \
"268=6" I "269=1" I "290=1" I "270=1.21" I "15=USD" I "271=1000000" I "269=1" I "290=2" I "270=1.211" I "15=USD" I "271=2000000" I "269=1" I "290=3" I "270=1.221" I "15=USD" I "271=3000000" I "269=1" I "290=4" I "270=1.2315" I "15=USD" I "271=4000000" I "269=0" I "290=5" I "270=1.201" I "15=USD" I "271=1000000" I "269=0" I "290=6" I "270=1.205" I "15=USD" I "271=2000000" I "10=075" I 

#define EXAMPLE_SECURITY_DEFINITION \
"8=FIX.4.4" I "9=1704" I "35=d" I "49=foo" I "56=bar" I "34=1234" I "52=20190101-01:01:01.000" I \
"320=SECREQ12345" I "55=VERY_LARGE_STRATEGY" I "15=XYZ" I\
"555=16" I \
"600=SYM1" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=2" I "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SYM2" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"600=SYM3" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=2" I "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SYM4" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"600=SYM5" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=2" I "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SYM6" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"600=SYM7" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=2" I "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SYM8" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"600=SYM9" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=2" I "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SY10" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"600=SY11" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=2" I "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SY12" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"600=SY13" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=2" I "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SY14" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"600=SY15" I "624=0" I "687=10" I "683=1" I  \
             "688=A" I "689=a" I  \
             "564=1" I  \
             "539=16" I \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
                       "524=PARTY1" I "525=S" I  \
                       "524=PARTY2" I "525=S" I  \
             "804=2" I "545=S1" I "805=1" I "545=S2" I "805=2" I  \
"600=SY16" I "624=1" I "687=20" I "683=2" I  \
             "688=A" I "689=a" I  \
             "688=B" I "689=b" I  \
"10=047" I


const char * FIX_BUFFER_EXEC_REPORT         = EXAMPLE_EXEC_REPORT;
const char * FIX_BUFFER_LARGE_EXEC_REPORT   = EXAMPLE_LARGE_EXEC_REPORT;
const char * FIX_BUFFER_MD_FULL_REFRESH     = EXAMPLE_MARKETDATA_FULL_REFRESH;
const char * FIX_BUFFER_SECURITY_DEFINITION = EXAMPLE_SECURITY_DEFINITION;
const char * allTreeExamples = EXAMPLE_EXEC_REPORT EXAMPLE_LARGE_EXEC_REPORT EXAMPLE_MARKETDATA_FULL_REFRESH EXAMPLE_SECURITY_DEFINITION;

