#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, opcao, soma = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nEscolha a soma desejada:\n");
    printf("1 - Somar elementos ACIMA da diagonal principal\n");
    printf("2 - Somar elementos ABAIXO da diagonal principal\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (j > i) {
                    soma += matriz[i][j];
                }
            }
        }
        printf("\nSoma dos elementos acima da diagonal: %d\n", soma);
    } 
    else if (opcao == 2) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++) {
                if (i > j) {
                    soma += matriz[i][j];
                }
            }
        }
        printf("\nSoma dos elementos abaixo da diagonal: %d\n", soma);
    } 
    else {
        printf("\nOpcao invalida!\n");
    }

    return 0;
}