#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

enum class TokenType
{
    COLON,
    COLON_DASH,
    COMMA,
    LEFT_PAREN,
    RIGHT_PAREN,
    PERIOD,
    Q_MARK,
    MULTIPLY,
    ADD,
    FACTS,
    SCHEMES,
    QUERIES,
    RULES,
    STRING,
    COMMENT,
    ID,
    UNDEFINED,
    EOF_TYPE
};

class Token
{
private:
    int _lineNumber;
    string _stringValue;
    TokenType _tokenType;

public:
    Token(TokenType type, string description, int line);

    // Translates the output of the TokenType from an integer value to a string name of the token type
    string TokenTypeToString(TokenType type);

    // Outputs the final string of each given token in "(TOKEN_TYPE, string, lineNumber)"
    string ToString();
    string IndividualToString();
    string GetTokenType();
    void SetStringValue(string newValue);
    void SetTokenType(TokenType newTokenType);
    int GetLineNumber();
    void SetNewLineNumber(int newNumber);
};

#endif // TOKEN_H

