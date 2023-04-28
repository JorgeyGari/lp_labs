#include <stdio.h>

int b ;

main () 
{
	int a ;
	
	a = 10 ;
	
	while (a > 0) {
		printf ("%d", a) ;
		if (a % 2 == 0) { 
			puts (" es impar ") ;
		} else {
			puts (" es par ") ;
		}
		a = a - 1 ;
	} 
}

//@ (main)

