/*
 * =====================================================================================
 *
 *       Filename:  Deitel212.c
 *
 *    Description: Exercício 2.19 7th 
 *
 *        Version:  1.0
 *        Created:  22/10/2020 01:15:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   Jovane Rocha 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void){
		  printf("\t\tExercício 2.19");
		  printf("\n");

		  int a, b, c;

		  printf("\nDigite o primeiro número: ");
		  scanf("%d", &a);

		  printf("\nDigite o segundo número: ");
		  scanf("%d", &b);

		  printf("\nDigite o terceiro número: ");
		  scanf("%d", &c);

		  int soma = a + b + c;
		  int media = (a + b + c) / 3;
		  int produto = a * b * c;

		  int menor, maior;

		  if (a > b && a > c) {
					 maior = a;
		  }

		  if (b > a && b > c) {
					 maior = b;
		  }

		  if (c > a && c > b) {
					maior = c;
		  }

		  if (a < b && a < c) {
					 menor = a;
		  }

		  if (b < a && b < c) {
					 menor = b;
		  }

		  if (c < a && c < b) {
					menor = c;
		  }

		  printf("\nA soma é %d", soma);
		  printf("\nA média é %d", media);
		  printf("\nO produto é %d", produto);
		  printf("\nO maior número é %d", maior);
		  printf("\nO menor número é %d", menor);


}

