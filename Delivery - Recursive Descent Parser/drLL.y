// LAURA BELIZÓN MERCHÁN  100452273
// JORGE LÁZARO RUIZ      100452172

%{                      /* SECCION 1 */
#include <stdio.h>
double memoria [26] ;   /* Se define una zona de memoria para las variables */
%}
%union {                /* El tipo de la pila (del AP) tiene caracter dual */
      double valor ;    /*  - valor numerico real */
      int indice ;      /*  - indice para identificar una variable */
}                       /* SECCION 2 */
%token  <valor>  NUMERO    /* Todos los token tienen un tipo para la pila   */
%token  <indice> VARIABLE
%type   <valor>  expression /* Se asocia tambien a los No Terminales un tipo */
%type   <valor>  parameter
%type   <valor>  axiom
%right  '='             /*  es la ultima operacion que se debe realizar */
%left   '+' '-'         /*  menor orden de precedencia */
%left   '*' '/'         /*  orden de precedencia intermedio */
%left   SIGNO_UNARIO    /*  mayor orden de precedencia  */
%%

                        /* SECCION 3: Gramatica - Semantico  */

axiom:		  expression '\n' 			{ printf("Expression = %lf\n", $1) ; }
		  continue
		| NUMERO '\n'				{ printf("Expression = %lf\n", $1) ; }
		  continue
		;

parameter: 	  expression				{ $$ = $1 ; }
		| NUMERO				{ $$ = $1 ; }
		;

expression:    	  '(' '+' parameter parameter ')'	{ $$ = $3 + $4 ; }
		| '(' '-' parameter parameter ')'	{ $$ = $3 - $4 ; }
		| '(' '*' parameter parameter ')'	{ $$ = $3 * $4 ; }
		| '(' '/' parameter parameter ')'	{ $$ = $3 / $4 ; }
		;

continue: 	  // lambda
 		| axiom
 		;

%%


                        /* SECCION 4  Codigo en C */
int n_linea = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s (line %d)\n", mensaje, n_linea) ;
}

int yylex ()
{
    unsigned char c ;

    do {
         c = getchar () ;
    } while (c == ' ') ;

    if (c == '.' || (c >= '0' && c <= '9')) {
         ungetc (c, stdin) ;
         scanf ("%lf", &yylval.valor) ;
         return NUMERO ;
    }

    if (c >= 'A' && c <= 'Z') {
         yylval.indice = c - 'A' ;  /* resta a c el valor ascii de A */
         return VARIABLE ;
    }

    if (c >= 'a' && c <= 'z') {
         yylval.indice = c - 'A' ;  /* resta a c el valor ascii de A  */
         return VARIABLE ;
    }

    if (c == '\n')
          n_linea++ ;
    return c;
}

int main ()
{
    yyparse () ;
}
