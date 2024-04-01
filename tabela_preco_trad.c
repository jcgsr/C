/*01.04.2024*/

#include <stdio.h>

#define GRN "\x1B[1;32m"
#define RESET "\x1B[0m"

int main()
{
  printf("\t\tTABELA DE PREÇO DE TRADUÇÃO\n");

  float palavra = 0.20;
  int num_pal;
  /*int i;*/

  printf("Informe a quantidade de palavras: ");
  scanf("%d", &num_pal);
  printf("O valor de %d palavras é: ", num_pal);
  printf(GRN "R$ %.2f\n" RESET, num_pal * palavra);
  /*  for (i = 1; i <= num_pal; i++) {*/
  /*printf("%d - R$ %.2f\n", i, i * palavra);*/
  /*}*/
}
