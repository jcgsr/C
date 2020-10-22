/*
 * =====================================================================================
 *
 *       Filename:  Deitel210.c
 *
 *    Description: Exercício 2.26 Deitel 7th 
 *
 *        Version:  1.0
 *        Created:  22/10/2020 00:12:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Jovane Rocha 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void) {
		  printf("\t\tExercício 2.16");

		  int n1;
		  int n2;


		  printf("\n\nDigite 2 números: ");
		  printf("Primeiro Número: ");
		  scanf("%d", &n1);

		  printf("Segundo Número: ");
		  scanf("%d", &n2);
		  
		  int soma = n1 + n2;
		  printf("\nA soma entre %d e %d é igual a %d", n1, n2, soma);

		  int mult = n1 * n2;
		  printf("\nO produto entre %d e %d é igual a %d", n1, n2, mult);


		  int dif = n1 - n2;
		  printf("\nA diferença entre %d e %d é igual a %d", n1, n2, dif);

		  int div = n1 / n2;
		  printf("\nA divisão entre %d e %d é igual a %d", n1, n2, div);

		  int mod = n1 % n2;
		  printf("\nO módulo entre %d e %d é igual a %d", n1, n2, mod);


}
