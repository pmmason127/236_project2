#ifndef PROJECT1_STRINGAUTOMATON_H
#define PROJECT1_STRINGAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class StringAutomaton : public Automaton
{
public:
    StringAutomaton() : Automaton(TokenType::STRING) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
