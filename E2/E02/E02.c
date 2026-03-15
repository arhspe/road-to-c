#include <stdio.h>

int main() {

    double a[2][3];
    double b[2][3];
    double soma[2][3];
    int i, j;

    printf("Digite os valores da matriz A:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%lf", &a[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%lf", &b[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            soma[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSoma matrizes:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2lf ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}