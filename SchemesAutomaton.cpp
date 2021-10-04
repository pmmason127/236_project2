#include "SchemesAutomaton.h"

void SchemesAutomaton::S0(const string& input)
{
    if (input[index] == 'S')
    {
        if (input[index + 1] == 'c')
        {
            if (input[index + 2] == 'h')
            {
                if (input[index + 3] == 'e')
                {
                    if (input[index + 4] == 'm')
                    {
                        if (input[index + 5] == 'e')
                        {
                            if (input[index + 6] == 's')
                            {
                                inputRead = 7;
                            }
                        }
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