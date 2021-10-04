#include "CommentAutomaton.h"
#include "UndefinedAutomaton.h"

void CommentAutomaton::S0(const string& input)
{
    if (input[index] == '#')
    {
//        Block comment
        if (input[index + 1] == '|')
        {

            for (unsigned int i = 1; i < input.size(); i++)
            {
                if ((input[index + i] == '|') && (input[index + i + 1] == '#'))
                {
                    inputRead = i + 2;
                    return;
                }
                else if (input[index + i] == '\n')
                {
                    newLines++;
                }
            }
        }
//        Single line comment
        else
        {
            for (unsigned int i = 1; i < input.size(); i++)
            {
                if (input[index + i] == '\n')
                {
                    inputRead = i;
                    return;
                }
            }
        }
    }
    else
    {
        Serr();
    }
}