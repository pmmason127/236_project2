#include "Token.h"

Token::Token(TokenType type, string description, int line)
{
    _tokenType      = type;
    _stringValue    = description;
    _lineNumber     = line;
}

string Token::TokenTypeToString(TokenType type)
{
    switch (type)
    {
        case TokenType::UNDEFINED: return "UNDEFINED";
        case TokenType::FACTS: return "FACTS";
        case TokenType::STRING: return "STRING";
        case TokenType::COMMENT: return "COMMENT";
        case TokenType::SCHEMES: return "SCHEMES";
        case TokenType::QUERIES: return "QUERIES";
        case TokenType::RULES: return "RULES";
        case TokenType::ID: return "ID";
        case TokenType::COLON: return "COLON";
        case TokenType::COLON_DASH: return "COLON_DASH";
        case TokenType::COMMA: return "COMMA";
        case TokenType::LEFT_PAREN: return "LEFT_PAREN";
        case TokenType::RIGHT_PAREN: return "RIGHT_PAREN";
        case TokenType::PERIOD: return "PERIOD";
        case TokenType::Q_MARK: return "Q_MARK";
        case TokenType::MULTIPLY: return "MULTIPLY";
        case TokenType::ADD: return "ADD";
        case TokenType::EOF_TYPE: return "EOF";
    }
    return "ERROR"; // a string MUST be returned by the end
}

string Token::ToString()
{
    stringstream output;

    output << "(" << TokenTypeToString(_tokenType) << ",\"" << _stringValue << "\"," << _lineNumber << ")" << endl;
    return output.str();
}

string Token::IndividualToString()
{
    return _stringValue;
}

string Token::GetTokenType()
{
    return TokenTypeToString(_tokenType);
}

void Token::SetStringValue(string newValue)
{
    _stringValue = newValue;
}

void Token::SetTokenType(TokenType newTokenType)
{
    _tokenType = newTokenType;
}

int Token::GetLineNumber()
{
    return _lineNumber;
}

void Token::SetNewLineNumber(int newNumber)
{
    _lineNumber = newNumber;
}