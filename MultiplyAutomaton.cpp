#include "MultiplyAutomaton.h"

void MultiplyAutomaton::S0(const string& input)
{
    if (input[index] == '*')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}