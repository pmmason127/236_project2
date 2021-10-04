#ifndef PROJECT1_ADDAUTOMATON_H
#define PROJECT1_ADDAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class AddAutomaton : public Automaton
{
public:
    AddAutomaton() : Automaton(TokenType::ADD) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
