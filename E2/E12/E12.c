#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5];
    int sorteados[100];
    int i, j, numero;

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        sorteados[i] = 0;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            do {
                numero = rand() % 100;
            } while (sorteados[numero] == 1);

            cartela[i][j] = numero;
            sorteados[numero] = 1;
        }
    }

    printf("Cartela de Bingo\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%02d\t", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}