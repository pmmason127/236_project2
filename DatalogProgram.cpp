#include "DatalogProgram.h"

DatalogProgram::DatalogProgram(vector<Token *> tokenList)
{
    RunProgram(tokenList);
}

void DatalogProgram::RunProgram(vector<Token*> tokenList)
{
    int index = 0;
    string schemes;
    string facts;
    string rules;
    string queries;
    string domain;

    if (tokenList[index]->GetTokenType() == "SCHEMES")
    {
        index++;
        Predicate mySchemes;
        mySchemes.InitializePredicate("SCHEMES", index, tokenList);
        schemes = mySchemes.schemeToString();
        if (!mySchemes.GetErrorMessage().empty())
        {
            inputFail = true;
            failMessage = mySchemes.GetErrorMessage();
            PrintResult();
            return;
        }
        if (tokenList[index]->GetTokenType() == "FACTS")
        {
            index++;
            Predicate myFacts;
            myFacts.InitializePredicate("FACTS", index, tokenList);
            facts = myFacts.factToString();
            domain = myFacts.GetDomain();
            if (!myFacts.GetErrorMessage().empty())
            {
                inputFail = true;
                failMessage = myFacts.GetErrorMessage();
                PrintResult();
                return;
            }
            if (tokenList[index]->GetTokenType() == "RULES")
            {
                index++;
                Rule myRule;
                myRule.InitializeRule("RULES", index, tokenList);
                rules = myRule.rulesToString();
                if (!myRule.GetErrorMessage().empty())
                {
                    inputFail = true;
                    failMessage = myRule.GetErrorMessage();
                    PrintResult();
                    return;
                }
                if (tokenList[index]->GetTokenType() == "QUERIES")
                {
                    index++;
                    Predicate myQuery;
                    myQuery.InitializePredicate("QUERIES", index, tokenList);
                    queries = myQuery.queryToString();
                    if (!myQuery.GetErrorMessage().empty())
                    {
                        inputFail = true;
                        failMessage = myQuery.GetErrorMessage();
                        PrintResult();
                        return;
                    }
                    else
                    {
                        PrintResult(schemes, facts, rules, queries, domain);
                        return;
                    }
                }
                else
                {
                    ErrorCheck(index, tokenList, "QUERIES");
                    inputFail = true;
                    PrintResult();
                }
            }
            else
            {
                ErrorCheck(index, tokenList, "RULES");
                inputFail = true;
                PrintResult();
            }
        }
        else
        {
            ErrorCheck(index, tokenList, "FACTS");
            inputFail = true;
            PrintResult();
        }
    }
    else
    {
        ErrorCheck(index, tokenList, "SCHEMES");
        inputFail = true;
        PrintResult();
    }
}

void DatalogProgram::PrintResult(string schemes, string facts, string rules, string queries, string domain)
{
    if (!inputFail)
    {
        cout << "Success!" << endl;
        cout << schemes << facts << rules << queries << domain;
    }
    else
    {
        cout << "Failure!" << endl;
        cout << failMessage << endl;
    }
}

void DatalogProgram::ErrorCheck(int& index, vector<Token*> tokenList, string tokenName)
{
//    Result should simply say which symbol SHOULD have been detected
    vector<string> tokenTitles = {"SCHEMES", "FACTS", "RULES", "QUERIES"};
    vector<string> tokenSymbols = {"Schemes", "Facts", "Rules", "Queries"};
    int vectorIndex = -1;
//    cout << "TokenName: " << tokenName << endl;

    for (int i = 0; i < tokenTitles.size(); i++)
    {
        if (tokenTitles.at(i) == tokenName)
        {
            vectorIndex = i;
        }
    }
    if (vectorIndex == 0)
    {
        tokenList[index]->SetTokenType(TokenType::SCHEMES);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 1)
    {
        tokenList[index]->SetTokenType(TokenType::FACTS);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 2)
    {
        tokenList[index]->SetTokenType(TokenType::RULES);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 3)
    {
        tokenList[index]->SetTokenType(TokenType::QUERIES);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }

    failMessage = tokenList[index]->ToString();
}