#include <stdio.h>

int main() {

    int matriz[10][10];
    int i, j;
    int linha, coluna, valor;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            matriz[i][j] = 0;
        }
    }

    printf("Digite o INDICE DA LINHA e o INDICE DA COLUNA:\n");
    scanf("%d %d", &linha, &coluna);

    while(linha >= 0 && coluna >= 0) {
        if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {

            printf("Digite o valor para matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &valor);

            matriz[linha][coluna] = valor;

        } else {

            printf("Indice invalido! Linha e coluna devem estar entre 0 e 9.\n");

        }

        printf("\nDigite o INDICE DA LINHA e o INDICE DA COLUNA:\n");
        scanf("%d %d", &linha, &coluna);
    }

    
    printf("\nMatriz final:\n");

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}