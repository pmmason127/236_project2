#include "CommaAutomaton.h"

void CommaAutomaton::S0(const string& input)
{
    if (input[index] == ',')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}