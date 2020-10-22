/*
 * jó 23.01.18
 */

#include<stdio.h>

int square(int y); //function prototype

int main(void)
{
	int x; 
	
	for (x = 1; x <= 10; x++)
	{
		printf("%d ", square(x)); //function call
	}
	printf("\n");
	return 0;
}

int square(int y)
{
	return y*y;
}
