/*
 * jó 23.01.18
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int i; //counter
	
	for (i = 1; i <= 20; i++)
	{
		//pick random number from 1 to 6
		printf("%10d", 1 + (rand() % 6));
		
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}
