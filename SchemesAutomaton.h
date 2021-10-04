#ifndef PROJECT1_SCHEMESAUTOMATON_H
#define PROJECT1_SCHEMESAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class SchemesAutomaton : public Automaton
{
public:
    SchemesAutomaton() : Automaton(TokenType::SCHEMES) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
