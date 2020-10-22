/*
 * jó 07.01.2018
 */

 #include<stdio.h>
 #include<locale.h>

 int main(void){

    printf("\t\tESTE PROGRAMA CALCULA O SALÁRIO\n");

    int hora = 0;
    int horaExtra;
    int horaFixa = 40;
    int salA;
    int salB;
    int salC;
    int valorA = 10;
    int valorB = 15;
    int acresc;

    printf("Informe o # de horas trabalhadas: ");
    scanf("%d", &hora);
    if (hora <= 40){
        salA = hora*valorA;
        printf("Valor do salário: R$%d", salA);
    }
    else{
        horaExtra = hora - horaFixa;
        salB = horaExtra*valorB;
        salC = horaFixa*10;
        salB += salC;
        printf("Valor do salário com hora extra: R$%d\n", salB);
    }
    while (hora >= 0){

        printf("\nInforme o # de horas trabalhadas: ");
        scanf("%d", &hora);
        if (hora <= 40){
        salA = hora*valorA;
        printf("Valor do salário: R$%d\n", salA);
    }
        else{
            horaExtra = hora - horaFixa;
            salB = horaExtra*valorB;
            salC = horaFixa*10;
            salB += salC;
            printf("Valor do salário com hora extra: R$%d\n", salB);
        }

    }

}
