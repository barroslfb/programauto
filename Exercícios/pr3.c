// Escreva um programa que mostre "Hello, World!!" na tela, mas a mensagem deve ser mostrada dez vezes, e formatada em uma tabela.
#include <stdio.h>

int main(void)
{
    int tabela = 18;
    for (int i = 0; i < 10; i++)
    {
        for(int i = 0; i < tabela; i++)
        {
            printf("-");
        }
        printf("\n");
        printf("| Hello, World!! |\n");
    }
    for (int i = 0; i < tabela; i++)
    {
        printf("-");
    }
    printf("\n");

    return 0;
}
