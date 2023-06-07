#pragma once


#include "mygrammarVisitor.h"

class  myVisitor : public mygrammarVisitor {
    std::any visitInt(mygrammarParser::IntContext* context) {
        std::cout << "visit Int" << std::endl;

        int result = 0;

        std::string s = context->INT()->getText().c_str();

        result = std::stoi(s);

        return result;
    };

    std::any visitIntDOTint(mygrammarParser::IntDOTintContext* context) {
        std::cout << "visit IntDotInt" << std::endl;

        int left = std::any_cast<int>(visit(context->INT(0)));
        int right = std::any_cast<int>(visit(context->INT(1)));

        std::string double_str = std::to_string(left) + "." + std::to_string(right);

        double result = std::stod(double_str);

        return result;
    };

    std::any visitVarISexpr(mygrammarParser::VarISexprContext* context) {
        std::cout << "visit ISexpr" << std::endl;
        return 0;
    };

    std::any visitLexprR(mygrammarParser::LexprRContext* context) {
        std::cout << "visit LexprR" << std::endl;
        double result;

        result = std::any_cast<double>(context->expr());

        return result;
    };

    std::any visitPrint_expr(mygrammarParser::Print_exprContext* context) {
        std::cout << "visit print_expr" << std::endl;

        std::cout << context->expr()->getText();

        return 0;
    };

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* context) {
        std::cout << "visit ExprAddExpr" << std::endl;

        double left = std::any_cast<double>(visit(context->expr(0)));
        double right = std::any_cast<double>(visit(context->expr(1)));

        if (context->ADD()) {
            return left + right;
        }
        else if (context->SUB()) {
            std::cout << "-";
        }

        return left - right;
    };

    std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* context) {
        std::cout << "visit ExprMULexpr" << std::endl;
        
        double left = std::any_cast<double>(visit(context->expr(0)));
        double right = std::any_cast<double>(visit(context->expr(1)));

        if (right == 0) {
            throw std::invalid_argument("Zero division error");
        }

        if (context->MUL()) {
            return left * right;
        }

        return left / right;
    };

    std::any visitEvar(mygrammarParser::EvarContext* context) {
        std::cout << "visit Evar" << std::endl;
        return 0;
    };

    std::any visitEfloat(mygrammarParser::EfloatContext* context) {
        std::cout << "visit Efloat" << std::endl;
        
        visit(context->float_());

        return (double)0;
    };

    std::any visitExpr_sep(mygrammarParser::Expr_sepContext* context) {
        std::cout << "visit Expr_sep" << std::endl;
        return visit(context->expr());
    };

    std::any visitProg_row(mygrammarParser::Prog_rowContext* context) {

        std::cout << "visit Prog_row" << std::endl;
        return 0;
    };

    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* context) {
        double result = std::any_cast<double>(visit(context->row()));

        std::cout << "visit LineProg" << std::endl;
        return 0;
    };

public:
    std::vector<double> data;

    std::unordered_map<std::string, double> variables;

};