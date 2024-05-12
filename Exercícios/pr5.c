// Escreva um programa que use uma matriz bidimensional 3x3 para armazenar números inteiros aleatórios e calcule o seu determinante.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int matriz[3][3];
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("| ");
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%i ", matriz[i][j]);
        }
        printf("|");
        printf("\n");
    }
    int determinante = (matriz[0][0] * matriz[1][1] * matriz[2][2]) +
                       (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
                       (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
                       (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
                       (matriz[0][0] * matriz[1][2] * matriz[2][1]) -
                       (matriz[0][1] * matriz[1][0] * matriz[2][2]);
    printf("\nO determinante da matriz é %i.\n\n", determinante);

    return 0;
}
