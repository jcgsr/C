/* 
 * jó 26.01.2019
 * C Programming Language
 */
 
#include<stdio.h>

int main()
{
	printf("\tTABELA ENTRE F° E C°\n");
	printf("\t====================\n\n");
	printf("\tFahrenheit\tCelsius\n");
	
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 1;
	
	fahr = upper;
	
	while (fahr >= lower){
		celsius = (5.0/9.0)*(fahr-32.0);
		printf("\t%6.0f\t\t%6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
	return 0;
}
/* same program but with for loop
 * 
 * int fahr; 
 * for (fahr = 0; fahr <= 300; fahr = fahr + 1)
 *   printf("...")
 */
