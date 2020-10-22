// 04.01.2018
// multiplicação de três números

#include<stdio.h>

int main(void){
	int n1, n2, n3, mult;
	
	printf("Esse programa calcula a\na multiplicação de três inteiros.\n\n");
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	printf("Digite o terceiro número: ");
	scanf("%d", &n3);
	
	mult = n1*n2*n3;
	
	printf("\nA multiplicação de %d com %d e %d é igual a %d\n", n1, n2, n3, mult);
}
