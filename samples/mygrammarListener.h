
// Generated from mygrammar.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by mygrammarParser.
 */
class  mygrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExpr(mygrammarParser::ExprContext *ctx) = 0;
  virtual void exitExpr(mygrammarParser::ExprContext *ctx) = 0;

  virtual void enterRow(mygrammarParser::RowContext *ctx) = 0;
  virtual void exitRow(mygrammarParser::RowContext *ctx) = 0;

  virtual void enterProg(mygrammarParser::ProgContext *ctx) = 0;
  virtual void exitProg(mygrammarParser::ProgContext *ctx) = 0;


};

