#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000

void preencherVetor(int v[], int n);
void mostrarVetor(int v[], int n);
void bubbleSort(int v[], int n);

int main() {

    int lista[TAMANHO];

    srand(time(NULL));
    preencherVetor(lista, TAMANHO);

    printf("\nANTES:\n");
    mostrarVetor(lista, TAMANHO);

    clock_t inicio = clock();

    bubbleSort(lista, TAMANHO);

    clock_t fim = clock();

    printf("\n\nDEPOIS:\n");
    mostrarVetor(lista, TAMANHO);

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\n\nTempo Bubble: %f segundos\n", tempo);

    return 0;
}

void bubbleSort(int v[], int n) {
    int i, j;

    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
    }
}

void preencherVetor(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        v[i] = rand() % 100;
    }
}

void mostrarVetor(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}