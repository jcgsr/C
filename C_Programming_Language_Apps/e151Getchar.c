/* 
 * jó 26.01.2018
 * C Programming Language
 */
 
#include<stdio.h>

int main()
{
	int c;
	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
	return 0;
}
