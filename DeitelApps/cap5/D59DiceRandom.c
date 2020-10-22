/*
 * jó 24.01.18
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("\tESSE PROGRAMA SIMULA O ROLAR DE UM DADO\n");
 	printf("\t=======================================\n\n");
 	
 	int i; //counter
 	unsigned seed; //number user to seed random number generator
 	
 	printf("Enter seed: ");
 	scanf("%u", &seed);
 	
 	srand(seed);//seed random number generator
 	
 	for (i = 1; i <= 10; i++)
 	{
 		printf("%10d", 1 + (rand() % 6));
 		
 		if (i % 5 == 0)
 		{
 			printf("\n");
 		}
 	}
 	return 0;
}
