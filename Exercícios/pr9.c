// Faça um jogo-da-velha com lógica aleatória, mas com uma exceção: se a casa do meio
// estiver vazia, o computador vai preferir jogar lá. Senão, vai jogar ao acaso.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ganhou(char jogo[3][3]);
void visual(char jogo[3][3]);

int main(void) {
    srand(time(NULL));
    int linha, coluna, linhaMaq, colunaMaq;

    char jogo[3][3] = {{'a', 'a', 'a'}, {'a', 'a', 'a'}, {'a', 'a', 'a'}};
    printf("Bem-vindo ao jogo da velha! Você será o X enquanto eu serei o O. Que vença o melhor!\n");
    while(1){

        // Input do usuário
        while(1) {
            printf("Digite a linha que deseja jogar: ");
            scanf("%i", &linha);
            if (linha == 1 || linha == 2 || linha == 3) {
                break;
            }
            else {
                printf("Digite um valor de linha válido de 1 a 3.\n");
            }
        }

        while(1) {
            printf("Agora, digite a coluna: ");
            scanf("%i", &coluna);
            if (coluna == 1 || coluna == 2 || coluna == 3) {
                break;
            }
            else {
                printf("Digite um valor de coluna válido de 1 a 3.\n");
            }
        }
        jogo[linha - 1][coluna - 1] = 'X';
        visual(jogo);

        // Verifica se alguém já ganhou o jogo
        if (ganhou(jogo) == 0) {
            break;
        }

        // Verifica se ocorreu um empate
        else if (jogo[0][0] != 'a' && jogo[0][1] != 'a' && jogo[0][2] != 'a' &&
                 jogo[1][0] != 'a' && jogo[1][1] != 'a' && jogo[1][2] != 'a' &&
                 jogo[2][0] != 'a' && jogo[2][1] != 'a' && jogo[2][2] != 'a')
                 {
                    printf("JOGO FINALIZADO COM UM EMPATE!\n");
                    break;
                 }

        // Coloca agora a máquina para jogar
        while(1) {
            if (jogo[1][1] == 'a') {
                jogo[1][1] = 'O';
                break;
            }
            else {
                linhaMaq = rand() % 3;
                colunaMaq = rand() % 3;
                if (jogo[linhaMaq][colunaMaq] == 'a') {
                    jogo[linhaMaq][colunaMaq] = 'O';
                    break;
                }
            }
        }
        printf("Essa foi a jogada da máquina:\n");
        visual(jogo);

        // Verifica se alguém já ganhou o jogo
        if (ganhou(jogo) == 0) {
            break;
        }
    }
    return 0;
}

int ganhou(char jogo[3][3]) {
    if ((jogo[0][2] == jogo[1][2]) && (jogo[1][2] == jogo[2][2]) && (jogo[2][2] == 'O' || jogo[2][2] == 'X')||
        (jogo[0][0] == jogo[1][0]) && (jogo[1][0] == jogo[2][0]) && (jogo[2][0] == 'O' || jogo[2][0] == 'X') ||
        (jogo[0][1] == jogo[1][1]) && (jogo[1][1] == jogo[2][1]) && (jogo[2][1] == 'O' || jogo[2][1] == 'X') ||

        (jogo[0][0] == jogo[0][1]) && (jogo[0][1] == jogo[0][2]) && (jogo[0][2] == 'O' || jogo[0][2] == 'X') ||
        (jogo[1][0] == jogo[1][1]) && (jogo[1][1] == jogo[1][2]) && (jogo[1][2] == 'O' || jogo[1][2] == 'X') ||
        (jogo[2][0] == jogo[2][1]) && (jogo[2][1] == jogo[2][2]) && (jogo[2][2] == 'O' || jogo[2][2] == 'X') ||

        (jogo[0][0] == jogo[1][1]) && (jogo[1][1] == jogo[2][2]) && (jogo[2][2] == 'O' || jogo[2][2] == 'X') ||
        (jogo[0][2] == jogo[1][1]) && (jogo[1][1] == jogo[2][0]) && (jogo[2][0] == 'O' || jogo[2][0] == 'X'))
        {
            printf("JOGO FINALIZADO.\n");
            return 0;
        }
    else {
        return 1;
    }
}

void visual(char jogo[3][3]) {
    printf("\n-------------\n");
    for(int i = 0; i < 3; i++) {
        printf("|");
        for(int j = 0; j < 3; j++) {
            if (jogo[i][j] == 'a') {
                printf("   |");
            }
            else {
                printf(" %c |", jogo[i][j]);
            }
        }
        printf("\n-------------\n");
    }
    printf("\n");
}
