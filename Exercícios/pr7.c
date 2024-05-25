// Escreva um programa que receba a idade e altura do usuário e as imprima na tela. 
// O programa deve utilizar as funções void receive_data(int age, float height); 
// e void print_data(int age, float height);
#include <stdio.h>

void receive_data(int *age, float *height);
void print_data(int age, float height);

int main(void)
{
    int age = 0;
    float height = 0;

    receive_data(&age, &height);
    print_data(age, height);

    return 0;
}

void receive_data(int *age, float *height)
{
    printf("Digite sua idade: ");
    scanf("%i", age);
    printf("Digite sua altura em metros: ");
    scanf("%f", height);
}

void print_data(int age, float height)
{
    printf("Você tem %i anos e mede %.2f m.\n", age, height);
}
