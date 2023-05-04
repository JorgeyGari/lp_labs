%{                          // SECTION 1 Declarations for C-Bison
#include <stdio.h>
#include <ctype.h>            // tolower()
#include <string.h>           // strcmp() 
#include <stdlib.h>           // exit()

#define FF fflush(stdout);    // to force immediate printing 

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;

// Definitions for explicit attributes

typedef struct s_attr {
    int value ;    // - Numeric value of a NUMBER 
    char *code ;   // - to pass IDENTIFIER names, and other translations 
} t_attr ;

#define YYSTYPE t_attr     // stack of PDA has type t_attr

%}

// Definitions for explicit attributes

%token NUMBER        
%token IDENTIF       // Identifier=variable
%token INTEGER       // token for integer type
%token STRING        // token for string type
%token MAIN          // token for keyword main 
%token WHILE         // token for keyword while
%token PUTS          // token for keyword puts
%token PRINTF        // token for keyword printf
%token LEQ           // token for <=
%token GEQ           // token for >=
%token EQ            // token for ==
%token NEQ           // token for !=
%token OR            // token for ||
%token AND           // token for &&
%token IF            // token for keyword if
%token ELSE          // token for keyword else
%token FOR           // token for keyword for
%token RETURN       // token for keyword return


// Definitions for implicit attributes.
// USE THESE ONLY AT YOUR OWN RISK
/* 

%union {           // The type of the stack has dual character   
    int value ;    // - Numeric value of a NUMBER 
    char *code ;   // - to pass IDENTIFIER names, and other translations 
} 
    

%token <value> NUMBER        
%token <code> IDENTIF       // Identifier=variable
%token <code> INTEGER       // token for integer type
%token <code> STRING        // token for string type
%token <code> MAIN          // token for keyword main 
%token <code> WHILE         // token for keyword while
%token <code> INT	   // token for keyword int
%token <code> MAIN	   // token for keyword main

%type <...> Axiom ...

*/

%right '='                      // lowest precedence 
%left OR                        //
%left AND                       //
%left EQ NEQ                    //
%left '<' '>' LEQ GEQ           //
%left '+' '-'                   //
%left '*' '/' '%'               // 
%left UNARY_SIGN                // highest precedence

%%                            // Section 3 Grammar - Semantic Actions

axiom:  
        MAIN '(' ')' '{' body '}'              { printf ("(defun main ()\n%s\n)\n", $5.code) ;
					                            $$.code = gen_code (temp) ; }

	    | bdeclare MAIN '(' ')' '{' body '}'	{ printf ("%s\n(defun main ()\n%s\n)\n", $1.code, $6.code) ;
					                            $$.code = gen_code (temp) ; } // TODO: Add RETURN
	    ;

bdeclare:
        declare ';'				    { sprintf (temp, "%s ", $1.code) ;
                                    $$.code = gen_code (temp) ; }

	    | declare ';' bdeclare		{ sprintf (temp, "%s \n%s ", $1.code, $3.code) ;
						            $$.code = gen_code (temp) ; }

        | function                  { sprintf (temp, "%s ", $1.code) ;
                                    $$.code = gen_code (temp) ; }

        | function bdeclare         { sprintf (temp, "%s \n%s ", $1.code, $2.code) ;
                                    $$.code = gen_code (temp) ; }
	    ;

declare:

	    | INTEGER IDENTIF 			                { sprintf (temp, "(setq %s 0)", $2.code) ;
					                                $$.code = gen_code (temp) ; }

	    | INTEGER IDENTIF '=' expression            { sprintf (temp, "(setq %s %d)", $2.code, $4.value) ;
					                                $$.code = gen_code (temp) ; }

        | INTEGER IDENTIF '[' expression ']'        { sprintf (temp, "(setq %s (make-array %s))", $2.code, $4.code) ;
                                                    $$.code = gen_code (temp) ; }

        | IDENTIF '[' expression ']' '=' expression { sprintf (temp, "(setf (aref %s %s) %s", $1.code, $3.code, $6.code) ;
                                                    $$.code = gen_code (temp) ; }
	    ;

function:
        IDENTIF '(' INTEGER IDENTIF ')' '{' body '}' { sprintf (temp, "(defun %s (%s)\n%s\n)\n", $3.code, $4.code, $7.code) ;
                                                     $$.code = gen_code (temp) ; }
        ;

body:  
        sentence ';'            { sprintf (temp, "%s ", $1.code) ;
						        $$.code = gen_code (temp) ; }

	    | sentence ';' body    { sprintf (temp, "%s \n%s ", $1.code, $3.code) ;
						        $$.code = gen_code (temp) ; }

        | control               { sprintf (temp, "%s ", $1.code) ;
                                $$.code = gen_code (temp) ; }
        
        | control body         { sprintf (temp, "%s \n%s ", $1.code, $2.code) ;
                                $$.code = gen_code (temp) ; }
	    ;

sentence:
        INTEGER IDENTIF                            { sprintf (temp, "(setq %s 0)", $2.code) ;
                                                   $$.code = gen_code (temp) ; }

        | INTEGER IDENTIF '=' assign               { sprintf (temp, "(setq %s %s", $2.code, $4.code) ;
                                                   $$.code = gen_code (temp) ; }

        | IDENTIF '=' assign                       { sprintf (temp, "(setq %s %s", $1.code, $3.code) ;
                                                   $$.code = gen_code (temp) ; }

        | INTEGER IDENTIF '[' expression ']'       { sprintf (temp, "(setq %s (make-array %s))", $2.code, $4.code) ;
                                                   $$.code = gen_code (temp) ; }

        | IDENTIF '[' expression ']' '=' assign    { sprintf (temp, "(setf (aref %s %s) %s", $1.code, $3.code, $6.code) ;
                                                   $$.code = gen_code (temp) ; }

        | PRINTF '(' STRING ',' lexpression ')'    { sprintf (temp, "%s ", $5.code) ;
                                                   $$.code = gen_code (temp) ; }

        | PUTS '(' STRING ')'                      { sprintf (temp, "(print \"%s\") ", $3.code) ;
                                                   $$.code = gen_code (temp) ; }

        | IDENTIF '(' expression ')'               { sprintf (temp, "(%s %s) ", $1.code, $3.code) ;
                                                   $$.code = gen_code (temp) ; }
        ;

assign:
        expression                                  { sprintf (temp, "%s)", $1.code) ;
					                                $$.code = gen_code (temp) ; }

	    | expression ',' IDENTIF '=' assign         { sprintf (temp, "%d) (setq %s %s", $1.value, $3.code, $5.code) ;
					                                $$.code = gen_code (temp) ; }
	    ;

control:
        WHILE '(' condition ')' '{' body '}'                        { sprintf (temp, "(loop while %s do %s\n)", $3.code, $6.code) ;
                                                                    $$.code = gen_code (temp) ; }

        | IF '(' condition ')' '{' body '}'                         { sprintf (temp, "(if %s\n%s\n)", $3.code, $6.code) ;
                                                                    $$.code = gen_code (temp) ; }

        | IF '(' condition ')' '{' body '}' ELSE '{' body '}'       { sprintf (temp, "(if %s\n(progn %s)\n(progn %s)\n)", $3.code, $6.code, $10.code) ;
                                                                    $$.code = gen_code (temp) ; }

        | FOR '(' declare ';' condition ';' incdec ')' '{' body '}'                                                             
                                                                    { sprintf (temp, "%s\n(loop while %s do %s\n%s", $3.code, $5.code, $10.code, $7.code) ;
                                                                    $$.code = gen_code (temp) ;}
        ;

condition:
        expression                                  { sprintf (temp, "%s", $1.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression EQ expression                  { sprintf (temp, "(= %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression NEQ expression                 { sprintf (temp, "(/= %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression '<' expression                 { sprintf (temp, "(< %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression '>' expression                 { sprintf (temp, "(> %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression LEQ expression                 { sprintf (temp, "(<= %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression GEQ expression                 { sprintf (temp, "(>= %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression AND expression                 { sprintf (temp, "(and %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression OR expression                  { sprintf (temp, "(or %s %s)", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }
        ;

incdec:
            IDENTIF '=' IDENTIF '+' NUMBER      { sprintf (temp, "(setq %s (+ %s %d))", $1.code, $1.code, $4.value) ;
                                                $$.code = gen_code (temp) ; }

            | IDENTIF '=' IDENTIF '-' NUMBER    { sprintf (temp, "(setq %s (- %s %d))", $1.code, $1.code, $4.value) ;
                                                $$.code = gen_code (temp) ; }
            ;

expression:
            term                                { $$ = $1 ; 
                                                $$.code = gen_code ($1.code) ; }

            | term '[' expression ']'           { sprintf (temp, "(aref %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }

            | term '(' args ')'                 { sprintf (temp, "(%s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }

            | expression '+' expression         { sprintf (temp, "(+ %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }

            | expression '-' expression         { sprintf (temp, "(- %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }

            | expression '*' expression         { sprintf (temp, "(* %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }

            | expression '/' expression         { sprintf (temp, "(/ %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }

            | expression '%' expression         { sprintf (temp, "(mod %s %s)", $1.code, $3.code) ;
                                                $$.code = gen_code (temp) ; }
            ;

lexpression:
        expression 			                { sprintf (temp, "(print %s) ", $1.code) ;
					                        $$.code = gen_code (temp) ; }

	    | expression ',' lexpression	    { sprintf (temp, "(print %s) %s ", $1.code, $3.code) ;
					                        $$.code = gen_code (temp) ; }
	    ;

args:
        expression                                  { sprintf (temp, "%s", $1.code) ;
                                                    $$.code = gen_code (temp) ; }

        | expression ',' args                       { sprintf (temp, "%s %s", $1.code, $3.code) ;
                                                    $$.code = gen_code (temp) ; }
        ;

term:
            operand                             { $$ = $1 ;
                                                $$.code = gen_code ($1.code) ; }

            | '+' operand %prec UNARY_SIGN      { sprintf (temp, "(+ %s)", $2.code) ;
                                                $$.code = gen_code (temp) ; }

            | '-' operand %prec UNARY_SIGN      { sprintf (temp, "(- %s)", $2.code) ;
                                                $$.code = gen_code (temp) ; }    
            ;

operand:
            IDENTIF                     { sprintf (temp, "%s", $1.code) ;
                                        $$ = $1 ; }

            | NUMBER                    { sprintf (temp, "%d", $1.value) ;
                                        $$.code = gen_code (temp) ; }
                                        
            | '(' expression ')'        { $$ = $2 ; }
            ;

%%                            // SECTION 4    Code in C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)     // reserve n bytes of dynamic memory 
{
    char *p ;
    static long int nb = 0 ;     // used to count the memory  
    static int nv = 0 ;          // required in total 

    p = malloc (nbytes) ;
    if (p == NULL) {
      fprintf (stderr, "No memory left for additional %d bytes\n", nbytes) ;
      fprintf (stderr, "%ld bytes reserved in %d calls \n", nb, nv) ;  
      exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}



/***************************************************************************/
/***************************** Keyword Section *****************************/
/***************************************************************************/

typedef struct s_keyword { // for the reserved words of C  
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = {     // define the keywords 
    "main",        MAIN,      // and their associated token  
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "<=",          LEQ,
    ">=",          GEQ,
    "&&",          AND,
    "||",          OR,
    "==",          EQ,
    "!=",          NEQ,
    "while",       WHILE,
    "if",          IF,
    "else",        ELSE,
    "for",         FOR,
    "return",      RETURN,
    NULL,          0          // 0 to mark the end of the table
} ;

t_keyword *search_keyword (char *symbol_name)
{                       // Search symbol names in the keyword table
                        // and return a pointer to token register
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
                                   // strcmp(a, b) returns == 0 if a==b  
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************** Section for the Lexical Analyzer  ********************/
/***************************************************************************/

char *gen_code (char *name)   // copy the argument to an  
{                             // string in dynamic memory  
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] =  "!<=>|/%&+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do { 
        c = getchar () ; 
        if (c == '#') { // Ignore the lines starting with # (#define, #include)
            do { // WARNING that it may malfunction if a line contains #
                c = getchar () ;
            } while (c != '\n') ;
        }
        if (c == '/') { // character / can be the beginning of a comment.
            cc = getchar () ;
            if (cc != '/') { // If the following char is / is a comment, but....
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ; // ...
                if (c == '@') { // Lines starting with //@ are transcribed
                    do { // This is inline code (embedded code in C).
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else { // ==> comment, ignore the line
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        }
        if (c == '\n')
            n_line++ ;
    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        } // we should read until the next “, but, what if it is  missing?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ; // ALL TO SMALL LETTERS
            c = getchar () ;
    }
    temp_str [i] = '\0' ; // End of string
    ungetc (c, stdin) ; // return excess char

    yylval.code = gen_code (temp_str) ;
    symbol = search_keyword (yylval.code) ;
    if (symbol == NULL) { // is not reserved word -> iderntifrier
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // // look for c in expandable_ops
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // although it is not used
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
