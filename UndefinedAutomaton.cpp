#include "UndefinedAutomaton.h"

void UndefinedAutomaton::S0(const string& input)
{
    if (!isalpha(input[index]))
    {
        if (input[index] == '\'')
        {
            for (unsigned int i = 1; i < input.size(); i++)
            {
                if (input[index + i] == '\'' && (input[index + i + 1] != '\''))
                {
                    inputRead = 0;
                    return;
                }
                else if ((input[index + i] == '\'') && (input[index + i + 1] == '\''))
                {
                    i = i + 1;
                    continue;
                }
                else if (input[index + i] == '\n')
                {
                    newLines++;
                }
                if ((input[index + i + 1] == '\0') && input[index + i] != '\'')
                {
                    inputRead = i + 1;
                    return;
                }
            }
        }
        else if ((input[index] == '#') && (input[index + 1] == '|'))
        {
            for (unsigned int i = 1; i < input.size(); i++)
            {
                if ((input[index + i] == '|') && (input[index + i + 1] == '#'))
                {
                    inputRead = 0;
                    return;
                }
                else if (input[index + i] == '\n')
                {
                    newLines++;
                }
                if ((index + i + 2 == input.size()) && (input[index + i] != '|') && (input[index + i + 1] != '#'))
                {
                    inputRead = i + 1;
                    return;
                }
            }
        }
        else if (input[index] != '\0')
        {
            inputRead = 1;
            return;
        }
    }
    else
    {
        Serr();
    }
}