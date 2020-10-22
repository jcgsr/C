/*
 * jó 24.01.18
 */

#include <stdio.h>

long factorial(long number); //function prototype

int main (void)
{
	int i;
		
	printf("\tTHIS PROGRAM CALCULATES THE !n up to 20\n");
	printf("\t=======================================\n");
	
	for (i = 0; i <= 20; i++)
	{
		printf("\t%d! = %ld\n", i, factorial(i));
	}
	return 0;
}
long factorial (long number)
{
	if (number <= 1)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number - 1));
	}
}
