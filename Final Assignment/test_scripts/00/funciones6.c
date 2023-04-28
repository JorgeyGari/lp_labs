#include <stdio.h>


factorialA (int n, int f, int fm) 
{
	if (n == 1) {
	    printf ("%d", f) ;
	} else {
	    factorialA (n-1, f*fm, fm-1) ;
	}  
}

factorialWrapper (int n)
{
	factorialA (n, n, n-1) ;
	puts ("") ;
}

main ()
{
	factorialWrapper (1) ;          
	factorialWrapper (2) ;          
	factorialWrapper (3) ;          
	factorialWrapper (4) ;          
	factorialWrapper (5) ;          
	factorialWrapper (6) ;          
//     system ("pause") ;
}

//@ (main)
