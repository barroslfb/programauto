// Programa que recebe um número e mostra seu fatorial;
// Exercício feito para treinar recursão.
#include <stdio.h>

int fatorial(int num);

int main(void)
{
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    printf("O fatorial de %i é %i\n", n, fatorial(n));

    return 0;
}

int fatorial(int num)
{
    int fat;
    if (num == 1)
    {
        return 1;
    }
    fat = num * fatorial(num - 1);

    return fat;
}
