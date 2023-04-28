#include <stdio.h>


mimax (int a, int b) 
{
	if (a >= b) {
	    printf ("%d", a) ;
	} else {
	    printf ("%d", b) ;
	}  
}


main ()
{
     mimax (10, 1) ;
     mimax (1, 10) ;
     mimax (10,10) ;
          
//     system ("pause") ;
}

//@ (main)
