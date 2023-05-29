
// Generated from mygrammar.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarListener.h"


/**
 * This class provides an empty implementation of mygrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  mygrammarBaseListener : public mygrammarListener {
public:

  virtual void enterExpr(mygrammarParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(mygrammarParser::ExprContext * /*ctx*/) override { }

  virtual void enterRow(mygrammarParser::RowContext * /*ctx*/) override { }
  virtual void exitRow(mygrammarParser::RowContext * /*ctx*/) override { }

  virtual void enterProg(mygrammarParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(mygrammarParser::ProgContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

