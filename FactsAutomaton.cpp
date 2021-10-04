#include "FactsAutomaton.h"

void FactsAutomaton::S0(const string& input)
{
    if (input[index] == 'F')
    {
        if (input[index + 1] == 'a')
        {
            if (input[index + 2] == 'c')
            {
                if (input[index + 3] == 't')
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