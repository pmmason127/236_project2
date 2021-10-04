#ifndef PROJECT1_RULE_H
#define PROJECT1_RULE_H
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Token.h"
#include "DatalogProgram.h"
#include "Parameter.h"


class Rule
{
public:
    Rule() {}

    int InitializeRule(string tokenType, int& index, vector<Token*> tokenList);

//    RULE functions
    int myRule(int& index, vector<Token*> tokenList);
    int ruleList(int& index, vector<Token*> tokenList);
    int headPredicate(int& index, vector<Token*> tokenList);
    int predicate(int& index, vector<Token*> tokenList);
    int predicateList(int& index, vector<Token*> tokenList);
    int parameter(int& index, vector<Token*> tokenList);
    int parameterList(int& index, vector<Token*> tokenList);
    int idList(int& index, vector<Token*> tokenList);

    string rulesToString();
    string GetErrorMessage();

private:
    int _rules = 0;
    stringstream myString;
    string _ErrorMessage;

    vector<string> _rulesList;
};


#endif