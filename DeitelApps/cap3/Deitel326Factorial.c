/*
 * jó 13.01.18
 */

#include<stdio.h>

int main()
{
    printf("\t\tESSE PROGRAMA CALCULA O n!");

    int x;
    int res = 1;


    printf("\nDigite um número: ");
    scanf("%d", &x);
    printf("\nO fatorial de %d é \n\n", x);


    while(x != 1)
    {

        res*=x;
        x--;
    }
    printf("%d", res);

}
