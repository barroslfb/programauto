// Programa que recebe os valores "a", "b" e "x" de uma função afim
// e mostra seu resultado.
#include <stdio.h>

int axb(int a, int x, int b);

int main(void)
{
    int a, x, b;
    printf("Digite os valores da função afim: ");
    scanf("%i %i %i", &a, &x, &b);
    printf("A função %ix%i + %i é igual a %i\n", a, x, b, axb(a, x, b));

    return 0;
}

int axb(int a, int x, int b)
{
    int funcao = a*x + b;
    return funcao;
}
