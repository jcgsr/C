/*
 *jó 27.01.2018
 */
 
#include <stdio.h>

int main(void)
{
	int n[10] = {21, 45, 65, 45, 43, 4, 87}; 
	size_t i; // counter (unsigned integral type)
	
	
	printf("%s%13s\n", "Element", "Value");
	
	for(i = 0; i < 10; i++){
		printf("%7lu%13d\n", i, n[i]);
	}
}
