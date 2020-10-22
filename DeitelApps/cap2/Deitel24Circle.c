// 04.01.2018 jovane

#include<stdio.h>

int main(void){
	printf("Esse programa calcula\no diâmetro, a área e \na circunferência de um círculo\n");
	printf("através do raio informado pelo usuário.\n");
		
	float pi = 3.14159;
	float raio;
	float diam;
	float cir;
	float area;
	
	printf("\nDigite o raio: ");
	scanf("%f", &raio);
	
	diam = raio * 2;
	printf("O diâmetro de um círculo de raio %.2f é %.2f.\n", raio, diam);
	
	printf("Sua circunferência equivale a %.2f\n", diam*pi);
	
	printf("E sua área é %.2f\n", pi*(raio*raio));
	
}
