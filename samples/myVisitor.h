#pragma once


#include "mygrammarVisitor.h"

class  myVisitor : public mygrammarVisitor {
     std::any visitInt(mygrammarParser::IntContext* context) {
        std::cout << "Visit INT" << std::endl;
        int first = std::stoi(context->INT()->getText());
        return first;

    };

     std::any visitIntDOTint(mygrammarParser::IntDOTintContext* context) {
        std::cout << "Visit intDOTint" << std::endl;
        return 0;
    };

     std::any visitVarISexpr(mygrammarParser::VarISexprContext* context) {
         std::cout << "Visit varISexpr" << std::endl;
         return 0;

     };

     std::any visitLexprR(mygrammarParser::LexprRContext* context) {
         std::cout << "Visit LexprR" << std::endl;
         return 0;
     };

     std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* context) {
         std::cout << "Visit exprADDexpr" << std::endl;
         return 0;

     };

     std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* context) {
        std::cout << "Visit exprMULexpr" << std::endl;
        return 0;

    };

     std::any visitEfloat(mygrammarParser::EfloatContext* context) {
         std::cout << "Visit float" << std::endl;
         return 0;

     };

     std::any visitExpr_sep(mygrammarParser::Expr_sepContext* context) {
         std::cout << "visit expr_sep" << std::endl;
         return 0;

     };

     std::any visitProg_row(mygrammarParser::Prog_rowContext* context) {
         std::cout << "Visit prog_row" << std::endl;
         return 0;

     };

     std::any visitOneLineProg(mygrammarParser::OneLineProgContext* context) {
         std::cout << "visit oneLineProg" << std::endl;
         return 0;

     };

public:
    std::vector<double> data;

};