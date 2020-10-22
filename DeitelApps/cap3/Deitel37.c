/*
 * jó 07.01.2018
 */

 #include<stdio.h>
 #include<locale.h>

 int main(void){

    float salSem = 200;
    float salCom = 0.09;
    float vendas;
    float sal;

    printf("\t\tESTE PROGRAMA CALCULA O SALÁRIO TOTAL SEMANAL DO FUNCIONÁRIO\n\n");

    printf("\nValor das vendas: R$");
    scanf("%f", &vendas);
    sal = salSem + vendas*salCom;
    printf("Salário semanal total: R$%.2f\n", sal);

    while (vendas >= 0){
        printf("\nValor das vendas (-1=sair): R$");

         if (vendas == -1){
            printf("PROGRAMA ENCERRADO");
            break;
        }
        scanf("%f", &vendas);
        sal = salSem + vendas*salCom;
        printf("Salário semanal total: R$%.2f\n", sal);



    }

 }
