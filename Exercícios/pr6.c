// Escreva uma função que leia 3 nomes digitados pelo usuário e mostre-os na tela em ordem alfabética.
#include <stdio.h>
#include <string.h>

int main(void)
{
    const int numero = 3;

    char nomes[numero + 1][51];

    for (int i = 0; i < numero; i++)
    {
        printf("Digite o %iº nome: ", i + 1);
        scanf("%s", nomes[i]);
    }

    char temp[51];
    for (int i = 0; i < numero - 1; i++)
    {
      for (int j = 0; j < numero - 1 - i; j++)
      {
        if (strcmp(nomes[j], nomes[j + 1]) > 0)
        {
          strcpy(temp, nomes[j]);
          strcpy(nomes[j], nomes[j + 1]);
          strcpy(nomes[j + 1], temp);
        }
      }
    }

    printf("Segue abaixo os nomes digitados em ordem alfabética:\n");
    for (int i = 0; i < numero; i++)
    {
        printf("%i° - %s\n", i + 1, nomes[i]);
    }

    return 0;
}
