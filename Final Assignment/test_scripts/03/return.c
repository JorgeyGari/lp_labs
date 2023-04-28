#include <stdio.h>

esprimo (int n) 
{
    int d  = 2;
    while (d < n) {
        if (n % d == 0) {
            return 0 ;
        }
        d = d + 1;
    }
    return 1;        
}

main ()
{
	int i, resultado;

	for(i = 0; i < 100; i = i + 1){
		printf("%d",i);
		if(esprimo(i) == 1){
			puts(" es primo");
		}else{
			puts(" NO es primo\n");
		}

	}

}

//@ (main)

