#ifndef PROJECT1_PARSER_H
#define PROJECT1_PARSER_H
#include "Token.h"
#include "Lexer.h"
#include "DatalogProgram.h"
#include <iostream>
#include <vector>
using namespace std;

class Parser
{
public:
    Parser(Lexer* myLexer);
    ~Parser();

    DatalogProgram Parse();

private:
    vector<Token*> _myTokens;
    vector<Token*> _myTokenTypes;
};


#endif
