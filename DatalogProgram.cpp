#include "DatalogProgram.h"

DatalogProgram::DatalogProgram(vector<Token*> tokenList)
{
// datalogProgram -> SCHEMES COLON scheme schemeList FACTS COLON factList RULES COLON ruleList QUERIES COLON query queryList EOF
//          Parser pseudocode compared to the actual code side by side
    cout << "In DatalogProgram..." << endl;
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
    }

    if (tokenList[index]->GetTokenType() == "FACTS")
    {
        index++;
        Predicate myFacts;
        myFacts.InitializePredicate("FACTS", index, tokenList);
        facts = myFacts.factToString();
        domain = myFacts.GetDomain();
    }

    if (tokenList[index]->GetTokenType() == "RULES")
    {
        index++;
        Rule myRule;
        myRule.InitializeRule("RULES", index, tokenList);
        rules = myRule.rulesToString();
    }

    if (tokenList[index]->GetTokenType() == "QUERIES")
    {
        index++;
        Predicate myQuery;
        myQuery.InitializePredicate("QUERIES", index, tokenList);
        queries = myQuery.queryToString();
    }


    cout << "Success!" << endl;
    cout << schemes << facts << rules << queries << domain;

}