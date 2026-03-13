#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Assinatura
void preencheVetor(int v[], int tamanho);
void mostrarVetor(int v[], int tamanho);
void ordenarBubbleSort(int v[], int tamanho);

int main() {

    srand(time(NULL));

    int lista[100];

    preencheVetor(lista, 100);

    mostrarVetor(lista, 100);

    clock_t inicio = clock();
    ordenarBubbleSort(lista, 100);
    clock_t fim = clock();

    double duracao = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nDuracao: %lf segundos\n", duracao);

    mostrarVetor(lista, 100);

    return 0;
}

void ordenarBubbleSort(int v[], int tamanho){

    int i;
    int k;

    for(k = 0; k < tamanho; k++){
        for(i = 0; i < tamanho - 1; i++){
            if(v[i] > v[i + 1]){
                int temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
            }
        }
    }
}

void preencheVetor(int v[], int tamanho){

    int i;

    for(i = 0; i < tamanho; i++){
        v[i] = rand() % 1000;
    }

}

void mostrarVetor(int v[], int tamanho){

    int i;

    printf("\nArray:\n");

    for(i = 0; i < tamanho; i++){
        printf("%d\n", v[i]);
    }

}