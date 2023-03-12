/*
 * Jorge Lázaro Ruiz            Laura Belizón Merchán
 * 100452172@alumnos.uc3m.es    100452273@alumnos.uc3m.es
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define T_NUMBER 1001
#define T_OPERATOR 1002
#define T_VARIABLE 1003

int ParseExpression(); // Prototype for forward reference

int token;     // Here we store the current token/literal
int number;    // the value of the number
char letter;   // the value of the variable
int token_val; // or the arithmetic operator
// TODO: Pack these variables in a struct

int variables[52];  // Array of variables

int line_counter = 1;

int rd_lex() {
    int c;

    do {
        c = getchar();
        // printf("c: %c\n", c);
        if (c == '\n')
            line_counter++; // info for rd_syntax_error()
    } while (c == ' ' || c == '\t');

    if (isdigit(c)) {
        ungetc(c, stdin);
        scanf("%d", &number);
        token = T_NUMBER;
        return (token); // returns the Token for Number
    }

    if (isalpha(c)) {
        ungetc(c, stdin);
        scanf("%c", &letter);
        token = T_VARIABLE;
        return (token); // returns the Token for Variable
    }

    if (c == '+' || c == '-' || c == '*' || c == '/') {
        token_val = c;
        token = T_OPERATOR;
        return (token);
    } // returns the Token for Arithmetic Operators

    token = c;
    return (token); // returns a literal
}

void rd_syntax_error(int expected, int token, char *output) {
    fprintf(stderr, "ERROR in line %d \n", line_counter);
    fprintf(stderr, output, expected, token);

    exit(0);
}

void MatchSymbol(int expected_token) {
    if (token != expected_token) {
        rd_syntax_error(expected_token, token, "token %d expected, but %d was read\n");
    } else {
        token = rd_lex();
    }
}

#define ParseLParen() MatchSymbol('(');
#define ParseRParen() MatchSymbol(')');

int ParseNumber() {
    int val = number;
    MatchSymbol(T_NUMBER);
    return val;
}

int ParseVariable() {
    int val = variables[token - 'A'];
    MatchSymbol(T_VARIABLE);
    return val;
}

int ParseAxiom() {
    if (token == T_NUMBER)  // S ::= N
    {
        return ParseNumber();
    }

    if (token == T_VARIABLE)  // S ::= V
    {
        return ParseVariable();
    }

    // S ::= E
    int val = ParseExpression();
    return val;
}

int ParseOperator() {
    if (token == T_OPERATOR) {
        int op = token_val;
        token = rd_lex();
        return op;
    } else {
        rd_syntax_error(T_OPERATOR, token, "token %d expected, but %d was read\n");
    }
}

int ParseParameter()    // P ::= E | N
{
    if (token == T_NUMBER)  // P ::= N
    {
        return ParseNumber();
    }

    // P ::= E
    ParseExpression();
}

int ParseA()
{
    if (token == T_OPERATOR) {  // A ::= O P
        ParseOperator();
        return ParseParameter();
    }
    else {  // A ::= ! V
        MatchSymbol('!');
        return ParseVariable();
    }
}

int ParseLeftExpr()    // L ::= ( A
{
    ParseLParen()
    ParseA();
}

int ParseExpression()   // E ::= L P )
{
    int left = ParseLeftExpr();
    int right = ParseParameter();
    ParseRParen()

    switch (token_val) {
        case '+':
            return left + right;
        case '-':
            return left - right;
        case '*':
            return left * right;
        case '/':
            return left / right;
    }
}

int main(void) {

    while (1) {
        rd_lex();
        printf("Value: %d\n", ParseAxiom());
    }

    system("PAUSE");
}
