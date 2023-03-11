/*
 * Jorge Lázaro Ruiz            Laura Belizón Merchán
 * 100452172@alumnos.uc3m.es    100452273@alumnos.uc3m.es
 */

#include <stdio.h>
#include <stdlib.h>

#define T_NUMBER 1001
#define T_OPERATOR 1002

int ParseExpression(); // Prototype for forward reference

int token;     // Here we store the current token/literal
int number;    // the value of the number
int token_val; // or the arithmetic operator
// TODO: Pack these variables in a struct

int line_counter = 1;

int rd_lex() {
    int c;

    do {
        c = getchar();
        if (c == '\n')
            line_counter++; // info for rd_syntax_error()
    } while (c == ' ' || c == '\t');

    if (isdigit(c)) {
        ungetc(c, stdin);
        scanf("%d", &number);
        token = T_NUMBER;
        return (token); // returns the Token for Number
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

#define ParseLParen()                                                          \
  MatchSymbol('('); // More concise and efficient definitions
#define ParseRParen() MatchSymbol(')'); // rather than using functions
// This is only useful for matching Literals

int ParseNumber() // Parsing Non Terminals and some Tokens require more
{                 // complex functions
    MatchSymbol(T_NUMBER);
    return number;
}

int ParseParam()
{
    if (token == T_NUMBER) {
        return ParseNumber();
    }

    ParseExpression();
}

int ParseExpression() {
    if (token == T_NUMBER) {
        return ParseNumber();
    }

    ParseLParen()
    MatchSymbol(T_OPERATOR);
    ParseParam();
    ParseParam();
    ParseRParen()
}

int main(void) {

    while (1) {
        rd_lex();
        printf("    OK\n", ParseExpression());
    }

    system("PAUSE");
}