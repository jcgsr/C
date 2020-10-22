//04.01.2018 jó

#include<stdio.h>

int main(void){
	printf("\tCALCULADORA DE CUSTOS AO DIRIGIR\n");
	
	float km;
	float gas;
	float km_por_l;
	float estac;
	
	printf("\nQuantos km dirigidos por dia: ");
	scanf("%f", &km);
	printf("\nValor do litro da gasolina: ");
	scanf("%f", &gas);
	printf("\nQuantos km o carro roda por litro: ");
	scanf("%f", &km_por_l);
	printf("\nValor do estacionamento: ");
	scanf("%f", &estac);
	
	float custoTotal = (gas*km/km_por_l) + estac;
	printf("\nSeu custo total dirigindo %.2f km por dia,\ncom o litro da gasolina\n", km);
	printf("custando R$ %.2f e com seu carro fazendo %.2f km/l,\n", gas, km_por_l);
	printf("além de R$ %.2f de estacionamento dá o valor total de:\n", estac);
	printf("\t\t\tR$ %.2f\n", custoTotal);
}
