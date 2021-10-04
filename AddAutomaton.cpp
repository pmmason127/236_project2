#include "AddAutomaton.h"

void AddAutomaton::S0(const string& input)
{
    if (input[index] == '+')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}