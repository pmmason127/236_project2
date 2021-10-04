#include "RightParenAutomaton.h"

void RightParenAutomaton::S0(const string& input)
{
    if (input[index] == ')')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}