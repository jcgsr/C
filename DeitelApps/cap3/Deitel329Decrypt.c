/*
 * jó 13.01.18
 */

#include<stdio.h>

int main()
{
      int num;
    printf("\t\tESSE PROGRAMA DECIFRA A CRIPTOGRAFIA DE UM NÚMERO DE 4 DÍGITOS\n");

    printf("Insira um número de 4 dígitos: ");
    scanf("%d", &num);

        int res1 = num / 1000;
        int r1 = num % 1000;

        int res2 = r1 / 100;
        int r2 = r1 % 100;

        int res3 = r2 / 10;
        int r3 = r2 % 10;

        int res4 = r3;

        int c1 = res1 - 7 + 10;
        int c2 = res2 - 7 + 10;
        int c3 = res3 - 7 + 10;
        int c4 = res4 - 7 + 10;

        printf("\n%d %d %d %d", c1, c2, c3, c4);

}
