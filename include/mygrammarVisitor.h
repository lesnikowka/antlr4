
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once
#include "antlr4-runtime.h"
#include "mygrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by mygrammarParser.
 */
class  mygrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mygrammarParser.
   */
    virtual std::any visitInt(mygrammarParser::IntContext *context) = 0;

    virtual std::any visitIntDOTint(mygrammarParser::IntDOTintContext *context) = 0;

    virtual std::any visitVarISexpr(mygrammarParser::VarISexprContext *context) = 0;

    virtual std::any visitLexprR(mygrammarParser::LexprRContext *context) = 0;

    virtual std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext *context) = 0;

    virtual std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext *context) = 0;

    virtual std::any visitEfloat(mygrammarParser::EfloatContext *context) = 0;

    virtual std::any visitExpr_sep(mygrammarParser::Expr_sepContext *context) = 0;

    virtual std::any visitProg_row(mygrammarParser::Prog_rowContext *context) = 0;

    virtual std::any visitOneLineProg(mygrammarParser::OneLineProgContext *context) = 0;


};

