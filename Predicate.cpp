#include "Predicate.h"

int Predicate::InitializePredicate(string tokenType, int &index, vector<Token *> tokenList)
{
    cout << "In Predicate..." << endl;
    if (tokenType == "SCHEMES")
    {
        cout << "In SCHEMES..." << endl;
        if (tokenList[index]->GetTokenType() == "COLON")
        {
            index++;
            schemeList(index, tokenList);
            cout << "SCHEME total: " << _schemes << endl;
            for (int i = 0; i < _schemesList.size(); i++)
            {
                cout << _schemesList.at(i) << endl;
            }
            cout << "Exiting SCHEMES..." << endl << endl;
        }
        return 0;
    }

    else if (tokenType == "FACTS")
    {
        cout << "In FACTS..." << endl;
        if (tokenList[index]->GetTokenType() == "COLON")
        {

            index++;
            factList(index, tokenList);
            cout << "FACTS total: " << _facts << endl;
            for (int i = 0; i < _factsList.size(); i++)
            {
                cout << _factsList.at(i) << endl;
            }
            cout << "Exiting FACTS..." << endl << endl;
        }
        return 0;
    }

    else if (tokenType == "QUERIES")
    {
        cout << "In QUERIES..." << endl;
        if (tokenList[index]->GetTokenType() == "COLON")
        {
            index++;
            queryList(index, tokenList);
            cout << "QUERIES total: " << _queries << endl;
            for (int i = 0; i < _queriesList.size(); i++)
            {
                cout << _queriesList.at(i) << endl;
            }
            cout << "Exiting QUERIES..." << endl << endl;
        }
        return 0;
    }
}

//SCHEME functions
int Predicate::scheme(int& index, vector<Token*> tokenList)
{
// scheme  -> 	ID LEFT_PAREN ID idList RIGHT_PAREN
    cout << "In scheme..." << endl;
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
                    _schemesList.push_back(myString.str());
                    myString.str(string());
                    index++;
                }
            }
        }
    }
    return 0;
}
int Predicate::schemeList(int& index, vector<Token*> tokenList)
{
// schemeList -> scheme schemeList | lambda
    while (tokenList[index]->GetTokenType() == "ID")
    {
        cout << "In schemeList..." << endl;
        _schemes++;
        scheme(index, tokenList);
        schemeList(index, tokenList);
    }
    return 0;
}
int Predicate::idList(int& index, vector<Token*> tokenList)
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

//    FACT functions
int Predicate::fact(int& index, vector<Token*> tokenList)
{
//        fact    	    ->	ID LEFT_PAREN STRING stringList RIGHT_PAREN PERIOD
    cout << "In fact..." << endl;
    if (tokenList[index]->GetTokenType() == "ID")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        if (tokenList[index]->GetTokenType() == "LEFT_PAREN")
        {
            myString << tokenList[index]->IndividualToString();
            index++;
            if (tokenList[index]->GetTokenType() == "STRING")
            {
                myString << tokenList[index]->IndividualToString();
                AddToDomain(tokenList[index]->IndividualToString());
                index++;
                stringList(index, tokenList);
                if (tokenList[index]->GetTokenType() == "RIGHT_PAREN")
                {
                    myString << tokenList[index]->IndividualToString();
                    index++;
                    if (tokenList[index]->GetTokenType() == "PERIOD")
                    {
                        myString << tokenList[index]->IndividualToString();
                        _factsList.push_back(myString.str());
                        myString.str(string());
                        index++;
                    }
                }
            }
        }
    }
    return 0;
}

int Predicate::factList(int& index, vector<Token*> tokenList)
{
//        factList	    ->	fact factList | lambda
    while (tokenList[index]->GetTokenType() == "ID")
    {
        cout << "In factList..." << endl;
        _facts++;
        fact(index, tokenList);
        factList(index, tokenList);
    }
    return 0;
}
int Predicate::stringList(int& index, vector<Token*> tokenList)
{
//        stringList	-> 	COMMA STRING stringList | lambda
    cout << "In stringList..." << endl;
    if (tokenList[index]->GetTokenType() == "COMMA")
    {
        myString << tokenList[index]->IndividualToString();
        index++;
        if (tokenList[index]->GetTokenType() == "STRING")
        {
            myString << tokenList[index]->IndividualToString();
            AddToDomain(tokenList[index]->IndividualToString());
            index++;
            stringList(index, tokenList);
        }
    }
    return 0;
}

//    QUERY functions
int Predicate::query(int& index, vector<Token*> tokenList)
{
//        query         ->  predicate Q_MARK
    cout << "In query..." << endl;
    predicate(index, tokenList);
    if (tokenList[index]->GetTokenType() == "Q_MARK")
    {
        myString << tokenList[index]->IndividualToString();
        _queriesList.push_back(myString.str());
        myString.str(string());
        index++;
    }
    return 0;
}
int Predicate::queryList(int& index, vector<Token*> tokenList)
{
//        queryList	    ->  query queryList | lambda
    while (tokenList[index]->GetTokenType() == "ID")
    {
        cout << "In queryList..." << endl;
        _queries++;
        query(index, tokenList);
        queryList(index, tokenList);
    }
    return 0;
}
int Predicate::predicate(int& index, vector<Token*> tokenList)
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
int Predicate::predicateList(int& index, vector<Token*> tokenList)
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
int Predicate::parameter(int& index, vector<Token*> tokenList)
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
int Predicate::parameterList(int& index, vector<Token*> tokenList)
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

string Predicate::schemeToString()
{
    stringstream schemeTotal;

    schemeTotal << "Schemes(" << _schemes << "):" << endl;
    for (unsigned int i = 0; i < _schemesList.size(); i++)
    {
        schemeTotal << "  " << _schemesList.at(i) << endl;
    }

    return schemeTotal.str();
}
string Predicate::factToString()
{
    stringstream factsTotal;

    factsTotal << "Facts(" << _facts << "):" << endl;
    for (unsigned int i = 0; i < _factsList.size(); i++)
    {
        factsTotal << "  " << _factsList.at(i) << endl;
    }

    return factsTotal.str();
}
string Predicate::queryToString()
{
    stringstream queryTotal;

    queryTotal << "Queries(" << _queries << "):" << endl;
    for (unsigned int i = 0; i < _queriesList.size(); i++)
    {
        queryTotal << "  " << _queriesList.at(i) << endl;
    }

    return queryTotal.str();
}

void Predicate::AddToDomain(string newString)
{
    if (_domain.empty())
    {
        _domain.push_back(newString);
    }
    else
    {
        for (unsigned int i = 0; i < _domain.size(); i++)
        {
            if (newString == _domain.at(i))
            {
                break;
            }
            else if ((i == _domain.size() - 1) && (newString != _domain.at(i)))
            {
                _domain.push_back(newString);
            }
        }
    }
    sort(_domain.begin(), _domain.end());
}

string Predicate::GetDomain()
{
    stringstream domainTotal;

    domainTotal << "Domain(" << _domain.size() << "):" << endl;
    for (unsigned int i = 0; i < _domain.size(); i++)
    {
        domainTotal << "  " << _domain.at(i) << endl;
    }
    return domainTotal.str();
}

string Predicate::GetErrorMessage()
{
    stringstream output;

    output << "Failure!\n" << "  " << _ErrorMessage;
    return output.str();
}