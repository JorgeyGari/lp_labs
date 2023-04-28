#include <stdio.h>

// Calcula las secuencias de Collatz para 2 ... 100 y sus longitudes 
//  de forma recursiva y con el operador ternario

collatz (int n, int cont) {
	int retorno;

    printf ("%d ", n) ;

    if (n == 1) {
		retorno = cont ;
    } else { 
    	if (n % 2 == 0) {
    		retorno = collatz (n/2, cont+1) ;
		} else {
    		retorno = collatz (3*n+1, cont+1) ;
		}
	}

	return retorno ; 
}

main ()
{
	int resultado;
	int i ;

	puts ("Sucesion de Collatz") ;
    for (i = 2 ; i < 100 ; i = i + 1) {
		resultado = collatz (i, 0) ;
		printf ("   %d %d\n", i, resultado) ;
    }
}

//@ (main)

