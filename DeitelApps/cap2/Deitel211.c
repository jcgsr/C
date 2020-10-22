/*
 * =====================================================================================
 *
 *       Filename:  Deitel211.c
 *
 *    Description: Exercício 2.18 Deitel 7th 
 *
 *        Version:  1.0
 *        Created:  22/10/2020 01:01:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jovane Rocha
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void){

		  printf("\t\tExercício 2.18");
		  printf("\nComparação de dois Inteiros");

		  int n1;
		  int n2;

		  printf("\nDigite o primeiro número: ");
		  scanf("%d", &n1);
		  printf("Digite o segundo número: ");
		  scanf("%d", &n2);

		  if (n1 > n2) {
					 printf("\n%d é maior que %d", n1, n2);
		  }
		  if (n1 < n2) {
					 printf("\n%d é maior que %d", n2, n1);
		  }
		  if (n1 == n2) {
					 printf("\n%d é igual a %d", n1, n2);
		  }


}
