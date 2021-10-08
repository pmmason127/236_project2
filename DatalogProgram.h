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
    void RunProgram(vector<Token*> tokenList);
    void ErrorCheck(int& index, vector<Token*> tokenList, string tokenName);
    void PrintResult(string schemes = "", string facts = "", string rules = "", string queries = "", string domain = "");
private:
    string failMessage;
    bool inputFail = false;
};


#endif
