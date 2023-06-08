#include"myVisitor.h"
#include "mygrammarLexer.h"
#include"mygrammarListener.h"
//#include "mygrammarBaseVisitor.h"

int main() {
	std::string express = "a=1;bv=2.4;print:((a*bv*a)/(bv+a));";

	std::stringstream stream(express);
	antlr4::ANTLRInputStream input(stream);
	mygrammarLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	mygrammarParser parser(&tokens);
	myVisitor visitor;

	visitor.visit(parser.prog());


	return 0;
}