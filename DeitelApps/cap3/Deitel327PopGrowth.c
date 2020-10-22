/*
 * jó 13.01.18
 */

#include<stdio.h>

int main()
{
    float pop = 7.600;
    float tx = 0.012;
    float pop19, pop20, pop21, pop22, pop23, newPop;

    printf("A população mundial em 2018 é estimada em 7.6 bilhões.\n");

    newPop = pop*tx;
    pop19 = pop + newPop;
    printf("Em 2019, a população será %.3f bilhões.", pop19);

    newPop= pop19*tx;
    pop20 = newPop + pop19;
    printf("\nEm 2020, a população será %.3f bilhões.", pop20);

    newPop= pop20*tx;
    pop21 = newPop + pop20;
    printf("\nEm 2021, a população será %.3f bilhões.", pop21);

    newPop= pop21*tx;
    pop22 = newPop + pop21;
    printf("\nEm 2022, a população será %.3f bilhões.", pop22);

    newPop= pop22*tx;
    pop23 = newPop + pop22;
    printf("\nEm 2023, a população será %.3f bilhões.", pop23);
}
