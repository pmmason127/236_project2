#include "Lexer.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "CommaAutomaton.h"
#include "LeftParenAutomaton.h"
#include "RightParenAutomaton.h"
#include "PeriodAutomaton.h"
#include "QMarkAutomaton.h"
#include "MultiplyAutomaton.h"
#include "AddAutomaton.h"
#include "FactsAutomaton.h"
#include "SchemesAutomaton.h"
#include "QueriesAutomaton.h"
#include "RulesAutomaton.h"
#include "StringAutomaton.h"
#include "CommentAutomaton.h"
#include "IDAutomaton.h"
#include "UndefinedAutomaton.h"
#include "EoFAutomaton.h"

int lineNumber = 1;

Lexer::Lexer()
{
    CreateAutomata();
}

void Lexer::CreateAutomata()
{
    _automata.push_back(new FactsAutomaton());
    _automata.push_back(new SchemesAutomaton());
    _automata.push_back(new QueriesAutomaton());
    _automata.push_back(new RulesAutomaton());
    _automata.push_back(new IDAutomaton());
    _automata.push_back(new ColonAutomaton());
    _automata.push_back(new ColonDashAutomaton());
    _automata.push_back(new CommaAutomaton());
    _automata.push_back(new LeftParenAutomaton());
    _automata.push_back(new RightParenAutomaton());
    _automata.push_back(new PeriodAutomaton());
    _automata.push_back(new QMarkAutomaton());
    _automata.push_back(new MultiplyAutomaton());
    _automata.push_back(new AddAutomaton());
    _automata.push_back(new UndefinedAutomaton());
    _automata.push_back(new StringAutomaton());
    _automata.push_back(new CommentAutomaton());
    _automata.push_back(new EoFAutomaton());
}

void Lexer::Run(string& input)
{
    Automaton* maxAutomaton = _automata.at(0);
    while (input.size() > 0)
    {
        int maxRead = 0;    //set maxRead to 0   <-  What machine read the most characters
        maxAutomaton = _automata[0];
        if (isspace(input[0]))
        {
            if (input[0] == '\n')
            {
                lineNumber += 1;
            }
            input.erase(0, 1);
            continue;
        }
        for (unsigned int i = 0; i < _automata.size(); i++)
        {
            int  inputRead = _automata[i]->Start(input);
            if (inputRead > maxRead)
            {
                maxRead = inputRead;
                maxAutomaton = _automata[i];
            }
        }
        if (maxRead > 0)
        {
            _tokens.push_back(maxAutomaton->CreateToken(input.substr((0), maxRead), lineNumber));
            lineNumber += maxAutomaton->NewLinesRead();
        }
        else
        {
            maxRead = 1;
        }
        input = input.erase(0, maxRead);
    }
}

vector<Token*> Lexer::GetTokenList()
{
    for (unsigned int i = 0; i < _tokens.size(); i++)
    {
        _tokenTypes.push_back(_tokens.at(i)->GetTokenType());
        _tokens.at(i)->ToString();
    }
    return _tokens;
}

 int Lexer::getTokens()
{
    int totalTokens = 0;
    for (unsigned int i = 0; i < _tokens.size(); i++)
    {
        totalTokens++;
    }
    return totalTokens;
}

vector<Token*> Lexer::ReturnTokenList()
{
    return _tokens;
}

vector<Token*> Lexer::ReturnTokenTypeList()
{
    for (unsigned int i = 0; i < _tokens.size(); i++)
    {
        _tokenTypes.push_back(_tokens.at(i)->GetTokenType());
    }
    return _tokens;
}