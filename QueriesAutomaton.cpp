#include "QueriesAutomaton.h"

void QueriesAutomaton::S0(const string& input)
{
    if (input[index] == 'Q')
    {
        if (input[index + 1] == 'u')
        {
            if (input[index + 2] == 'e')
            {
                if (input[index + 3] == 'r')
                {
                    if (input[index + 4] == 'i')
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