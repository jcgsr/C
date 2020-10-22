//04.01.2018 jó

#include<stdio.h>

int main(void){
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	
	if (n % 2 == 0){
		printf("O número %d é par.\n", n);
	}
	if (n % 2 != 0){
		printf("O número %d é impar.\n", n);
	}
}
