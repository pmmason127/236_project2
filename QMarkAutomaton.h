#ifndef PROJECT1_QMARKAUTOMATON_H
#define PROJECT1_QMARKAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class QMarkAutomaton : public Automaton
{
public:
    QMarkAutomaton() : Automaton(TokenType::Q_MARK) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
