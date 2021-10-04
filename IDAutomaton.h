#ifndef PROJECT1_IDAUTOMATON_H
#define PROJECT1_IDAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class IDAutomaton : public Automaton
{
public:
    IDAutomaton() : Automaton(TokenType::ID) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
