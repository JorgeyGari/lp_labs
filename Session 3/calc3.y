%{					/* Seccion 1  Declaraciones de C-bison */
#include <stdio.h>
#define YYSTYPE  double		/* tipo de la pila del parser         */
%}
%token NUMERO     	       	/* Seccion 2  Declaraciones de bison   */  
%%
					/* Seccion 3  Sintactico - Semantico   */

axioma:      expresion '\n' { printf ("Expresion=%lf\n", $1) ; }  r_expr 
           ;

r_expr:			/* lambda */
           | axioma
           ;

expresion:   operando                { $$ = $1; }
           | operando '+' expresion  { $$ = $1 + $3; }
           | operando '-' expresion  { $$ = $1 - $3; }
           | operando '*' expresion  { $$ = $1 * $3; }
           | operando '/' expresion  { $$ = $1 / $3; }
           ;

operando:    NUMERO                  { $$ = $1; }
           | '('  expresion  ')'     { $$ = $2; }
           | '-' NUMERO              { $$ = -$2; }
           | '+' NUMERO              { $$ = $2; }
           | '-' '(' expresion ')'   { $$ = -$3; }
           | '+' '(' expresion ')'   { $$ = $3; }
           ;

%%
					/* Seccion 4  Codigo en C   */

int yyerror (char *mensaje)
{
    fprintf (stderr, "%s\n", mensaje) ;
}


int yylex ()
{
    unsigned char c ;
    int valor ;

    do {
         c = getchar () ;
    } while (c == ' ') ;

    if (c >= '0' && c <= '9') {
         ungetc (c, stdin) ;
         scanf ("%d", &valor) ;
         yylval = (double) valor ;
         return NUMERO ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
