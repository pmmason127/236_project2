#include "Rule.h"

//datalogProgram	->	SCHEMES COLON scheme schemeList FACTS COLON factList RULES COLON ruleList QUERIES COLON query queryList EOF
int Rule::InitializeRule(string tokenType, int &index, vector<Token *> tokenList)
{
    if (tokenType == "RULES")
    {
        cout << "In RULES..." << endl;
        if (tokenList[index]->GetTokenType() == "COLON")
        {
            index++;
            ruleList(index, tokenList);
            cout << "RULES total: " << _rules << endl;
            for (int i = 0; i < _rulesList.size(); i++)
            {
                cout << _rulesList.at(i) << endl;
            }
            cout << "Exiting RULES..." << endl << endl;
        }
    }
    return 0;
}

//    RULE functions
int Rule::myRule(int &index, vector<Token *> tokenList)
{
//    rule    ->	headPredicate COLON_DASH predicate predicateList PERIOD
    cout << "In myRule..." << endl;
    headPredicate(index, tokenList);
    if (tokenList[index]->GetTokenType() == "COLON_DASH")
    {
        myString << " " << tokenList[index]->IndividualToString() << " ";
        index++;
        predicate(index, tokenList);
        predicateList(index, tokenList);
        if (tokenList[index]->GetTokenType() == "PERIOD")
        {
            myString << tokenList[index]->IndividualToString();
            _rulesList.push_back(myString.str());
            myString.str(string());
            index++;
        }
    }
    return 0;
}
int Rule::ruleList(int& index, vector<Token*> tokenList)
{
//ruleList	->	rule ruleList | lambda
    while (tokenList[index]->GetTokenType() == "ID")
    {
        cout << "In ruleList..." << endl;
        _rules++;
        myRule(index, tokenList);
        ruleList(index, tokenList);
    }
    return 0;
}
int Rule::headPredicate(int& index, vector<Token*> tokenList)
{
//    headPredicate	->	ID LEFT_PAREN ID idList RIGHT_PAREN
    cout << "In headPredicate..." << endl;
    if (tokenList[index]->GetTokenType() == "ID")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        if (tokenList[index]->GetTokenType() == "LEFT_PAREN")
        {
            myString << tokenList[index]->IndividualToString();
            index++;
            if (tokenList[index]->GetTokenType() == "ID")
            {
                myString << tokenList[index]->IndividualToString();
                index++;
                idList(index, tokenList);
                if (tokenList[index]->GetTokenType() == "RIGHT_PAREN")
                {
                    myString << tokenList[index]->IndividualToString();
                    index++;
                }
            }
        }
    }
    return 0;
}
int Rule::predicate(int& index, vector<Token*> tokenList)
{
//        predicate	    ->  ID LEFT_PAREN parameter parameterList RIGHT_PAREN
    cout << "In predicate..." << endl;
    if (tokenList[index]->GetTokenType() == "ID")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        if (tokenList[index]->GetTokenType() == "LEFT_PAREN")
        {
            myString << tokenList[index]->IndividualToString();
            index++;
            parameter(index, tokenList);
            parameterList(index, tokenList);
            if (tokenList[index]->GetTokenType() == "RIGHT_PAREN")
            {
                myString << tokenList[index]->IndividualToString();
                index++;
            }
        }
    }
    return 0;
}
int Rule::predicateList(int& index, vector<Token*> tokenList)
{
//        predicateList	->	COMMA predicate predicateList | lambda
    if (tokenList[index]->GetTokenType() == "COMMA")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        while (tokenList[index]->GetTokenType() == "ID")
        {
            cout << "In predicateList..." << endl;
            predicate(index, tokenList);
            predicateList(index, tokenList);
        }
    }
    return 0;
}
int Rule::parameter(int& index, vector<Token*> tokenList)
{
//        parameter     ->  STRING | ID
    cout << "In parameter..." << endl;
    if ((tokenList[index]->GetTokenType() == "STRING") || (tokenList[index]->GetTokenType() == "ID"))
    {
        myString << tokenList[index]->IndividualToString();
        index++;
    }
    return 0;
}
int Rule::parameterList(int& index, vector<Token*> tokenList)
{
//        parameterList	-> 	COMMA parameter parameterList | lambda
    if (tokenList[index]->GetTokenType() == "COMMA")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        while ((tokenList[index]->GetTokenType() == "STRING") || (tokenList[index]->GetTokenType() == "ID"))
        {
            cout << "In parameterList..." << endl;
            parameter(index, tokenList);
            parameterList(index, tokenList);
        }
    }
    return 0;
}
int Rule::idList(int& index, vector<Token*> tokenList)
{
//        idList  	    -> 	COMMA ID idList | lambda
    cout << "In idList..." << endl;
    if (tokenList[index]->GetTokenType() == "COMMA")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        if (tokenList[index]->GetTokenType() == "ID")
        {
            myString << tokenList[index]->IndividualToString();
            index++;
            idList(index, tokenList);
        }
    }
    return 0;
}

string Rule::rulesToString()
{
    stringstream rulesTotal;

    rulesTotal << "Rules(" << _rules << "):" << endl;
    for (unsigned int i = 0; i < _rulesList.size(); i++)
    {
        rulesTotal << "  " << _rulesList.at(i) << endl;
    }

    return rulesTotal.str();
}

string Rule::GetErrorMessage()
{
    return "Failure!";
}