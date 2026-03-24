#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int matriz[10][10];
    int i, j;
    int opcao;

    srand(time(NULL));

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 1001;
        }
    }

    printf("Matriz:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDeseja ver os indices e valores das posicoes nao nulas? (1 = sim / 0 = nao): ");
    scanf("%d", &opcao);

    if(opcao == 1) {
        for(i = 0; i < 10; i++) {
            for(j = 0; j < 10; j++) {
                if(matriz[i][j] != 0) {
                    printf("linha: %d coluna: %d valor: %d\n", i, j, matriz[i][j]);
                }
            }
        }
    }

    return 0;
}