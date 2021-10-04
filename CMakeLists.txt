cmake_minimum_required(VERSION 3.16.3)
project(project1)

set(CMAKE_CXX_STANDARD 17)

add_executable(project1
                main.cpp
                Lexer.h Lexer.cpp
                ColonAutomaton.cpp ColonAutomaton.cpp
                ColonDashAutomaton.h ColonDashAutomaton.cpp
                Token.h Token.cpp
                CommaAutomaton.cpp CommaAutomaton.h
                LeftParenAutomaton.cpp LeftParenAutomaton.h
                RightParenAutomaton.cpp RightParenAutomaton.h
                PeriodAutomaton.cpp PeriodAutomaton.h
                QMarkAutomaton.cpp QMarkAutomaton.h
                MultiplyAutomaton.cpp MultiplyAutomaton.h
                AddAutomaton.cpp AddAutomaton.h
                FactsAutomaton.cpp FactsAutomaton.h
                SchemesAutomaton.cpp SchemesAutomaton.h
                QueriesAutomaton.cpp QueriesAutomaton.h
                RulesAutomaton.cpp RulesAutomaton.h
                StringAutomaton.cpp StringAutomaton.h
                CommentAutomaton.cpp CommentAutomaton.h
                IDAutomaton.cpp IDAutomaton.h
                UndefinedAutomaton.cpp UndefinedAutomaton.h
                EoFAutomaton.cpp EoFAutomaton.h
                Parser.cpp Parser.h
                DatalogProgram.h DatalogProgram.cpp
                Predicate.cpp Predicate.h
                Rule.cpp Rule.h
                Parameter.cpp Parameter.h)
