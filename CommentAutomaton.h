#ifndef PROJECT1_COMMENTAUTOMATON_H
#define PROJECT1_COMMENTAUTOMATON_H
#include "Automaton.h"
#include <string>
using namespace std;

class CommentAutomaton : public Automaton
{
public:
    CommentAutomaton() : Automaton(TokenType::COMMENT) {}  // Call the base constructor

    void S0(const string& input);
};


#endif
