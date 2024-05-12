// Escreva um programa que leia um inteiro do teclado e mostre-o na tela.
#include <stdio.h>

int main(void)
{
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    printf("O número digitado é: %i\n", numero);

    return 0;
}
