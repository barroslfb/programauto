// Calculadora que recebe 2 números do usuário e faz a operação desejada;
// Este programa foi sendo desenvolvido e atualizado até a 5ª aula do ProgramAuto,
// quando sua nova versão passou a ser feita no "calculadora2.c".
#include <stdio.h>
#include <math.h>

int main(void)
{
    while(1)
    {
        float num1, num2;
        char operator;

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        printf("\n");
        printf("[+] SOMA\n"  "[-] SUBTRAÇÃO\n"  "[/] DIVISÃO\n"
               "[*] MULTIPLICAÇÃO\n" "[^] POTENCIAÇÃO\n"
               "[q] RAIZ QUADRADA\n" "[r] RESTO DA DIVISÃO\n");
        printf("\n");
        while(1)
        {
            printf("Digite o caractere correspondente para efetuar a operação: ");
            scanf(" %c", &operator);
            if(operator == '+' || operator == '-' || operator == '/' ||
                    operator == '*' || operator == '^' || operator == 'q' ||
                    operator == 'r')
                break;
            else
                printf("Comando inválido, tente novamente.\n");
        }

        switch(operator)
        {
            case '+':
                printf("A soma vale %.2f\n", num1 + num2);
                break;

            case '-':
                printf("A diferença vale %.2f\n", num1 - num2);
                break;

            case '/':
                while(num2 == 0)
                {
                    printf("Impossível dividir por 0, digite um novo divisor: ");
                    scanf("%f", &num2);
                }
                printf("O quociente vale %.2f\n", num1 / num2);
                break;

            case '*':
                printf("O produto vale %.2f\n", num1 * num2);
                break;

            case '^':
                printf("%f elevado a %f tem como resultado %.2f\n", num1, num2, pow(num1, num2));
                break;

            case 'q':
                printf("As raízes quadradas de %f e %f são: %.2f e %.2f\n", num1, num2, sqrt(num1), sqrt(num2));
                break;

            case 'r':
                printf("O resto da divisão de %.1f por %.1f é %i\n", num1, num2, (int)num1 % (int)num2);
                break;
        }
        int cont;
        printf("Digite 1 para continuar e 0 para parar a calculadora: ");
        scanf("%i", &cont);

        if(cont == 0)
            break;
    }

    return 0;
}
