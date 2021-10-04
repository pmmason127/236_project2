#ifndef PROJECT1_QUERIESAUTOMATON_H
#define PROJECT1_QUERIESAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class QueriesAutomaton : public Automaton
{
public:
    QueriesAutomaton() : Automaton(TokenType::QUERIES) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
