#ifndef PROJECT1_DATALOGPROGRAM_H
#define PROJECT1_DATALOGPROGRAM_H
#include "Predicate.h"
#include "Rule.h"
#include "Parameter.h"
#include "Predicate.h"
#include "Token.h"
#include <vector>
#include <string>
using namespace std;


class DatalogProgram
{
public:
    DatalogProgram(vector<Token*> tokenList);
private:
    string _errorMessage;
};


#endif
