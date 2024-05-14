// Calculadora que recebe 2 números do usuário e faz a operação desejada;
// Este programa foi sendo desenvolvido e atualizado da 5ª à 7ª aula do ProgramAuto.
// Na linha 20, está o problema com o fgets.
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    while(1)
    {
        char operator[4];

        printf("[+] SOMA\n"  "[-] SUBTRAÇÃO\n"  "[/] DIVISÃO\n"
               "[*] MULTIPLICAÇÃO\n" "[^] POTENCIAÇÃO\n"
               "[q] RAIZ QUADRADA\n" "[r] RESTO DA DIVISÃO\n");
        printf("A operação deve ser apenas entre números de 0 a 9.\n"
                "Digite a operação: ");

        //fgets(operator, 3, stdin);
        scanf("%s", operator);

        if((strlen(operator)) != 3 || ((operator[1] != '+' && operator[1] != '-' && operator[1] != '/' &&
                                        operator[1] != '*' && operator[1] != '^' && operator[1] != 'q' &&
                                        operator[1] != 'r')))
        {
            printf("Operação inválida.\n");
        }
        else
        {
            float num1 = operator[0] - '0';
            float num2 = operator[2] - '0';

            switch(operator[1])
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

        }
        int cont = 2;
        while(cont != 0 && cont != 1)
        {
            printf("Digite 1 para continuar e 0 para parar a calculadora: ");
            scanf(" %i", &cont);
        }
        if (cont == 0)
        {
            break;
        }
    }

    return 0;
}
