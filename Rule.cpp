#include "Rule.h"

//datalogProgram	->	SCHEMES COLON scheme schemeList FACTS COLON factList RULES COLON ruleList QUERIES COLON query queryList EOF
int Rule::InitializeRule(string tokenType, int &index, vector<Token *> tokenList)
{
    if (tokenType == "RULES")
    {
//        cout << "In RULES..." << endl;
        if (tokenList[index]->GetTokenType() == "COLON")
        {
            index++;
            ruleList(index, tokenList);
//            cout << "RULES total: " << _rules << endl;
//            for (int i = 0; i < _rulesList.size(); i++)
//            {
//                cout << _rulesList.at(i) << endl;
//            }
//            cout << "Exiting RULES..." << endl << endl;
        }
        else
        {
            if (tokenList[index]->GetLineNumber() != tokenList[index - 1]->GetLineNumber())
            {
                tokenList[index]->SetNewLineNumber(tokenList[index]->GetLineNumber() - 1);
            }
            ErrorCheck(index, tokenList, "COLON");
            _returnValue = -1;
            return _returnValue;
        }
    }
    return 0;
}

//    RULE functions
int Rule::myRule(int &index, vector<Token *> tokenList)
{
//    rule    ->	headPredicate COLON_DASH predicate predicateList PERIOD
//    cout << "In myRule..." << endl;
    headPredicate(index, tokenList);
    if (_returnValue == -1)
    {
        return -1;
    }
    if (tokenList[index]->GetTokenType() == "COLON_DASH")
    {
        myString << " " << tokenList[index]->IndividualToString() << " ";
        index++;
        predicate(index, tokenList);
        if (_returnValue == -1)
        {
            return -1;
        }
        predicateList(index, tokenList);
        if (_returnValue == -1)
        {
            return -1;
        }
        if (tokenList[index]->GetTokenType() == "PERIOD")
        {
            myString << tokenList[index]->IndividualToString();
            _rulesList.push_back(myString.str());
            myString.str(string());
            index++;
        }
        else if (tokenList[index]->GetTokenType() == "QUERIES")
        {
            tokenList[index]->SetNewLineNumber(tokenList[index - 1]->GetLineNumber());
            ErrorCheck(index, tokenList, "PERIOD");
            _returnValue = -1;
            return _returnValue;
        }
        else
        {
            cout << "TEST" << endl;
            if (tokenList[index]->GetLineNumber() != tokenList[index - 1]->GetLineNumber())
            {
                tokenList[index]->SetNewLineNumber(tokenList[index]->GetLineNumber());
            }
            ErrorCheck(index, tokenList, "PERIOD");
            _returnValue = -1;
            return _returnValue;
        }
    }
    else
    {
        ErrorCheck(index, tokenList, "COLON_DASH");
        _returnValue = -1;
        return _returnValue;
    }
    return 0;
}
int Rule::ruleList(int& index, vector<Token*> tokenList)
{
//ruleList	->	rule ruleList | lambda
    while (tokenList[index]->GetTokenType() == "ID")
    {
//        cout << "In ruleList..." << endl;
        _rules++;
        myRule(index, tokenList);
        if (_returnValue == -1)
        {
            return -1;
        }
        ruleList(index, tokenList);
        if (_returnValue == -1)
        {
            return -1;
        }
    }
    return 0;
}
int Rule::headPredicate(int& index, vector<Token*> tokenList)
{
//    headPredicate	->	ID LEFT_PAREN ID idList RIGHT_PAREN
//    cout << "In headPredicate..." << endl;
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
                while((tokenList[index]->GetTokenType() != "RIGHT_PAREN"))
                {
                    idList(index, tokenList);
                    if (_returnValue == -1)
                    {
                        return -1;
                    }
                }
                if (tokenList[index]->GetTokenType() == "RIGHT_PAREN")
                {
                    myString << tokenList[index]->IndividualToString();
                    index++;
                }
                else
                {
                    ErrorCheck(index, tokenList, "RIGHT_PAREN");
                    _returnValue = -1;
                    return _returnValue;
                }
            }
        }
        else
        {
            ErrorCheck(index, tokenList, "LEFT_PAREN");
            _returnValue = -1;
            return _returnValue;
        }
    }
    return 0;
}
int Rule::predicate(int& index, vector<Token*> tokenList)
{
//        predicate	    ->  ID LEFT_PAREN parameter parameterList RIGHT_PAREN
//    cout << "In predicate..." << endl;
    if (tokenList[index]->GetTokenType() == "ID")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        if (tokenList[index]->GetTokenType() == "LEFT_PAREN")
        {
            myString << tokenList[index]->IndividualToString();
            index++;
            parameter(index, tokenList);
            if (_returnValue == -1)
            {
                return -1;
            }
            while ((tokenList[index]->GetTokenType() != "RIGHT_PAREN") &&
                    (tokenList[index + 3]->GetTokenType() != "LEFT_PAREN") &&
                    (tokenList[index + 2]->GetTokenType() != "LEFT_PAREN"))
            {
                parameterList(index, tokenList);
                if (_returnValue == -1)
                {
                    return -1;
                }
            }
            if (tokenList[index]->GetTokenType() == "RIGHT_PAREN")
            {
                myString << tokenList[index]->IndividualToString();
                index++;
            }
            else
            {
                ErrorCheck(index, tokenList, "RIGHT_PAREN");
                _returnValue = -1;
                return _returnValue;
            }
        }
        else
        {
            ErrorCheck(index, tokenList, "LEFT_PAREN");
            _returnValue = -1;
            return _returnValue;
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
//            cout << "In predicateList..." << endl;
            predicate(index, tokenList);
            if (_returnValue == -1)
            {
                return -1;
            }
        }
    }
    else if ((tokenList[index]->GetTokenType() != "ID") &&
             (tokenList[index + 3]->GetTokenType() == "LEFT_PAREN"))
    {
//        cout << "TESTING TESTING" << endl;
        ErrorCheck(index, tokenList, "RIGHT_PAREN");
        _returnValue = -1;
        return _returnValue;
    }
    else
    {
//        cout << "LINE 232" << endl;
        ErrorCheck(index, tokenList, "COMMA");
        _returnValue = -1;
        return _returnValue;
    }

    return 0;
}
int Rule::parameter(int& index, vector<Token*> tokenList)
{
//        parameter     ->  STRING | ID
//    cout << "In parameter..." << endl;
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
//            cout << "In parameterList..." << endl;
            parameter(index, tokenList);
        }
    }
    else
    {
//        cout << "LINE 266" << endl;
        ErrorCheck(index, tokenList, "COMMA");
        _returnValue = -1;
        return _returnValue;
    }
    return 0;
}
int Rule::idList(int& index, vector<Token*> tokenList)
{
//        idList  	    -> 	COMMA ID idList | lambda
//    cout << "In idList..." << endl;
    if (tokenList[index]->GetTokenType() == "COMMA")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        if (tokenList[index]->GetTokenType() == "ID")
        {
            myString << tokenList[index]->IndividualToString();
            index++;
        }
    }
    else
    {
//        cout << "LINE 289" << endl;
        ErrorCheck(index, tokenList, "COMMA");
        _returnValue = -1;
        return _returnValue;
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

void Rule::ErrorCheck(int& index, vector<Token*> tokenList, string tokenName)
{
//    Result should simply say which symbol SHOULD have been detected
    vector<string> tokenTitles = {"Q_MARK", "LEFT_PAREN", "RIGHT_PAREN", "PERIOD", "COMMA", "COLON", "COLON_DASH",
                                  "MULTIPLY", "ADD"};
    vector<string> tokenSymbols = {"?", "(", ")", ".", ",", ":", ":-", "*", "+"};
    int vectorIndex = -1;
//    cout << "TokenName: " << tokenName << endl;

    for (int i = 0; i < tokenTitles.size(); i++)
    {
        if (tokenTitles.at(i) == tokenName)
        {
            vectorIndex = i;
//            cout << vectorIndex << endl;
        }
    }

    if (vectorIndex == 2)
    {
        if ((tokenList[index]->GetTokenType() == "SCHEMES") || (tokenList[index]->GetTokenType() == "FACTS") ||
            (tokenList[index]->GetTokenType() == "QUERIES") || (tokenList[index]->GetTokenType() == "EOF") ||
            (tokenList[index]->GetTokenType() == "ID"))
        {
            int newLineNumber = tokenList[index - 1]->GetLineNumber();
            tokenList[index]->SetNewLineNumber(newLineNumber);
        }
    }

    if (vectorIndex == 0)
    {
        tokenList[index]->SetTokenType(TokenType::Q_MARK);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 1)
    {
        tokenList[index]->SetTokenType(TokenType::LEFT_PAREN);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 2)
    {
        tokenList[index]->SetTokenType(TokenType::RIGHT_PAREN);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 3)
    {
        tokenList[index]->SetTokenType(TokenType::PERIOD);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 4)
    {
        tokenList[index]->SetTokenType(TokenType::COMMA);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 5)
    {
        tokenList[index]->SetTokenType(TokenType::COLON);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 6)
    {
        tokenList[index]->SetTokenType(TokenType::COLON_DASH);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 7)
    {
        tokenList[index]->SetTokenType(TokenType::MULTIPLY);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    if (vectorIndex == 8)
    {
        tokenList[index]->SetTokenType(TokenType::ADD);
        tokenList[index]->SetStringValue(tokenSymbols.at(vectorIndex));
    }
    _errorMessage = tokenList[index]->ToString();
}

string Rule::GetErrorMessage()
{
    return _errorMessage;
}