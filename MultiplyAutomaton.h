#ifndef PROJECT1_MULTIPLYAUTOMATON_H
#define PROJECT1_MULTIPLYAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class MultiplyAutomaton : public Automaton
{
public:
    MultiplyAutomaton() : Automaton(TokenType::MULTIPLY) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
