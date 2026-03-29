#include <stdio.h>

void separar(int X[30], int A[], int B[], int tamanhos[2]) {
    int tamA = 0;
    int tamB = 0;

    for (int i = 0; i < 30; i++) {
        if (X[i] % 2 == 0) {
            A[tamA] = X[i];
            tamA++;
        } else {
            B[tamB] = X[i];
            tamB++;
        }
    }

    tamanhos[0] = tamA; 
    tamanhos[1] = tamB; 
}

int main() {
    int X[30];
    int A[30], B[30];
    int tamanhos[2]; 

    for (int i = 0; i < 30; i++) {
        X[i] = i + 1;
    }

    separar(X, A, B, tamanhos);

    int total_pares = tamanhos[0];
    int total_impares = tamanhos[1];

    printf("Elementos Pares (%d encontrados):\n", total_pares);
    for (int i = 0; i < total_pares; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nElementos Impares (%d encontrados):\n", total_impares);
    for (int i = 0; i < total_impares; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");
    return 0;
}
