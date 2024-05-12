// Escreva um programa que liste todos os números pares menores que mil, some-os e imprima o resultado.
#include <stdio.h>

int main(void)
{
    int somaPar = 0;
    printf("Os números pares menores que 1000 são:\n");
    printf("\n");
    for (int i = 0; i < 1000; i += 2)
    {
        printf("%i ", i);
        somaPar += i;
    }
    printf("\n");
    printf("\nE a soma deles é %i\n", somaPar);

    return 0;
}
