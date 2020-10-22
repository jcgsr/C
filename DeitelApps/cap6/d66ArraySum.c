/*
 *jó 27.01.2018
 */
 
#include <stdio.h>
#define SIZE 12

int main(void)
{
	int a[SIZE] = {1,3,4,7,45,76,76,98,43,2,6,8};
	size_t i; //counter
	int total = 0; // sum of array
	
	for (i = 0; i < SIZE; i++){
		total += a[i];
	}
	printf("Total of array elements values is %d\n", total);
}
