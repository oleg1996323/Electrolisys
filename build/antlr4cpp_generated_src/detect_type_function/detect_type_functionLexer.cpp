
// Generated from /home/oster/Electrolisys/grammar/detect_type_function.g4 by ANTLR 4.13.1


#include "detect_type_functionLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Detect_type_functionLexerStaticData final {
  Detect_type_functionLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Detect_type_functionLexerStaticData(const Detect_type_functionLexerStaticData&) = delete;
  Detect_type_functionLexerStaticData(Detect_type_functionLexerStaticData&&) = delete;
  Detect_type_functionLexerStaticData& operator=(const Detect_type_functionLexerStaticData&) = delete;
  Detect_type_functionLexerStaticData& operator=(Detect_type_functionLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag detect_type_functionlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Detect_type_functionLexerStaticData *detect_type_functionlexerLexerStaticData = nullptr;

void detect_type_functionlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (detect_type_functionlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(detect_type_functionlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Detect_type_functionLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "A", "B", 
      "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", 
      "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "VARIABLE", "DATABASE", 
      "WS", "EOL", "UINT", "ADD", "SUB", "MUL", "DIV", "POW", "SUMPRODUCT", 
      "SUMPRODUCT_I", "SUM", "SUM_I", "PRODUCT", "PRODUCT_I", "LN", "LG", 
      "LOG_X", "EXP", "SQRT", "PI", "COS", "SIN", "ASIN", "ACOS", "FACTORIAL", 
      "QUOTE", "ASTERISK", "INT", "EXPONENT", "FLOAT", "ID_NUMBER", "STRING"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "';'", "'VAR('", "'['", "']'", "'\"'", "", "", "", 
      "", "", "'+'", "'-'", "'*'", "'/'", "'^'", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "'''"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "VARIABLE", "DATABASE", "WS", "EOL", 
      "UINT", "ADD", "SUB", "MUL", "DIV", "POW", "SUMPRODUCT", "SUMPRODUCT_I", 
      "SUM", "SUM_I", "PRODUCT", "PRODUCT_I", "LN", "LG", "LOG_X", "EXP", 
      "SQRT", "PI", "COS", "SIN", "ASIN", "ACOS", "FACTORIAL", "QUOTE", 
      "ASTERISK", "EXPONENT", "FLOAT", "ID_NUMBER", "STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,40,388,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,
  	7,63,2,64,7,64,2,65,7,65,2,66,7,66,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,
  	11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,
  	18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,
  	25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,
  	32,1,32,1,33,1,33,1,33,1,33,3,33,209,8,33,1,33,5,33,212,8,33,10,33,12,
  	33,215,9,33,1,34,1,34,1,34,1,34,1,34,1,34,5,34,223,8,34,10,34,12,34,226,
  	9,34,1,34,1,34,1,34,1,35,4,35,232,8,35,11,35,12,35,233,1,35,1,35,1,36,
  	3,36,239,8,36,1,36,1,36,1,37,4,37,244,8,37,11,37,12,37,245,1,37,3,37,
  	249,8,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,
  	1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,45,
  	1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,47,1,47,1,47,1,47,
  	1,47,1,48,1,48,1,48,1,48,1,49,1,49,1,49,1,50,1,50,1,50,1,51,1,51,1,51,
  	1,51,1,51,1,51,1,52,1,52,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,54,1,54,
  	1,54,1,55,1,55,1,55,1,55,1,56,1,56,1,56,1,56,1,57,1,57,1,57,1,58,1,58,
  	1,58,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,59,1,60,1,60,1,61,
  	1,61,4,61,348,8,61,11,61,12,61,349,1,62,3,62,353,8,62,1,62,1,62,1,63,
  	1,63,1,63,1,64,1,64,1,64,1,64,3,64,364,8,64,1,65,4,65,367,8,65,11,65,
  	12,65,368,1,66,1,66,5,66,373,8,66,10,66,12,66,376,9,66,1,66,1,66,1,66,
  	5,66,381,8,66,10,66,12,66,384,9,66,1,66,3,66,387,8,66,0,0,67,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,0,17,0,19,0,21,0,23,0,25,0,27,0,29,0,31,0,33,
  	0,35,0,37,0,39,0,41,0,43,0,45,0,47,0,49,0,51,0,53,0,55,0,57,0,59,0,61,
  	0,63,0,65,0,67,8,69,9,71,10,73,11,75,12,77,13,79,14,81,15,83,16,85,17,
  	87,18,89,19,91,20,93,21,95,22,97,23,99,24,101,25,103,26,105,27,107,28,
  	109,29,111,30,113,31,115,32,117,33,119,34,121,35,123,36,125,0,127,37,
  	129,38,131,39,133,40,1,0,35,2,0,65,65,97,97,2,0,66,66,98,98,2,0,67,67,
  	99,99,2,0,68,68,100,100,2,0,69,69,101,101,2,0,70,70,102,102,2,0,71,71,
  	103,103,2,0,72,72,104,104,2,0,73,73,105,105,2,0,74,74,106,106,2,0,75,
  	75,107,107,2,0,76,76,108,108,2,0,77,77,109,109,2,0,78,78,110,110,2,0,
  	79,79,111,111,2,0,80,80,112,112,2,0,81,81,113,113,2,0,82,82,114,114,2,
  	0,83,83,115,115,2,0,84,84,116,116,2,0,85,85,117,117,2,0,86,86,118,118,
  	2,0,87,87,119,119,2,0,88,88,120,120,2,0,89,89,121,121,2,0,90,90,122,122,
  	2,0,65,90,97,122,3,0,48,57,65,90,97,122,4,0,48,57,65,90,95,95,97,122,
  	5,0,32,33,35,35,39,41,44,44,59,59,2,0,9,9,32,32,1,0,48,57,2,0,43,43,45,
  	45,1,0,34,34,1,0,39,39,375,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,
  	0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,
  	1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,
  	0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,
  	0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,0,111,1,0,0,0,
  	0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,0,121,1,0,0,0,
  	0,123,1,0,0,0,0,127,1,0,0,0,0,129,1,0,0,0,0,131,1,0,0,0,0,133,1,0,0,0,
  	1,135,1,0,0,0,3,137,1,0,0,0,5,139,1,0,0,0,7,141,1,0,0,0,9,146,1,0,0,0,
  	11,148,1,0,0,0,13,150,1,0,0,0,15,152,1,0,0,0,17,154,1,0,0,0,19,156,1,
  	0,0,0,21,158,1,0,0,0,23,160,1,0,0,0,25,162,1,0,0,0,27,164,1,0,0,0,29,
  	166,1,0,0,0,31,168,1,0,0,0,33,170,1,0,0,0,35,172,1,0,0,0,37,174,1,0,0,
  	0,39,176,1,0,0,0,41,178,1,0,0,0,43,180,1,0,0,0,45,182,1,0,0,0,47,184,
  	1,0,0,0,49,186,1,0,0,0,51,188,1,0,0,0,53,190,1,0,0,0,55,192,1,0,0,0,57,
  	194,1,0,0,0,59,196,1,0,0,0,61,198,1,0,0,0,63,200,1,0,0,0,65,202,1,0,0,
  	0,67,204,1,0,0,0,69,216,1,0,0,0,71,231,1,0,0,0,73,238,1,0,0,0,75,243,
  	1,0,0,0,77,250,1,0,0,0,79,252,1,0,0,0,81,254,1,0,0,0,83,256,1,0,0,0,85,
  	258,1,0,0,0,87,260,1,0,0,0,89,271,1,0,0,0,91,275,1,0,0,0,93,279,1,0,0,
  	0,95,283,1,0,0,0,97,291,1,0,0,0,99,295,1,0,0,0,101,298,1,0,0,0,103,301,
  	1,0,0,0,105,307,1,0,0,0,107,311,1,0,0,0,109,316,1,0,0,0,111,319,1,0,0,
  	0,113,323,1,0,0,0,115,327,1,0,0,0,117,330,1,0,0,0,119,333,1,0,0,0,121,
  	343,1,0,0,0,123,345,1,0,0,0,125,352,1,0,0,0,127,356,1,0,0,0,129,359,1,
  	0,0,0,131,366,1,0,0,0,133,386,1,0,0,0,135,136,5,40,0,0,136,2,1,0,0,0,
  	137,138,5,41,0,0,138,4,1,0,0,0,139,140,5,59,0,0,140,6,1,0,0,0,141,142,
  	5,86,0,0,142,143,5,65,0,0,143,144,5,82,0,0,144,145,5,40,0,0,145,8,1,0,
  	0,0,146,147,5,91,0,0,147,10,1,0,0,0,148,149,5,93,0,0,149,12,1,0,0,0,150,
  	151,5,34,0,0,151,14,1,0,0,0,152,153,7,0,0,0,153,16,1,0,0,0,154,155,7,
  	1,0,0,155,18,1,0,0,0,156,157,7,2,0,0,157,20,1,0,0,0,158,159,7,3,0,0,159,
  	22,1,0,0,0,160,161,7,4,0,0,161,24,1,0,0,0,162,163,7,5,0,0,163,26,1,0,
  	0,0,164,165,7,6,0,0,165,28,1,0,0,0,166,167,7,7,0,0,167,30,1,0,0,0,168,
  	169,7,8,0,0,169,32,1,0,0,0,170,171,7,9,0,0,171,34,1,0,0,0,172,173,7,10,
  	0,0,173,36,1,0,0,0,174,175,7,11,0,0,175,38,1,0,0,0,176,177,7,12,0,0,177,
  	40,1,0,0,0,178,179,7,13,0,0,179,42,1,0,0,0,180,181,7,14,0,0,181,44,1,
  	0,0,0,182,183,7,15,0,0,183,46,1,0,0,0,184,185,7,16,0,0,185,48,1,0,0,0,
  	186,187,7,17,0,0,187,50,1,0,0,0,188,189,7,18,0,0,189,52,1,0,0,0,190,191,
  	7,19,0,0,191,54,1,0,0,0,192,193,7,20,0,0,193,56,1,0,0,0,194,195,7,21,
  	0,0,195,58,1,0,0,0,196,197,7,22,0,0,197,60,1,0,0,0,198,199,7,23,0,0,199,
  	62,1,0,0,0,200,201,7,24,0,0,201,64,1,0,0,0,202,203,7,25,0,0,203,66,1,
  	0,0,0,204,205,5,35,0,0,205,213,7,26,0,0,206,209,3,121,60,0,207,209,3,
  	123,61,0,208,206,1,0,0,0,208,207,1,0,0,0,209,212,1,0,0,0,210,212,7,27,
  	0,0,211,208,1,0,0,0,211,210,1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,213,
  	214,1,0,0,0,214,68,1,0,0,0,215,213,1,0,0,0,216,217,5,33,0,0,217,218,5,
  	40,0,0,218,219,5,39,0,0,219,220,1,0,0,0,220,224,7,28,0,0,221,223,8,29,
  	0,0,222,221,1,0,0,0,223,226,1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,
  	227,1,0,0,0,226,224,1,0,0,0,227,228,5,39,0,0,228,229,5,41,0,0,229,70,
  	1,0,0,0,230,232,7,30,0,0,231,230,1,0,0,0,232,233,1,0,0,0,233,231,1,0,
  	0,0,233,234,1,0,0,0,234,235,1,0,0,0,235,236,6,35,0,0,236,72,1,0,0,0,237,
  	239,5,13,0,0,238,237,1,0,0,0,238,239,1,0,0,0,239,240,1,0,0,0,240,241,
  	5,10,0,0,241,74,1,0,0,0,242,244,7,31,0,0,243,242,1,0,0,0,244,245,1,0,
  	0,0,245,243,1,0,0,0,245,246,1,0,0,0,246,248,1,0,0,0,247,249,3,127,63,
  	0,248,247,1,0,0,0,248,249,1,0,0,0,249,76,1,0,0,0,250,251,5,43,0,0,251,
  	78,1,0,0,0,252,253,5,45,0,0,253,80,1,0,0,0,254,255,5,42,0,0,255,82,1,
  	0,0,0,256,257,5,47,0,0,257,84,1,0,0,0,258,259,5,94,0,0,259,86,1,0,0,0,
  	260,261,3,51,25,0,261,262,3,55,27,0,262,263,3,39,19,0,263,264,3,45,22,
  	0,264,265,3,49,24,0,265,266,3,43,21,0,266,267,3,21,10,0,267,268,3,55,
  	27,0,268,269,3,19,9,0,269,270,3,53,26,0,270,88,1,0,0,0,271,272,3,87,43,
  	0,272,273,5,95,0,0,273,274,3,31,15,0,274,90,1,0,0,0,275,276,3,51,25,0,
  	276,277,3,55,27,0,277,278,3,39,19,0,278,92,1,0,0,0,279,280,3,91,45,0,
  	280,281,5,95,0,0,281,282,3,31,15,0,282,94,1,0,0,0,283,284,3,45,22,0,284,
  	285,3,49,24,0,285,286,3,43,21,0,286,287,3,21,10,0,287,288,3,55,27,0,288,
  	289,3,19,9,0,289,290,3,53,26,0,290,96,1,0,0,0,291,292,3,95,47,0,292,293,
  	5,95,0,0,293,294,3,31,15,0,294,98,1,0,0,0,295,296,3,37,18,0,296,297,3,
  	41,20,0,297,100,1,0,0,0,298,299,3,37,18,0,299,300,3,27,13,0,300,102,1,
  	0,0,0,301,302,3,37,18,0,302,303,3,43,21,0,303,304,3,27,13,0,304,305,5,
  	95,0,0,305,306,3,61,30,0,306,104,1,0,0,0,307,308,3,23,11,0,308,309,3,
  	61,30,0,309,310,3,45,22,0,310,106,1,0,0,0,311,312,3,51,25,0,312,313,3,
  	47,23,0,313,314,3,49,24,0,314,315,3,53,26,0,315,108,1,0,0,0,316,317,3,
  	45,22,0,317,318,3,31,15,0,318,110,1,0,0,0,319,320,3,19,9,0,320,321,3,
  	43,21,0,321,322,3,51,25,0,322,112,1,0,0,0,323,324,3,51,25,0,324,325,3,
  	31,15,0,325,326,3,41,20,0,326,114,1,0,0,0,327,328,3,15,7,0,328,329,3,
  	113,56,0,329,116,1,0,0,0,330,331,3,15,7,0,331,332,3,111,55,0,332,118,
  	1,0,0,0,333,334,3,25,12,0,334,335,3,15,7,0,335,336,3,19,9,0,336,337,3,
  	53,26,0,337,338,3,43,21,0,338,339,3,49,24,0,339,340,3,31,15,0,340,341,
  	3,15,7,0,341,342,3,37,18,0,342,120,1,0,0,0,343,344,5,39,0,0,344,122,1,
  	0,0,0,345,347,5,94,0,0,346,348,5,42,0,0,347,346,1,0,0,0,348,349,1,0,0,
  	0,349,347,1,0,0,0,349,350,1,0,0,0,350,124,1,0,0,0,351,353,7,32,0,0,352,
  	351,1,0,0,0,352,353,1,0,0,0,353,354,1,0,0,0,354,355,3,75,37,0,355,126,
  	1,0,0,0,356,357,7,4,0,0,357,358,3,125,62,0,358,128,1,0,0,0,359,360,3,
  	125,62,0,360,361,5,46,0,0,361,363,3,75,37,0,362,364,3,127,63,0,363,362,
  	1,0,0,0,363,364,1,0,0,0,364,130,1,0,0,0,365,367,7,31,0,0,366,365,1,0,
  	0,0,367,368,1,0,0,0,368,366,1,0,0,0,368,369,1,0,0,0,369,132,1,0,0,0,370,
  	374,5,34,0,0,371,373,8,33,0,0,372,371,1,0,0,0,373,376,1,0,0,0,374,372,
  	1,0,0,0,374,375,1,0,0,0,375,377,1,0,0,0,376,374,1,0,0,0,377,387,5,34,
  	0,0,378,382,5,39,0,0,379,381,8,34,0,0,380,379,1,0,0,0,381,384,1,0,0,0,
  	382,380,1,0,0,0,382,383,1,0,0,0,383,385,1,0,0,0,384,382,1,0,0,0,385,387,
  	5,39,0,0,386,370,1,0,0,0,386,378,1,0,0,0,387,134,1,0,0,0,16,0,208,211,
  	213,224,233,238,245,248,349,352,363,368,374,382,386,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  detect_type_functionlexerLexerStaticData = staticData.release();
}

}

detect_type_functionLexer::detect_type_functionLexer(CharStream *input) : Lexer(input) {
  detect_type_functionLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *detect_type_functionlexerLexerStaticData->atn, detect_type_functionlexerLexerStaticData->decisionToDFA, detect_type_functionlexerLexerStaticData->sharedContextCache);
}

detect_type_functionLexer::~detect_type_functionLexer() {
  delete _interpreter;
}

std::string detect_type_functionLexer::getGrammarFileName() const {
  return "detect_type_function.g4";
}

const std::vector<std::string>& detect_type_functionLexer::getRuleNames() const {
  return detect_type_functionlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& detect_type_functionLexer::getChannelNames() const {
  return detect_type_functionlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& detect_type_functionLexer::getModeNames() const {
  return detect_type_functionlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& detect_type_functionLexer::getVocabulary() const {
  return detect_type_functionlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView detect_type_functionLexer::getSerializedATN() const {
  return detect_type_functionlexerLexerStaticData->serializedATN;
}

const atn::ATN& detect_type_functionLexer::getATN() const {
  return *detect_type_functionlexerLexerStaticData->atn;
}




void detect_type_functionLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  detect_type_functionlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(detect_type_functionlexerLexerOnceFlag, detect_type_functionlexerLexerInitialize);
#endif
}
