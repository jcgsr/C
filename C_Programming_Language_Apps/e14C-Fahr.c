/* 
 * jó 26.01.2019
 * C Programming Language
 */
 
#include<stdio.h>

int main()
{
	printf("\tTABELA ENTRE C° E F°\n");
	printf("\t====================\n\n");
	printf("\tCelsius\t\tFahrenheit\n");
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -20;
	upper = 100;
	step = 1;
	
	celsius = lower;
	
	while (celsius <= upper){
		fahr = (celsius*1.8) + 32;
		printf("\t%5.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}

