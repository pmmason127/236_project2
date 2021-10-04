#include "RulesAutomaton.h"

void RulesAutomaton::S0(const string& input)
{
    if (input[index] == 'R')
    {
        if (input[index + 1] == 'u')
        {
            if (input[index + 2] == 'l')
            {
                if (input[index + 3] == 'e')
                {
                    if (input[index + 4] == 's')
                    {
                        inputRead = 5;
                    }
                }
            }
        }
    }
    else
    {
        Serr();
    }
}