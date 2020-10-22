/*
 * jó 13.01.2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {

   int a, b, c;

   puts("ESSE PROGRAMA CONFIRMA A EXISTÊNCIA OU NãO DE UM TRIÂNGULO\n");
   puts("Digite valores inteiros nao-nulos e positivos.\n");

   puts("Entre com a medida do lado a do triângulo: ");
   scanf("%d",&a);

   puts("Entre com a medida do lado b do triângulo: ");
   scanf("%d",&b);

   puts("Entre com a medida do lado c do triângulo: ");
   scanf("%d",&c);

   if (a<=0 || b<=0 || c<=0){
      puts("Lados nulos ou negativos não são aceitos.");
      exit(1);
   }

   if (a>=b+c || b>=c+a || c>=a+b) {
      puts("Triângulo inexistente.");
      exit(1);
   }

   if (a==b && b==c)
      puts("Triângulo equilátero.");

   else if (a==b || b==c || c==a)
      puts("Triângulo isósceles.");

   else
      puts("Triângulo escaleno.");


   return 0;

}
