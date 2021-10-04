#include "PeriodAutomaton.h"

void PeriodAutomaton::S0(const string& input)
{
    if (input[index] == '.')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}