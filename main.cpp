#include "Lexer.h"
#include "Parser.h"
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
//  Takes the file name in from command line and places all contents into "fileContents"
    string fileContents;
    ifstream fileName(argv[1]);
    if (!fileName.is_open())
    {
        cout << "File is not open" << endl;
        fileContents =
                       "Schemes:\n"
                       "  snap(S,N,A,P)\n"
                       "  HasSameAddress(X,Y)\n"
                       "\n"
                       "Facts:\n"
                       "  snap('12345','C. Brown','12 Apple','555-1234').\n"
                       "  snap('33333','Snoopy','12 Apple','555-1234').\n"
                       "\n"
                       "Rules:\n"
                       "  HasSameAddress(X,Y) :- snap(A,X,B,C),snap(D,Y,B,E).\n"
                       "\n"
                       "Queries:\n"
                       "  HasSameAddress('Snoopy',Who)?\n"
                        "  HasSameAddress('Snoopy',Who)?\n"
                        "  HasSameAddress('Snoopy',Who)?\n"
                        "  HasSameAddress('Snoopy',Who)?\n"
                        "test";
    }
    else
    {
        while (fileName.peek() != EOF)
        {
            fileContents.push_back(fileName.get());
        }
        fileContents.push_back('\0');
    }

    Lexer* lexer = new Lexer();
    lexer->Run(fileContents);
    Parser* parser = new Parser(lexer);
    parser->Parse();


//    lexer->GetTokenList();
//    cout << "Total Tokens = " << lexer->getTokens() << endl;

    delete lexer;

    return 0;
}