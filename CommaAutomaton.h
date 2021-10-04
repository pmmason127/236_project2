#ifndef PROJECT1_COMMAAUTOMATON_H
#define PROJECT1_COMMAAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class CommaAutomaton : public Automaton
{
public:
    CommaAutomaton() : Automaton(TokenType::COMMA) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
