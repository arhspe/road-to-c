#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Arrays declaracao:
    (int *m, int n)
    (int m[], int n)
    (int m[5], int n)
*/

void preencherArray(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

void imprimirArray(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}

void incrementaPorReferencia(int *n) { // O * faz a magica
    *n = *n + 1;
    printf("Dentro da funcao: x = %d\n", *n);
}

void incrementa(int n) {
    n++;
    printf("Dentro da funcao: x = %d\n", n);
}

int main(int argc, char *argv[]) {
    int v[20];

    preencherArray(v, 20);
    imprimirArray(v, 20);

    int x = 5;
    printf("\nAntes da funcao: x = %d\n", x);

    incrementa(x);
    printf("Depois da funcao: x = %d\n", x);

    incrementaPorReferencia(&x); // Com o & você envia o endereço de memoria
    printf("Depois da funcao: x = %d\n", x);

    return 0;
}