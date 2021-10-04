#ifndef PROJECT1_UNDEFINEDAUTOMATON_H
#define PROJECT1_UNDEFINEDAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class UndefinedAutomaton : public Automaton
{
public:
    UndefinedAutomaton() : Automaton(TokenType::UNDEFINED) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
