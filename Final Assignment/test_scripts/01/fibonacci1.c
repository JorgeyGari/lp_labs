#include <stdio.h>

fibonacci (int n) {
	int retorno;

	if (n < 2) {
		retorno = 1;
	} else {
		retorno = fibonacci (n-1) + fibonacci (n-2) ;
	}

	return retorno;
}

main ()
{
	int resultado;
	int i ;

        puts ("Sucesion de Fibonacci") ;

        for (i = 2 ; i < 50 ; i = i + 1) {
		resultado = fibonacci (i) ;
                printf ("%d %d\n", i, resultado) ;
        }
}

//@ (main) 

