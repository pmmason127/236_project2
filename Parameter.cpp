#include "Parameter.h"

void Parameter::parameter(int& index, vector<Token*> tokenList)
{
    //        parameter     ->  STRING | ID
    cout << "In parameter..." << endl;
    if ((tokenList[index]->GetTokenType() == "STRING") || (tokenList[index]->GetTokenType() == "ID"))
    {
        index++;
    }
}
void Parameter::parameterList(int& index, vector<Token*> tokenList)
{
    //        parameterList	-> 	COMMA parameter parameterList | lambda
    if (tokenList[index]->GetTokenType() == "COMMA")
    {
        index++;
        while ((tokenList[index]->GetTokenType() == "STRING") || (tokenList[index]->GetTokenType() == "ID"))
        {
            cout << "In parameterList..." << endl;
            parameter(index, tokenList);
            parameterList(index, tokenList);
        }
    }
}