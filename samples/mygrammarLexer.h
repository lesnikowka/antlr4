
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  mygrammarLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, VAR = 2, DOT = 3, IS = 4, SUB = 5, ADD = 6, DIV = 7, MUL = 8, 
    SEP = 9, LBR = 10, RBR = 11, WS = 12
  };

  explicit mygrammarLexer(antlr4::CharStream *input);

  ~mygrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

