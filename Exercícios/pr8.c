// Um cupido que encontra casais!! Neste programa duas pessoas vão ser escolhidas ao acaso
// de uma lista de 10 nomes, e será impresso na tela "Pessoa1 gosta de Pessoa2”
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    char *lista[] = {"Ana", "Bruno", "Carlos", "Heloíse", "Lucas",
                    "Luiz", "Isabel", "Gabriel", "Júlia", "Paula"};

    char *random1 = lista[rand()%10];
    char *random2 = lista[rand()%10];
    while (random1 == random2)
    {
        random2 = lista[rand()%10];
    }
    printf("%s gosta de %s\n", random1, random2);
    return 0;
}
