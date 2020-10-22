// 04.01.2018
//jovane
// using 'if', operadores
#include<stdio.h>

int main(void){
	int n1;
	int n2;
	
	printf("Digite dois números e eu lhe direi\n");
	printf("a relação entre eles: ");
	
	scanf("%d%d", &n1, &n2);
	
	if (n1 == n2){
		printf("%d é igual a %d\n", n1, n2);
	}
	if (n1 != n2){
		printf("%d é diferente de %d\n", n1, n2);
	}
	if (n1 < n2){
		printf("%d é menor que %d\n", n1, n2);
	}
	if (n1 > n2){
		printf("%d é maior que %d\n", n1, n2);
	}
	return 0;
}
