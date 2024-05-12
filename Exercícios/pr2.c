// Escreva um programa que converta graus Fahrenheit em graus Celsius
#include <stdio.h>

int main(void)
{
    float fare;
    printf("Digite o valor em graus Farenheit: ");
    scanf("%f", &fare);

    float cel = (fare - 32) * 5 / 9;
    printf("%.1f graus Farenheit valem %.1f graus Celsius.\n ", fare, cel);

    return 0;
}
