#ifndef PROJECT1_EOFAUTOMATON_H
#define PROJECT1_EOFAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class EoFAutomaton : public Automaton
{
public:
    EoFAutomaton() : Automaton(TokenType::EOF_TYPE) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
