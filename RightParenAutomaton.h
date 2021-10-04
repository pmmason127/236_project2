#ifndef PROJECT1_RIGHTPARENAUTOMATON_H
#define PROJECT1_RIGHTPARENAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class RightParenAutomaton : public Automaton
{
public:
    RightParenAutomaton() : Automaton(TokenType::RIGHT_PAREN) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
