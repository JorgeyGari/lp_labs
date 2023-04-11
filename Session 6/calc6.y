/*
*  Laura Belizón Merchán 	Jorge Lázaro Ruiz
*  100452273@alumnos.uc3m  	100452172@alumnos.uc3m
*/

%{                      // SECCION 1
#include <stdio.h>
int memoria [26] ;   	// Se define una zona de memoria para las variables 
%}
%union {                // El tipo de la pila (del AP) tiene caracter dual 
      int valor ;       //  - valor numerico entero 
      int indice ;      //  - indice para identificar una variable 
}                       // SECCION 2 
%token  <valor>  NUMERO    // Todos los token tienen un tipo para la pila
%token  <indice> VARIABLE
%type   <valor>  expresion // Se asocia tambien a los No Terminales un tipo 
%type   <valor>  termino operando
%right  '='             //  es la ultima operacion que se debe realizar
%left   '+' '-'         //  menor orden de precedencia 
%left   '*' '/'         //  orden de precedencia intermedio 
%left   SIGNO_UNARIO    //  mayor orden de precedencia 
%%
                        // SECCION 3: Gramatica - Semantico 
axioma:       expresion '\n'              { printf (".\n") ; }
                       r_expr
            | VARIABLE '=' expresion '\n' { memoria [$1] = $3;
                                            printf (" %c ! \n", $1+'A');
                                          }
                       r_expr
            ;

r_expr:                      /* lambda */
            | axioma
            ;

expresion:    termino                    { $$ = $1; }
            | expresion '+' expresion    { printf(" + "); }
            | expresion '-' expresion    { printf(" - "); }
            | expresion '*' expresion    { printf(" * "); }
            | expresion '/' expresion    { printf(" / "); }
            ;

termino:      operando                           { $$ = $1 ; }
            | '+' operando %prec SIGNO_UNARIO    { $$ = $2 ; }
            | '-' operando %prec SIGNO_UNARIO    { $$ = -$2 ; }
            ;

operando:     VARIABLE                   { $$ = $1 ; printf(" %c @ ", $1+'A') ; }
            | NUMERO                     { printf(" %d ", $1) ; }
            | '(' expresion ')'          { $$ = $2 ; }
            ;

%%

                        /* SECCION 4  Codigo en C */
int n_linea = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_linea) ;
}

int yylex ()
{
    unsigned char c ;

    do {
         c = getchar () ;
    } while (c == ' ') ;

    if (c == '.' || (c >= '0' && c <= '9')) {
         ungetc (c, stdin) ;
         scanf ("%d", &yylval.valor) ;
         return NUMERO ;
    }

    if (c >= 'A' && c <= 'Z') {
         yylval.indice = c - 'A' ;  // resta a c el valor ascii de A
         return VARIABLE ;
    }

    if (c >= 'a' && c <= 'z') {
         yylval.indice = c - 'a' ;  // resta a c el valor ascii de a 
         return VARIABLE ;
    }

    if (c == '\n')
          n_linea++ ;
    return c ;
}

int main ()
{
    yyparse () ;
}
