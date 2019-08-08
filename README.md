# Simple-Lexical-analyzer
Lexical analyzer takes a stream of chars (source code) and then analyzes the code to give
what kind of tokens are present at what line and at what location.

Makefile has been supplied for easier compilation and execution

Commands to run:
1) make
2) ./a.out [name_of_the_file] (sample.txt in this case)

Works on linux!


Output: 
IC: 123 <line: 3 position: 1>
BINOP: + <line: 3 position: 5>
SEPERATOR: { <line: 4 position: 1>
IC: 345 <line: 4 position: 2>
SEPERATOR: } <line: 4 position: 5>
SEPERATOR: ( <line: 5 position: 1>
ID: abc <line: 5 position: 2>
SEPERATOR: ) <line: 5 position: 5>
BINOP: - <line: 5 position: 7>
NO TOKEN: @ <line: 6position: 1>
IC: 789 <line: 8 position: 1>
BINOP: * <line: 8 position: 5>
BINOP: * <line: 8 position: 6>
SEPERATOR: ; <line: 8 position: 8>
ID: de <line: 9 position: 1>
SEPERATOR: , <line: 9 position: 3>
ID: f <line: 9 position: 5>
BINOP: / <line: 10 position: 1>
ID: a12 <line: 10 position: 3>
End of file: 
