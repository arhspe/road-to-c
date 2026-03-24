#include <stdio.h>

int main() {
    int matriza[4][4], matrizb[4][4], matrizmaior[4][4];
    int i, j;

    printf("Digite os elementos da matriz a (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &matriza[i][j]);
        }
    }

    printf("\nDigite os elementos da matriz b (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &matrizb[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriza[i][j] > matrizb[i][j]) {
                matrizmaior[i][j] = matriza[i][j];
            } else {
                matrizmaior[i][j] = matrizb[i][j];
            }
        }
    }

    printf("\nMatriz com os Maiores Valores\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrizmaior[i][j]);
        }
        printf("\n");
    }

    return 0;
}