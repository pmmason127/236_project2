#ifndef PROJECT1_FACTSAUTOMATON_H
#define PROJECT1_FACTSAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class FactsAutomaton : public Automaton
{
public:
    FactsAutomaton() : Automaton(TokenType::FACTS) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
