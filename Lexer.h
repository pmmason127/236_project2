#ifndef LEXER_H
#define LEXER_H
#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include "Automaton.h"
#include "Token.h"
using namespace std;

class Lexer
{
public:
    Lexer();
    ~Lexer() {}

    void Run(string& input);

    vector<Token*> GetTokenList();
    // TODO: add other public methods here

    int getTokens();

    vector<Token*> ReturnTokenList ();
    vector<Token*> ReturnTokenTypeList();

private:
    vector<Automaton*> _automata;
    vector<Token*> _tokens;
    vector<string> _tokenTypes;

    void CreateAutomata();
};

#endif // LEXER_H

