#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000

void preencherVetor(int v[], int n);
void mostrarVetor(int v[], int n);
void insertionSort(int v[], int n);

int main() {

    int lista[TAMANHO];

    srand(time(NULL));
    preencherVetor(lista, TAMANHO);

    printf("\nANTES:\n");
    mostrarVetor(lista, TAMANHO);

    clock_t inicio = clock();

    insertionSort(lista, TAMANHO);

    clock_t fim = clock();

    printf("\n\nDEPOIS:\n");
    mostrarVetor(lista, TAMANHO);

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\n\nTempo Insertion: %f segundos\n", tempo);

    return 0;
}

void insertionSort(int v[], int n) {

    int i, j, aux;

    for (i = 1; i < n; i++) {

        aux = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > aux) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = aux;
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