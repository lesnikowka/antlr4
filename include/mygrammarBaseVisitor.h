
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarVisitor.h"


/**
 * This class provides an empty implementation of mygrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mygrammarBaseVisitor : public mygrammarVisitor {
public:

  virtual std::any visitInt(mygrammarParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntDOTint(mygrammarParser::IntDOTintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarISexpr(mygrammarParser::VarISexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLexprR(mygrammarParser::LexprRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEfloat(mygrammarParser::EfloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_sep(mygrammarParser::Expr_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProg_row(mygrammarParser::Prog_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneLineProg(mygrammarParser::OneLineProgContext *ctx) override {
    return visitChildren(ctx);
  }


};

