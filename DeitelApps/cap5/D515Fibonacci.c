/*
 * jó 24.01.18
 */

#include <stdio.h>

long fibonacci(long n); //function prototype

int main (void)
{
	long result; //fibonacci value
	long number; // input
	
	printf("\tTHIS PROGRAM SHOWS\n\tTHE FIBONACCI NUMBER OF AN INTEGER\n");
	
 	printf("\t==================================\n\n");
 	
 	printf("Enter an integer: ");
 	scanf("%ld", &number);
 	
 	//calculate fibonacci from input
 	result = fibonacci(number);
 	
 	printf ("Fibonacci (%ld) = %ld\n.", number, result);
 	
 	return 0;
 	
}
//fibonacci function
long fibonacci (long n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fibonacci (n - 1) + fibonacci (n - 2);
	}
}


