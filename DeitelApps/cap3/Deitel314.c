/*
 * jó 07.01.2018
 */
#include <stdio.h>
#include<locale.h>

int main(){

    int num, maior1, maior2 = 0, count;

    printf("Digite um número: ");
    scanf("%d", &maior1);
    count = 2;

    while (count <= 10){

        printf("Digite o próximo número: ");
        scanf("%d", &num);

        if (num > maior1){
            maior2 = maior1;
            maior1 = num;
        }
        else
            if (num > maior2){
            maior2 = num;
        }
        ++count;
    }
    printf("O maior número é %d seguido por %d.", maior1, main());

    return 0;

}
