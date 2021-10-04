#include "EoFAutomaton.h"

void EoFAutomaton::S0(const string& input)
{
    if (input[index] == '\0')
    {
        inputRead = 1;
        return;
    }
    else
    {
        Serr();
    }
}