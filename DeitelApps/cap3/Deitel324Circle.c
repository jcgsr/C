/*
 * jó 13.01.18
 */

#include<stdio.h>

int main()
{
    float pi = 3.14159;
    float r, d, c, a;

    puts("\t\tESSE PRORGAMA CALCULA O DIÂMETRO, CIRCUNFERÊNCIA E\n\t\t ÁREA DE UM CÍRCULO ATRAVÉS DO RAIO INFORMADO");

    printf("Informe o raio: ");
    scanf("%f", &r);

    d = 2*r;
    c = 2*pi*r;
    a = pi*r*r;

    printf("Um círculo de raio %.1f possui um diâmetro de %.2f,\n", r, d);
    printf("uma circunferência de %.2f e uma área de %.2f.", c, a);
}
