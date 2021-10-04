#ifndef PROJECT1_PARAMETER_H
#define PROJECT1_PARAMETER_H
#include <vector>
#include <string>
#include "Token.h"


class Parameter
{
    Parameter() {};

    void parameter(int& index, vector<Token*> tokenList);
    void parameterList(int& index, vector<Token*> tokenList);
};


#endif