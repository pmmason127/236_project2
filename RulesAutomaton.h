#ifndef PROJECT1_RULESAUTOMATON_H
#define PROJECT1_RULESAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class RulesAutomaton : public Automaton
{
public:
    RulesAutomaton() : Automaton(TokenType::RULES) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
