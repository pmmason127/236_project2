#ifndef PROJECT1_PERIODAUTOMATON_H
#define PROJECT1_PERIODAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class PeriodAutomaton : public Automaton
{
public:
    PeriodAutomaton() : Automaton(TokenType::PERIOD) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
