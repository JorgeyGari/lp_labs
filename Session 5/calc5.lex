// LAURA BELIZÓN MERCHÁN  100452273
// JORGE LÁZARO RUIZ      100452172

%{                            /* Primera Seccion */
extern int n_linea;
%}
%%                            /* Segunda Seccion */
[ \t]                    { ; } /* ignorar espacios y tabuladores */
[0-9]+\.?|[0-9]*\.[0-9]+ { sscanf (yytext, "%lf", &yylval); return (NUMERO); }
[A-Z]|[a-z]              { sscanf (yytext, "%lf", &yylval.indice); return (VARIABLE); }
\n                       { n_linea++; return ('\n'); }
.                        { return (yytext [0]); }   /* literales */
%%                            /* Tercera Seccion */
int yywrap ()     /* se incluye para evitar un error de compilacion */
{
    return (0) ; /* para el control de fin de fichero */
}
