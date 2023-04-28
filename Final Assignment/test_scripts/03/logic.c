#include <stdio.h>


main ()
{
	int i = 100;
	int seguir = 1;

	while(i && seguir == 1){
		printf("%d",i);
		i = i - 1;

		if(i % 19 == 0){
			seguir = 0;
		}
	}
	

}

//@ (main)

