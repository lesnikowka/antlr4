
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by mygrammarParser.
 */
class  mygrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInt(mygrammarParser::IntContext *ctx) = 0;
  virtual void exitInt(mygrammarParser::IntContext *ctx) = 0;

  virtual void enterIntDOTint(mygrammarParser::IntDOTintContext *ctx) = 0;
  virtual void exitIntDOTint(mygrammarParser::IntDOTintContext *ctx) = 0;

  virtual void enterVarISexpr(mygrammarParser::VarISexprContext *ctx) = 0;
  virtual void exitVarISexpr(mygrammarParser::VarISexprContext *ctx) = 0;

  virtual void enterLexprR(mygrammarParser::LexprRContext *ctx) = 0;
  virtual void exitLexprR(mygrammarParser::LexprRContext *ctx) = 0;

  virtual void enterPrint_expr(mygrammarParser::Print_exprContext *ctx) = 0;
  virtual void exitPrint_expr(mygrammarParser::Print_exprContext *ctx) = 0;

  virtual void enterExprADDexpr(mygrammarParser::ExprADDexprContext *ctx) = 0;
  virtual void exitExprADDexpr(mygrammarParser::ExprADDexprContext *ctx) = 0;

  virtual void enterExprMULexpr(mygrammarParser::ExprMULexprContext *ctx) = 0;
  virtual void exitExprMULexpr(mygrammarParser::ExprMULexprContext *ctx) = 0;

  virtual void enterEvar(mygrammarParser::EvarContext *ctx) = 0;
  virtual void exitEvar(mygrammarParser::EvarContext *ctx) = 0;

  virtual void enterEfloat(mygrammarParser::EfloatContext *ctx) = 0;
  virtual void exitEfloat(mygrammarParser::EfloatContext *ctx) = 0;

  virtual void enterExpr_sep(mygrammarParser::Expr_sepContext *ctx) = 0;
  virtual void exitExpr_sep(mygrammarParser::Expr_sepContext *ctx) = 0;

  virtual void enterProg_row(mygrammarParser::Prog_rowContext *ctx) = 0;
  virtual void exitProg_row(mygrammarParser::Prog_rowContext *ctx) = 0;

  virtual void enterOneLineProg(mygrammarParser::OneLineProgContext *ctx) = 0;
  virtual void exitOneLineProg(mygrammarParser::OneLineProgContext *ctx) = 0;


};

