#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000

void preencherVetor(int v[], int n);
void mostrarVetor(int v[], int n);
void selectionSort(int v[], int n);

int main() {

    int lista[TAMANHO];

    srand(time(NULL));
    preencherVetor(lista, TAMANHO);

    printf("\nANTES:\n");
    mostrarVetor(lista, TAMANHO);

    clock_t inicio = clock();

    selectionSort(lista, TAMANHO);

    clock_t fim = clock();

    printf("\n\nDEPOIS:\n");
    mostrarVetor(lista, TAMANHO);

    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\n\nTempo Selection: %f segundos\n", tempo);

    return 0;
}

void selectionSort(int v[], int n) {

    int i, j, menor, temp;

    for (i = 0; i < n - 1; i++) {

        menor = i;

        for (j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            temp = v[i];
            v[i] = v[menor];
            v[menor] = temp;
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