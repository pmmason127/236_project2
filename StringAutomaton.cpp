#include "StringAutomaton.h"
#include "UndefinedAutomaton.h"

void StringAutomaton::S0(const string& input)
{
    if (input[index] == '\'')
    {
        for (unsigned int i = 1; i < input.size(); i++)
        {
//            Looking for apostrophe symbol to ignore ''
            if ((input[index + i] == '\'') && (input[index + i + 1] == '\''))
            {
                i = i + 1;
                continue;
            }
            else if (input[index + i] == '\'')
            {
                inputRead = i + 1;
                return;
            }
            else if (input[index + i] == '\n')
            {
                newLines++;
            }
        }
    }
    else
    {
        Serr();
    }
}