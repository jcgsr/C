//04.01.2018 jó

#include<stdio.h>

int main(void){
	
	printf("\t\tCALCULADORA DE IMC\n");
	
	float peso;
	float alt;
		
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	printf("\nInforme sua altura em metros: ");
	scanf("%f", &alt);
	
	float imc = peso / (alt*alt);
	printf("\nSeu IMC é igual a %.2f", imc);
	
	printf("\n\n\tTABELA DO IMC");
	
	printf("\n\nAbaixo do peso:\t\tmenor que 18.5");
	printf("\nNormal:\t\t\tentre 18.5 e 24.9");
	printf("\nAcima do peso:\t\tentre 25 e 29.9");
	printf("\nObeso:\t\t\t30 ou maior.\n");
	
	if (imc < 18.5){
		printf("\nComo seu imc foi %.2f, você está abaixo do peso.", imc);
	}
	if (imc >= 18.5 && imc < 24.9){
		printf("\nComo seu resultado foi %.2f, você está normal.", imc);
	}
	if (imc >= 25 && imc <29.9){
		printf("\nComo seu resultado foi %.2f, voce está acima do peso.", imc);
	}
	if (imc >= 30){
		printf("\nComo seu resultado foi %.2f, você está obeso(a).", imc);
	}
	return 0;
	 
}
