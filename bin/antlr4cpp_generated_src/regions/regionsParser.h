
// Generated from /home/oster/Electrolisys/grammar/regions.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  regionsParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, SUMPRODUCT = 6, LN = 7, 
    LG = 8, LOG_X = 9, EXP = 10, SQRT = 11, ADD = 12, SUB = 13, MUL = 14, 
    DIV = 15, POW = 16, STRING = 17, VARIABLE = 18, VARIABLE_RANGE = 19, 
    WS = 20, EOL = 21, NUMBER = 22, CONSTANTS = 23, PI = 24
  };

  enum {
    RuleFile = 0, RuleHdr = 1, RuleData_bound = 2, RuleConst_zone = 3, RuleVirial_coefs = 4, 
    RuleValues = 5, RuleBound_equation = 6, RuleTempbound = 7, RuleMain = 8, 
    RuleExpr = 9, RuleArray = 10, RuleFunctions = 11
  };

  explicit regionsParser(antlr4::TokenStream *input);

  regionsParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~regionsParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileContext;
  class HdrContext;
  class Data_boundContext;
  class Const_zoneContext;
  class Virial_coefsContext;
  class ValuesContext;
  class Bound_equationContext;
  class TempboundContext;
  class MainContext;
  class ExprContext;
  class ArrayContext;
  class FunctionsContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_boundContext *data_bound();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    Const_zoneContext *const_zone();
    Virial_coefsContext *virial_coefs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

  class  HdrContext : public antlr4::ParserRuleContext {
  public:
    HdrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HdrContext* hdr();

  class  Data_boundContext : public antlr4::ParserRuleContext {
  public:
    Data_boundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Data_boundContext* data_bound();

  class  Const_zoneContext : public antlr4::ParserRuleContext {
  public:
    Const_zoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HdrContext *hdr();
    antlr4::tree::TerminalNode *EOL();
    ValuesContext *values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Const_zoneContext* const_zone();

  class  Virial_coefsContext : public antlr4::ParserRuleContext {
  public:
    Virial_coefsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HdrContext *hdr();
    antlr4::tree::TerminalNode *EOL();
    ValuesContext *values();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Virial_coefsContext* virial_coefs();

  class  ValuesContext : public antlr4::ParserRuleContext {
  public:
    ValuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOL();
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValuesContext* values();

  class  Bound_equationContext : public antlr4::ParserRuleContext {
  public:
    Bound_equationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionsContext *functions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bound_equationContext* bound_equation();

  class  TempboundContext : public antlr4::ParserRuleContext {
  public:
    TempboundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TempboundContext* tempbound();

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MainContext* main();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnaryOpContext : public ExprContext {
  public:
    UnaryOpContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VariableContext : public ExprContext {
  public:
    VariableContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VARIABLE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NumberContext : public ExprContext {
  public:
    NumberContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NUMBER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParensContext : public ExprContext {
  public:
    ParensContext(ExprContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayDefContext : public ExprContext {
  public:
    ArrayDefContext(ExprContext *ctx);

    ArrayContext *array();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ConstantContext : public ExprContext {
  public:
    ConstantContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CONSTANTS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FunctionCallContext : public ExprContext {
  public:
    FunctionCallContext(ExprContext *ctx);

    FunctionsContext *functions();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PowerOpContext : public ExprContext {
  public:
    PowerOpContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *POW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BinaryOpContext : public ExprContext {
  public:
    BinaryOpContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> VARIABLE();
    antlr4::tree::TerminalNode* VARIABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONSTANTS();
    antlr4::tree::TerminalNode* CONSTANTS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayContext* array();

  class  FunctionsContext : public antlr4::ParserRuleContext {
  public:
    FunctionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionsContext() = default;
    void copyFrom(FunctionsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SumproductContext : public FunctionsContext {
  public:
    SumproductContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *SUMPRODUCT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NatlogContext : public FunctionsContext {
  public:
    NatlogContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LN();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ExponentContext : public FunctionsContext {
  public:
    ExponentContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *EXP();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DeclogContext : public FunctionsContext {
  public:
    DeclogContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LG();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BaselogContext : public FunctionsContext {
  public:
    BaselogContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LOG_X();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParesContext : public FunctionsContext {
  public:
    ParesContext(FunctionsContext *ctx);

    FunctionsContext *functions();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SquarerootContext : public FunctionsContext {
  public:
    SquarerootContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *SQRT();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  FunctionsContext* functions();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

