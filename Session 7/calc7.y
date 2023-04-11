%{                      // SECTION 1 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int yylex () ;
extern int yyerror () ;

char temp [2048] ;

#define FF fflush(stdout);

char *my_malloc (int nbytes)
{
    char *p ;
    static long int nb = 0;
    static int nv = 0 ;
    
    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No memory available for %d bytes\n", nbytes) ;
        fprintf (stderr, "%ld bytes allocated in %d calls\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;
    
    return p ;
}


char *genera_cadena (char *nombre)     // this is roughly equivalent to strdup()
{
    char *p ;
    int l ;
    
    l = strlen (nombre)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, nombre) ;
    
    return p ;
}


char *to_string(int n)
{
    sprintf(temp, "%d", n);
    
    return genera_cadena(temp);

}

typedef struct s_attr {
    int valor ;
    int index ;
    char *code ;
} t_attr ;

#define YYSTYPE t_attr

%}

/*
%union {                //  
      int valor ;	//  - numeric attribute
      int index ;	//  - index attribute to identify variables
      char *cadena ;	//  - string attribute to store the output
}
*/

                        // SECTION 2 

%token  NUMBER  
%token  VARIABLE

/*
// Don't use the following system of declaring implicit attributes unless you are very confident about dealing with errors due to missing declarations
// In exams, we will always require the use of explicit attributes.
// %token  <valor>  NUMBER
// %token  <index> VARIABLE
// %type   <cadena>  expression term operand
*/

%right  '='             //  operator with the least precedence
%left   '+' '-'         //  
%left   '*' '/'         //  
%left   UNARY_SIGN	//  operator with the highest precedence 
%%
                        // SECTION 3: Grammar - Semantic Section


axioma:         expression '\n'				{ printf ("%s\n", $1.code) ; }
                r_expr					{ printf ("%s\n", $3.code) ; }
            |   VARIABLE '=' expression '\n'		{ ; }
                r_expr					{ ; }
            ;


r_expr:         /* lambda */				{ ; }
            |   axioma					{ ; }
            ;

expression:      termino					{ $$ = $1; }
            |   expression '+' expression   		{ strcpy(temp, "") ;
             						  strcat(temp, $2.code) ;
             						  strcat(temp, $1.code) ;
             						  strcat(temp, $3.code) ;
             						  $$.code = genera_cadena(temp) ; }
            |   expression '-' expression   		{ strcpy(temp, "") ;
                                                          strcat(temp, $2.code) ;
                                                          strcat(temp, $1.code) ;
                                                          strcat(temp, $3.code) ;
                                                          $$.code = genera_cadena(temp) ; }
            |   expression '*' expression   		{ strcpy(temp, "") ;
                                                          strcat(temp, $2.code) ;
                                                          strcat(temp, $1.code) ;
                                                          strcat(temp, $3.code) ;
                                                          $$.code = genera_cadena(temp) ; }
            |   expression '/' expression   		{ strcpy(temp, "") ;
                                                          strcat(temp, $2.code) ;
                                                          strcat(temp, $1.code) ;
                                                          strcat(temp, $3.code) ;
                                                          $$.code = genera_cadena(temp) ; }
            ;

termino:        operand				{ $$ = $1 ; }
            |   '+' operand %prec UNARY_SIGN		{ ; }
            |   '-' operand %prec UNARY_SIGN		{ ; }    
                                                    
                                                 
            ;

operand:       VARIABLE				{ sprintf (temp, "%c", $1.index + 'A') ; $$.code = genera_cadena(temp) ; }
            |   NUMBER					{ sprintf (temp, "%d", $1.valor) ; $$.code = genera_cadena(temp) ; }
            |   '(' expression ')'			{ sprintf (temp, "(%d)", $2.valor) ; $$.code = genera_cadena(temp) ; }
            ;

%%

                        /* SECTION 4  C Code */
int n_line = 1 ;

int yyerror (message)
char *message ;
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
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
         return NUMBER ;
    }

    if (c >= 'A' && c <= 'Z') {
         yylval.index = c - 'A' ;  
         return VARIABLE ;
    }

    if (c >= 'a' && c <= 'z') {
         yylval.index = c - 'a' ;  
         return VARIABLE ;
    }

    if (c == '\n')
          n_line++ ;
    return c ;
}


int main ()
{
    yyparse () ;
}
