#include"myVisitor.h"
#include "mygrammarLexer.h"
#include"mygrammarListener.h"
int main() {
	std::string express = "2+3;";
	std::stringstream stream(express);
	antlr4::ANTLRInputStream input(stream);
	mygrammarLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	mygrammarParser parser(&tokens);
	myVisitor visitor;
	visitor.visit(parser.prog());

	return 0;
}