%{
#include <stdio.h>
#define YYSTYPE double
extern int yyerror();
extern int yyparse();
extern int yylex();
%}

%%

axiom:      	expression { printf ("Expression=%lf\n", $1); }
		| expression '\n' { printf ("Expression=%lf\n", $1); } axiom
           	;

expression:   	operand { $$ = $1; }
           	| operand '+' expression  { $$ = $1 + $3; }
           	| operand '-' expression  { $$ = $1 - $3; }
           	| operand '*' expression  { $$ = $1 * $3; }
           	| operand '/' expression  { $$ = $1 / $3; }
           	;

operand:    	number { $$ = $1; }
           	;

number:      	'0'                       { $$ = 0 ; }
           	| '1'                     { $$ = 1 ; }
           	| '2'                     { $$ = 2 ; }
           	| '3'                     { $$ = 3 ; }
           	| '4'                     { $$ = 4 ; }
           	| '5'                     { $$ = 5 ; }
           	| '6'                     { $$ = 6 ; }
           	| '7'                     { $$ = 7 ; }
           	| '8'                     { $$ = 8 ; }
           	| '9'                     { $$ = 9 ; }
           	;

%%

int yyerror (char *message)
{
    fprintf (stderr, "%s\n", message) ;
}

int yylex ()
{
    unsigned char c ;

    do {
         c = getchar () ;
    } while (c == ' ') ;

    return c ;
}

int main ()
{
    yyparse () ;
}
