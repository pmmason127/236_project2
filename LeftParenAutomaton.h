#ifndef PROJECT1_LEFTPARENAUTOMATON_H
#define PROJECT1_LEFTPARENAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class LeftParenAutomaton : public Automaton
{
public:
    LeftParenAutomaton() : Automaton(TokenType::LEFT_PAREN) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
