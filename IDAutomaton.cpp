#include "IDAutomaton.h"
#include "UndefinedAutomaton.h"

void IDAutomaton::S0(const string& input)
{
    if (isalpha(input[index]))
    {
        for (unsigned int i = 1; i < input.size(); i++)
        {
            if (!isspace(input[index + i]))
            {
                  if (!isalpha(input[index + i]) && !isdigit(input[index + i]))
                  {
                      inputRead = i;
                      return;
                  }
            }
            else
            {
                inputRead = i;
                return;
            }
        }
    }
    else
    {
        Serr();
    }
}