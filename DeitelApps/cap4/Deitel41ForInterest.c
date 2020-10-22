/*
 * jó 14.01.2018
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(void)
 {
 	double amount, principal = 1000.0, rate = 0.05;
 	int year;
 	
 	printf("%4s%21s\n", "Year", "Amount on deposit");
 	
 	for (year = 1; year <= 10; year++)
 	{
 		amount = principal * pow(1.0 + rate, year);
 		printf("%4d%21.2f\n", year, amount);
 	}
 	return 0; 
 }
