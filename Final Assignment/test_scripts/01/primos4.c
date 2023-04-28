#include <stdio.h>

int d ;
int n  ;
int m ;


esprimo (int n) 
{
    int primo ;
    int d ;

    primo = 1 ;
    d = 2 ;
    while (d < n && primo == 1) {
        if (n % d == 0) {
            primo = 0 ;
        }
        d = d + 1 ;
    }
    return (primo) ;        
}


listaprimos (int n, int m)
{
    while (n < m) {
        if (esprimo (n) != 0) {
            printf ("%d  ", n) ;
        }
        n = n + 1 ;
//		puts ("") ;
    } 
}


main ()
{
    int d ;
    int i ;

    listaprimos (1, 100) ;
//    system ("pause") ;
}

//@ (main)

