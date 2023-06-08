
// Generated from mygrammar.g4 by ANTLR 4.13.0


#include "mygrammarListener.h"
#include "mygrammarVisitor.h"

#include "mygrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MygrammarParserStaticData final {
  MygrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MygrammarParserStaticData(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData(MygrammarParserStaticData&&) = delete;
  MygrammarParserStaticData& operator=(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData& operator=(MygrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MygrammarParserStaticData *mygrammarParserStaticData = nullptr;

void mygrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MygrammarParserStaticData>(
    std::vector<std::string>{
      "float", "expr", "row", "prog"
    },
    std::vector<std::string>{
      "", "", "", "'.'", "'='", "'-'", "'+'", "'/'", "'*'", "';'", "'('", 
      "')'", "", "'print:'"
    },
    std::vector<std::string>{
      "", "INT", "VAR", "DOT", "IS", "SUB", "ADD", "DIV", "MUL", "SEP", 
      "LBR", "RBR", "WS", "PRINT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,13,58,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,1,0,3,0,13,8,0,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,27,8,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,5,1,35,8,1,10,1,12,1,38,9,1,1,2,1,2,1,2,1,3,1,3,1,3,3,3,
  	46,8,3,1,3,1,3,1,3,3,3,51,8,3,5,3,53,8,3,10,3,12,3,56,9,3,1,3,0,2,2,6,
  	4,0,2,4,6,0,2,1,0,7,8,1,0,5,6,63,0,12,1,0,0,0,2,26,1,0,0,0,4,39,1,0,0,
  	0,6,42,1,0,0,0,8,13,5,1,0,0,9,10,5,1,0,0,10,11,5,3,0,0,11,13,5,1,0,0,
  	12,8,1,0,0,0,12,9,1,0,0,0,13,1,1,0,0,0,14,15,6,1,-1,0,15,16,5,10,0,0,
  	16,17,3,2,1,0,17,18,5,11,0,0,18,27,1,0,0,0,19,27,3,0,0,0,20,21,5,2,0,
  	0,21,22,5,4,0,0,22,27,3,2,1,3,23,27,5,2,0,0,24,25,5,13,0,0,25,27,3,2,
  	1,1,26,14,1,0,0,0,26,19,1,0,0,0,26,20,1,0,0,0,26,23,1,0,0,0,26,24,1,0,
  	0,0,27,36,1,0,0,0,28,29,10,7,0,0,29,30,7,0,0,0,30,35,3,2,1,8,31,32,10,
  	6,0,0,32,33,7,1,0,0,33,35,3,2,1,7,34,28,1,0,0,0,34,31,1,0,0,0,35,38,1,
  	0,0,0,36,34,1,0,0,0,36,37,1,0,0,0,37,3,1,0,0,0,38,36,1,0,0,0,39,40,3,
  	2,1,0,40,41,5,9,0,0,41,5,1,0,0,0,42,43,6,3,-1,0,43,45,3,4,2,0,44,46,5,
  	0,0,1,45,44,1,0,0,0,45,46,1,0,0,0,46,54,1,0,0,0,47,48,10,1,0,0,48,50,
  	3,4,2,0,49,51,5,0,0,1,50,49,1,0,0,0,50,51,1,0,0,0,51,53,1,0,0,0,52,47,
  	1,0,0,0,53,56,1,0,0,0,54,52,1,0,0,0,54,55,1,0,0,0,55,7,1,0,0,0,56,54,
  	1,0,0,0,7,12,26,34,36,45,50,54
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarParserStaticData = staticData.release();
}

}

mygrammarParser::mygrammarParser(TokenStream *input) : mygrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

mygrammarParser::mygrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  mygrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammarParserStaticData->atn, mygrammarParserStaticData->decisionToDFA, mygrammarParserStaticData->sharedContextCache, options);
}

mygrammarParser::~mygrammarParser() {
  delete _interpreter;
}

const atn::ATN& mygrammarParser::getATN() const {
  return *mygrammarParserStaticData->atn;
}

std::string mygrammarParser::getGrammarFileName() const {
  return "mygrammar.g4";
}

const std::vector<std::string>& mygrammarParser::getRuleNames() const {
  return mygrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& mygrammarParser::getVocabulary() const {
  return mygrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrammarParser::getSerializedATN() const {
  return mygrammarParserStaticData->serializedATN;
}


//----------------- FloatContext ------------------------------------------------------------------

mygrammarParser::FloatContext::FloatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::FloatContext::getRuleIndex() const {
  return mygrammarParser::RuleFloat;
}

void mygrammarParser::FloatContext::copyFrom(FloatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntDOTintContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> mygrammarParser::IntDOTintContext::INT() {
  return getTokens(mygrammarParser::INT);
}

tree::TerminalNode* mygrammarParser::IntDOTintContext::INT(size_t i) {
  return getToken(mygrammarParser::INT, i);
}

tree::TerminalNode* mygrammarParser::IntDOTintContext::DOT() {
  return getToken(mygrammarParser::DOT, 0);
}

mygrammarParser::IntDOTintContext::IntDOTintContext(FloatContext *ctx) { copyFrom(ctx); }

void mygrammarParser::IntDOTintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntDOTint(this);
}
void mygrammarParser::IntDOTintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntDOTint(this);
}

std::any mygrammarParser::IntDOTintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIntDOTint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::IntContext::INT() {
  return getToken(mygrammarParser::INT, 0);
}

mygrammarParser::IntContext::IntContext(FloatContext *ctx) { copyFrom(ctx); }

void mygrammarParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void mygrammarParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}

std::any mygrammarParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::FloatContext* mygrammarParser::float_() {
  FloatContext *_localctx = _tracker.createInstance<FloatContext>(_ctx, getState());
  enterRule(_localctx, 0, mygrammarParser::RuleFloat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(12);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrammarParser::IntContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(8);
      match(mygrammarParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrammarParser::IntDOTintContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(9);
      match(mygrammarParser::INT);
      setState(10);
      match(mygrammarParser::DOT);
      setState(11);
      match(mygrammarParser::INT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

mygrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::ExprContext::getRuleIndex() const {
  return mygrammarParser::RuleExpr;
}

void mygrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarISexprContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::VarISexprContext::VAR() {
  return getToken(mygrammarParser::VAR, 0);
}

tree::TerminalNode* mygrammarParser::VarISexprContext::IS() {
  return getToken(mygrammarParser::IS, 0);
}

mygrammarParser::ExprContext* mygrammarParser::VarISexprContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

mygrammarParser::VarISexprContext::VarISexprContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrammarParser::VarISexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarISexpr(this);
}
void mygrammarParser::VarISexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarISexpr(this);
}

std::any mygrammarParser::VarISexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitVarISexpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LexprRContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::LexprRContext::LBR() {
  return getToken(mygrammarParser::LBR, 0);
}

mygrammarParser::ExprContext* mygrammarParser::LexprRContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

tree::TerminalNode* mygrammarParser::LexprRContext::RBR() {
  return getToken(mygrammarParser::RBR, 0);
}

mygrammarParser::LexprRContext::LexprRContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrammarParser::LexprRContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLexprR(this);
}
void mygrammarParser::LexprRContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLexprR(this);
}

std::any mygrammarParser::LexprRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitLexprR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Print_exprContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::Print_exprContext::PRINT() {
  return getToken(mygrammarParser::PRINT, 0);
}

mygrammarParser::ExprContext* mygrammarParser::Print_exprContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

mygrammarParser::Print_exprContext::Print_exprContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrammarParser::Print_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_expr(this);
}
void mygrammarParser::Print_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_expr(this);
}

std::any mygrammarParser::Print_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPrint_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprADDexprContext ------------------------------------------------------------------

std::vector<mygrammarParser::ExprContext *> mygrammarParser::ExprADDexprContext::expr() {
  return getRuleContexts<mygrammarParser::ExprContext>();
}

mygrammarParser::ExprContext* mygrammarParser::ExprADDexprContext::expr(size_t i) {
  return getRuleContext<mygrammarParser::ExprContext>(i);
}

tree::TerminalNode* mygrammarParser::ExprADDexprContext::ADD() {
  return getToken(mygrammarParser::ADD, 0);
}

tree::TerminalNode* mygrammarParser::ExprADDexprContext::SUB() {
  return getToken(mygrammarParser::SUB, 0);
}

mygrammarParser::ExprADDexprContext::ExprADDexprContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrammarParser::ExprADDexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprADDexpr(this);
}
void mygrammarParser::ExprADDexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprADDexpr(this);
}

std::any mygrammarParser::ExprADDexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExprADDexpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMULexprContext ------------------------------------------------------------------

std::vector<mygrammarParser::ExprContext *> mygrammarParser::ExprMULexprContext::expr() {
  return getRuleContexts<mygrammarParser::ExprContext>();
}

mygrammarParser::ExprContext* mygrammarParser::ExprMULexprContext::expr(size_t i) {
  return getRuleContext<mygrammarParser::ExprContext>(i);
}

tree::TerminalNode* mygrammarParser::ExprMULexprContext::MUL() {
  return getToken(mygrammarParser::MUL, 0);
}

tree::TerminalNode* mygrammarParser::ExprMULexprContext::DIV() {
  return getToken(mygrammarParser::DIV, 0);
}

mygrammarParser::ExprMULexprContext::ExprMULexprContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrammarParser::ExprMULexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprMULexpr(this);
}
void mygrammarParser::ExprMULexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprMULexpr(this);
}

std::any mygrammarParser::ExprMULexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExprMULexpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EvarContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::EvarContext::VAR() {
  return getToken(mygrammarParser::VAR, 0);
}

mygrammarParser::EvarContext::EvarContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrammarParser::EvarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvar(this);
}
void mygrammarParser::EvarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvar(this);
}

std::any mygrammarParser::EvarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitEvar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EfloatContext ------------------------------------------------------------------

mygrammarParser::FloatContext* mygrammarParser::EfloatContext::float_() {
  return getRuleContext<mygrammarParser::FloatContext>(0);
}

mygrammarParser::EfloatContext::EfloatContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrammarParser::EfloatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEfloat(this);
}
void mygrammarParser::EfloatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEfloat(this);
}

std::any mygrammarParser::EfloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitEfloat(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::ExprContext* mygrammarParser::expr() {
   return expr(0);
}

mygrammarParser::ExprContext* mygrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  mygrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, mygrammarParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(26);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LexprRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(15);
      match(mygrammarParser::LBR);
      setState(16);
      expr(0);
      setState(17);
      match(mygrammarParser::RBR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<EfloatContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(19);
      float_();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<VarISexprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(20);
      match(mygrammarParser::VAR);
      setState(21);
      match(mygrammarParser::IS);
      setState(22);
      expr(3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<EvarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(23);
      match(mygrammarParser::VAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Print_exprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(24);
      match(mygrammarParser::PRINT);
      setState(25);
      expr(1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(36);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(34);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExprMULexprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(28);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(29);
          _la = _input->LA(1);
          if (!(_la == mygrammarParser::DIV

          || _la == mygrammarParser::MUL)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(30);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExprADDexprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(31);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(32);
          _la = _input->LA(1);
          if (!(_la == mygrammarParser::SUB

          || _la == mygrammarParser::ADD)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(33);
          expr(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(38);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RowContext ------------------------------------------------------------------

mygrammarParser::RowContext::RowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::RowContext::getRuleIndex() const {
  return mygrammarParser::RuleRow;
}

void mygrammarParser::RowContext::copyFrom(RowContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_sepContext ------------------------------------------------------------------

mygrammarParser::ExprContext* mygrammarParser::Expr_sepContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

tree::TerminalNode* mygrammarParser::Expr_sepContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::Expr_sepContext::Expr_sepContext(RowContext *ctx) { copyFrom(ctx); }

void mygrammarParser::Expr_sepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_sep(this);
}
void mygrammarParser::Expr_sepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_sep(this);
}

std::any mygrammarParser::Expr_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExpr_sep(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::RowContext* mygrammarParser::row() {
  RowContext *_localctx = _tracker.createInstance<RowContext>(_ctx, getState());
  enterRule(_localctx, 4, mygrammarParser::RuleRow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::Expr_sepContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(39);
    expr(0);
    setState(40);
    match(mygrammarParser::SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

mygrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::ProgContext::getRuleIndex() const {
  return mygrammarParser::RuleProg;
}

void mygrammarParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Prog_rowContext ------------------------------------------------------------------

mygrammarParser::ProgContext* mygrammarParser::Prog_rowContext::prog() {
  return getRuleContext<mygrammarParser::ProgContext>(0);
}

mygrammarParser::RowContext* mygrammarParser::Prog_rowContext::row() {
  return getRuleContext<mygrammarParser::RowContext>(0);
}

tree::TerminalNode* mygrammarParser::Prog_rowContext::EOF() {
  return getToken(mygrammarParser::EOF, 0);
}

mygrammarParser::Prog_rowContext::Prog_rowContext(ProgContext *ctx) { copyFrom(ctx); }

void mygrammarParser::Prog_rowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg_row(this);
}
void mygrammarParser::Prog_rowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg_row(this);
}

std::any mygrammarParser::Prog_rowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitProg_row(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OneLineProgContext ------------------------------------------------------------------

mygrammarParser::RowContext* mygrammarParser::OneLineProgContext::row() {
  return getRuleContext<mygrammarParser::RowContext>(0);
}

tree::TerminalNode* mygrammarParser::OneLineProgContext::EOF() {
  return getToken(mygrammarParser::EOF, 0);
}

mygrammarParser::OneLineProgContext::OneLineProgContext(ProgContext *ctx) { copyFrom(ctx); }

void mygrammarParser::OneLineProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneLineProg(this);
}
void mygrammarParser::OneLineProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneLineProg(this);
}

std::any mygrammarParser::OneLineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitOneLineProg(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::ProgContext* mygrammarParser::prog() {
   return prog(0);
}

mygrammarParser::ProgContext* mygrammarParser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrammarParser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  mygrammarParser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, mygrammarParser::RuleProg, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<OneLineProgContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(43);
    row();
    setState(45);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(44);
      match(mygrammarParser::EOF);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(54);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Prog_rowContext>(_tracker.createInstance<ProgContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProg);
        setState(47);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(48);
        row();
        setState(50);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(49);
          match(mygrammarParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(56);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool mygrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 3: return progSempred(antlrcpp::downCast<ProgContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool mygrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

bool mygrammarParser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void mygrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarParserInitialize();
#else
  ::antlr4::internal::call_once(mygrammarParserOnceFlag, mygrammarParserInitialize);
#endif
}
