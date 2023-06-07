
// Generated from mygrammar.g4 by ANTLR 4.13.0

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

  virtual void enterInt(mygrammarParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(mygrammarParser::IntContext * /*ctx*/) override { }

  virtual void enterIntDOTint(mygrammarParser::IntDOTintContext * /*ctx*/) override { }
  virtual void exitIntDOTint(mygrammarParser::IntDOTintContext * /*ctx*/) override { }

  virtual void enterVarISexpr(mygrammarParser::VarISexprContext * /*ctx*/) override { }
  virtual void exitVarISexpr(mygrammarParser::VarISexprContext * /*ctx*/) override { }

  virtual void enterLexprR(mygrammarParser::LexprRContext * /*ctx*/) override { }
  virtual void exitLexprR(mygrammarParser::LexprRContext * /*ctx*/) override { }

  virtual void enterPrint_expr(mygrammarParser::Print_exprContext * /*ctx*/) override { }
  virtual void exitPrint_expr(mygrammarParser::Print_exprContext * /*ctx*/) override { }

  virtual void enterExprADDexpr(mygrammarParser::ExprADDexprContext * /*ctx*/) override { }
  virtual void exitExprADDexpr(mygrammarParser::ExprADDexprContext * /*ctx*/) override { }

  virtual void enterExprMULexpr(mygrammarParser::ExprMULexprContext * /*ctx*/) override { }
  virtual void exitExprMULexpr(mygrammarParser::ExprMULexprContext * /*ctx*/) override { }

  virtual void enterEvar(mygrammarParser::EvarContext * /*ctx*/) override { }
  virtual void exitEvar(mygrammarParser::EvarContext * /*ctx*/) override { }

  virtual void enterEfloat(mygrammarParser::EfloatContext * /*ctx*/) override { }
  virtual void exitEfloat(mygrammarParser::EfloatContext * /*ctx*/) override { }

  virtual void enterExpr_sep(mygrammarParser::Expr_sepContext * /*ctx*/) override { }
  virtual void exitExpr_sep(mygrammarParser::Expr_sepContext * /*ctx*/) override { }

  virtual void enterProg_row(mygrammarParser::Prog_rowContext * /*ctx*/) override { }
  virtual void exitProg_row(mygrammarParser::Prog_rowContext * /*ctx*/) override { }

  virtual void enterOneLineProg(mygrammarParser::OneLineProgContext * /*ctx*/) override { }
  virtual void exitOneLineProg(mygrammarParser::OneLineProgContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

