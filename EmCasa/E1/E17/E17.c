#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int A[20], B[20], C[40];
    int i, j, k;
    int tamanhoC = 0;
    int existe;

    srand(time(NULL));

    for(i = 0; i < 20; i++){
        A[i] = rand() % 51;
        B[i] = rand() % 51;
    }

    for(i = 0; i < 20; i++){
        existe = 0;
        for(j = 0; j < tamanhoC; j++){
            if(C[j] == A[i]){
                existe = 1;
                break;
            }
        }
        if(!existe){
            C[tamanhoC] = A[i];
            tamanhoC++;
        }
    }

    for(i = 0; i < 20; i++){
        existe = 0;
        for(j = 0; j < tamanhoC; j++){
            if(C[j] == B[i]){
                existe = 1;
                break;
            }
        }
        if(!existe){
            C[tamanhoC] = B[i];
            tamanhoC++;
        }
    }

    for(i = 0; i < tamanhoC-1; i++){
        for(j = i+1; j < tamanhoC; j++){
            if(C[i] > C[j]){
                k = C[i];
                C[i] = C[j];
                C[j] = k;
            }
        }
    }

    printf("Vetor A: ");
    for(i = 0; i < 20; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Vetor B: ");
    for(i = 0; i < 20; i++){
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Vetor C (unico e ordenado): ");
    for(i = 0; i < tamanhoC; i++){
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}