%{					/* Seccion 1  Declaraciones de C-bison */
#include <stdio.h>
#define YYSTYPE  double
double pot ;
%}
                    		/* Seccion 2  Declaraciones de bison   */  
%%
					/* Seccion 3  Gramática - Semántico   */

axioma:      expresion '\n' { printf ("Expresion=%lf\n", $1) ; }  r_expr
           ;

r_expr:			/* lambda */
           | axioma
           ;

expresion:   operando                { $$ = $1 ; }
           | operando '+' expresion  { $$ = $1 + $3 ; }
           | operando '-' expresion  { $$ = $1 - $3 ; }
           | operando '*' expresion  { $$ = $1 * $3 ; }
           | operando '/' expresion  { $$ = $1 / $3 ; }
           | '('  expresion  ')'     { $$ = $2 ; }
           ;

operando:    numero                  { $$ = $1 ; }
           | '-' numero              { $$ = -$2 ; }
           | '+' numero              { $$ = $2 ; }
           ;

numero:      digito 		    { $$ = $1 ; pot = 1 ; }
           | digito numero	   	    { pot *= 10 ; $$ = $1 * pot + $2 ; }
           ;

digito:      '0'                     { $$ = 0 ; }
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
					/* Seccion 4  Código en C   */
int yyerror (char *mensaje)
{
    fprintf (stderr, "%s\n", mensaje) ;
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
