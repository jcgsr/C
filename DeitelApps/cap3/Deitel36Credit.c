/*
 * jó 07.01.2018
 */

 #include<stdio.h>

 int main(void){

    int contNum;
    float creditoUsado;
    float creditoLimite;
    float saldo;

    printf("\t\tESTE PROGRAMA CALCULA O LIMITE DE CRÉDITO DO CLIENTE\n\n");

    printf("Número da conta: ");
    scanf("%d", &contNum);
    printf("Limite de crédito: ");
    scanf("%f", &creditoLimite);
    printf("Crédito usado: ");
    scanf("%f", &creditoUsado);

    saldo = creditoLimite - creditoUsado;

    printf("Conta: %d\nLimite de Crédito: R$%.2f\nCrédito usado: R$%.2f\nSaldo: R$%.2f\n",
    contNum, creditoLimite, creditoUsado, saldo);

    if (saldo < 0){
        printf("\nLimite de crédito EXCEDIDO.\n");
    }
    while (contNum != 0){

        printf("\nNúmero da conta (0=sair): ");
        scanf("%d", &contNum);
        printf("Limite de crédito: ");
        scanf("%f", &creditoLimite);
        printf("Crédito usado: ");
        scanf("%f", &creditoUsado);

        saldo = creditoLimite - creditoUsado;

        printf("Conta: %d\nLimite de Crédito: R$%.2f\nCrédito usado: R$%.2f\nSaldo: R$%.2f\n",
        contNum, creditoLimite, creditoUsado, saldo);

        if (saldo < 0){
            printf("\nLimite de crédito EXCEDIDO.\n");
        }

    }


}

