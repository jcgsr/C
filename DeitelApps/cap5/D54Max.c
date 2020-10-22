/*
 * jó 23.01.18
 */

#include<stdio.h>

int maior(int x, int y, int z); //function prototype

int main (void)
{
	int num1, num2, num3;
	
	printf("Digite três números: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	printf("O maior número é: %d\n", maior(num1, num2, num3));
	
	return 0;
	
}
int maior(int x, int y, int z)
{
	int max = x; //assume que 'x' é o maior
	if ( y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}
