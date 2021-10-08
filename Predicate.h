#ifndef PROJECT1_PREDICATE_H
#define PROJECT1_PREDICATE_H
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include "Token.h"
#include "Parameter.h"
using namespace std;

class Predicate
{
public:
    Predicate() {}

    int InitializePredicate(string tokenType, int& index, vector<Token*> tokenList);

//    SCHEME functions
    int scheme(int& index, vector<Token*> tokenList);
    int schemeList(int& index, vector<Token*> tokenList);
    int idList(int& index, vector<Token*> tokenList);
    string schemeToString();

//    FACT functions
    int fact(int& index, vector<Token*> tokenList);
    int factList(int& index, vector<Token*> tokenList);
    int stringList(int& index, vector<Token*> tokenList);
    string factToString();

//    QUERY functions
    int query(int& index, vector<Token*> tokenList);
    int queryList(int& index, vector<Token*> tokenList);
    int predicate(int& index, vector<Token*> tokenList);
    int predicateList(int& index, vector<Token*> tokenList);
    int parameter(int& index, vector<Token*> tokenList);
    int parameterList(int& index, vector<Token*> tokenList);
    string queryToString();

    void AddToDomain(string newString);
    string GetDomain();

    void ErrorCheck(int& index, vector<Token*> tokenList, string tokenName);
    string GetErrorMessage();


private:
    int _schemes = 0;
    int _facts = 0;
    int _queries = 0;
    int _returnValue = 0;

    string _errorMessage = "";

    stringstream myString;

    vector<string> _schemesList;
    vector<string> _factsList;
    vector<string> _queriesList;
    vector<string> _domain;
};


#endif