
// Generated from pascal.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  pascalLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, ARRAY = 2, BEGIN = 3, BOOLEAN = 4, CASE = 5, CHAR = 6, CHR = 7, 
    CONST = 8, DIV = 9, DO = 10, DOWNTO = 11, ELSE = 12, END = 13, FILE = 14, 
    FOR = 15, FUNCTION = 16, GOTO = 17, IF = 18, IN = 19, INTEGER = 20, 
    LABEL = 21, MOD = 22, NIL = 23, NOT = 24, OF = 25, OR = 26, PACKED = 27, 
    PROCEDURE = 28, PROGRAM = 29, REAL = 30, RECORD = 31, REPEAT = 32, SET = 33, 
    THEN = 34, TO = 35, TYPE = 36, UNTIL = 37, VAR = 38, WHILE = 39, WITH = 40, 
    PLUS = 41, MINUS = 42, STAR = 43, SLASH = 44, ASSIGN = 45, COMMA = 46, 
    SEMI = 47, COLON = 48, EQUAL = 49, NOT_EQUAL = 50, LT = 51, LE = 52, 
    GE = 53, GT = 54, LPAREN = 55, RPAREN = 56, LBRACK = 57, LBRACK2 = 58, 
    RBRACK = 59, RBRACK2 = 60, POINTER = 61, AT = 62, DOT = 63, DOTDOT = 64, 
    LCURLY = 65, RCURLY = 66, UNIT = 67, INTERFACE = 68, USES = 69, STRING = 70, 
    IMPLEMENTATION = 71, TRUE = 72, FALSE = 73, WS = 74, COMMENT_1 = 75, 
    COMMENT_2 = 76, IDENT = 77, STRING_LITERAL = 78, NUM_INT = 79, NUM_REAL = 80
  };

  explicit pascalLexer(antlr4::CharStream *input);

  ~pascalLexer() override;


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

