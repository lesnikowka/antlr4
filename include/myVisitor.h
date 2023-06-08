#pragma once


#include "mygrammarVisitor.h"

class  myVisitor : public mygrammarVisitor {
    std::any visitInt(mygrammarParser::IntContext* context) {
        //std::cout << "visit Int" << std::endl;

        double result = 0;

        std::string s = context->INT()->getText();

        result = std::stod(s);

        return result;
    };

    std::any visitIntDOTint(mygrammarParser::IntDOTintContext* context) {
        //std::cout << "visit IntDotInt" << std::endl;

        double result = std::stod(context->getText());

        return result;
    };

    std::any visitVarISexpr(mygrammarParser::VarISexprContext* context) {
        //std::cout << "visit ISexpr" << std::endl;

        double value = std::any_cast<double>(visit(context->expr()));
        std::string name = context->VAR()->getText();

        variables.emplace(name, value);

        return value;
    };

    std::any visitLexprR(mygrammarParser::LexprRContext* context) {
        //std::cout << "visit LexprR" << std::endl;

        double result = std::any_cast<double>(visit(context->expr()));

        return result;
    };

    std::any visitPrint_expr(mygrammarParser::Print_exprContext* context) {
        //std::cout << "visit print_expr" << std::endl;

        std::string s = context->getText();

        double result = std::any_cast<double>(visit(context->expr()));

        std::cout << result << std::endl;

        return result;
    };

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* context) {
        //std::cout << "visit ExprAddExpr" << std::endl;

        double left = std::any_cast<double>(visit(context->expr(0)));
        double right = std::any_cast<double>(visit(context->expr(1)));

        if (context->ADD()) {
            return left + right;
        }

        return left - right;
    };

    std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* context) {
        //std::cout << "visit ExprMULexpr" << std::endl;
        
        double left = std::any_cast<double>(visit(context->expr(0)));
        double right = std::any_cast<double>(visit(context->expr(1)));

        if (context->MUL()) {
            return left * right;
        }
        else if (right == 0) {
            throw std::invalid_argument("Zero division error");
        }

        return left / right;
    };

    std::any visitEvar(mygrammarParser::EvarContext* context) {
        //std::cout << "visit Evar" << std::endl;

        double result = variables[context->VAR()->getText()];

        return result;
    };

    std::any visitEfloat(mygrammarParser::EfloatContext* context) {
        //std::cout << "visit Efloat" << std::endl;
        
        double result = std::any_cast<double>(visit(context->float_()));

        return result;
    };

    std::any visitExpr_sep(mygrammarParser::Expr_sepContext* context) {
        //std::cout << "visit Expr_sep" << std::endl;

        double result = std::any_cast<double>(visit(context->expr()));

        return result;
    };

    std::any visitProg_row(mygrammarParser::Prog_rowContext* context) {
        //std::cout << "visit Prog_row" << std::endl;

        visit(context->prog());
        visit(context->row());

        return 0;
    };

    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* context) {
        //std::cout << "visit LineProg" << std::endl;

        visit(context->row());

        return 0;
    };

public:
    std::unordered_map<std::string, double> variables;
};