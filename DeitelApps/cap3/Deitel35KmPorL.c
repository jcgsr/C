/*
 * jó 07.01.2018
 */

 #include<stdio.h>

 int main(void){

    int cont = 0;
    int km = 0, litro = 0, kmTotal = 0, litroTotal = 0;

    printf("\t\t\tESSE PROGRAMA CALCULA\n\t\t\tQUANTOS LITROS DE GASOLINA\n\t\t\tSÃO USADOS POR KM RODADOS.\n\n");

     printf("Informe a quantidade de litros: ");
     scanf("%d", &litro);

     printf("Informe a km: ");
     scanf("%d", &km);
     printf("A média de km/l foi %.2f.\n", (float) km / litro);


    while (km > 0 && litro > 0){
        printf("\nInforme os litros usados (0=sair): ");
        scanf("%d", &litro);
        litroTotal += litro;

        printf("Informe a km (0=sair): ");
        scanf("%d", &km);
        kmTotal += km;

        printf("A média de km/l foi %.2f\n", (float) km / litro);


    }
    printf("\n\nA média total de todos os km/l informados foi %.2f", (float) kmTotal / litroTotal);

 }
