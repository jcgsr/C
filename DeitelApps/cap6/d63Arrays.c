/*
 *jó 27.01.2018
 */
 
#include <stdio.h>

int main(void)
{
	int n[10]; // array of 10 integers
	size_t i; // counter (unsigned integral type)
	
	for (i = 0; i < 10; i++){
		n[i] = 0;//set element at location i to 0
	}
	printf("%s%13s\n", "Element", "Value");
	
	for(i = 0; i < 10; i++){
		printf("%7lu%13d\n", i, n[i]);
	}
}
