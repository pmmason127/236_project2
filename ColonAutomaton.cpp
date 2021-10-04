#include "ColonAutomaton.h"

void ColonAutomaton::S0(const string& input)
{
    if (input[index] == ':')
    {
        inputRead = 1;
    }
    else
    {
        Serr();
    }
}