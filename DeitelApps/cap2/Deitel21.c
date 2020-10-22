/* 04.01.2018
   jovane */

#include <stdio.h>

int main (void) {
	printf("Hello World!\n");
	printf("Welcome to C!\n\n");
	
	int n1;
	int n2;
	int soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	
	printf("\nDigite o segundo número: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma é %d\n", soma);
	
	return 0;
}
