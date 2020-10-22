/*
 * jó 07.01.2018
 */

 #include<stdio.h>
 #include<locale.h>

 int main(void){

    printf("\t\tESTE PROGRAMA CALCULA OS JUROS POR ANO\n");

    float juro;
    float emprest;
    float tx;
    float dias;

    printf("\nValor do empréstimo: R$");
    scanf("%f", &emprest);
    printf("Taxa de juros ao ano: ");
    scanf("%f", &tx);
    printf("Prazo em dias: ");
    scanf("%f", &dias);
    juro = emprest*tx*dias/365;
    printf("O valor dos juros cobrados será de R$%.2f\n", juro);

    while (emprest > 0){
        printf("\nValor do empréstimo (0=sair): R$");
        scanf("%f", &emprest);
        printf("Taxa de juros ao ano: ");
        scanf("%f", &tx);
        printf("Prazo em dias: ");
        scanf("%f", &dias);
        juro = emprest*tx*dias/365;
        printf("O valor dos juros cobrados será de R$%.2f\n", juro);
    }
 }
