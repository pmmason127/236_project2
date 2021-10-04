#include "Parser.h"

Parser::Parser(Lexer* myLexer)
{
    _myTokens = myLexer->ReturnTokenList();
    myLexer->ReturnTokenTypeList();
    _myTokenTypes = myLexer->ReturnTokenTypeList();

    for (int i = 0; i < _myTokens.size(); i++)
    {
        if (_myTokens.at(i)->GetTokenType() == "COMMENT")
        {
            _myTokens.erase(_myTokens.begin() + i);
            i = i - 1;
        }
    }
}

DatalogProgram Parser::Parse()
{
    DatalogProgram myDatalog(_myTokens);// = new DatalogProgram(_myTokens);
    return myDatalog;
}