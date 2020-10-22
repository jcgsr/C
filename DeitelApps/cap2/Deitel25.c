// 04.01.2018 jó
// maior e menor

#include<stdio.h>

int main(void){
	int n1, n2, n3, n4, n5;
	
	printf("Digite 5 números: ");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	
	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
		printf("O maior número dos cinco digitados é %d.\n", n1);
	}
	if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
		printf("O menor número dos cinco digitados é %d.\n", n1);
	}
	if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
		printf("O maior número dos cinco digitados é %d.\n", n2);
	}
	if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){
		printf("O menor número dos cinco digitados é %d.\n", n2);
	}
	if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
		printf("O maior número dos cinco digitados é %d.\n", n3);
	}
	if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){
		printf("O menor número dos cinco digitados é %d.\n", n3);
	}
	if (n4 > n1 && n4 > n3 && n4 > n2 && n4 > n5){
		printf("O maior número dos cinco digitados é %d.\n", n4);
	}
	if (n4 < n1 && n4 < n3 && n4 < n2 && n4 < n5){
		printf("O menor número dos cinco digitados é %d.\n", n4);
	}
	if (n5 > n1 && n5 > n3 && n5 > n4 && n5 > n2){
		printf("O maior número dos cinco digitados é %d.\n", n5);
	}
	if (n5 < n1 && n5 < n3 && n5 < n4 && n5 < n2){
		printf("O menor número dos cinco digitados é %d.\n", n5);
	}
	return 0;
	
}
