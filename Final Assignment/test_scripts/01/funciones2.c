#include <stdio.h>


mifuncion () 
{
    int c ;

    c = 123 ;
    
    puts ("Prueba") ;
    return c+1 ;
}


main ()
{
     int c ;
     
     c = mifuncion () ;
     printf ("%d %d\n", c, mifuncion ()) ;
//     system("pause") ;
 }

//@ (main)
