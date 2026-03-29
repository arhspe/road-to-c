#include <stdio.h>

void calcular_R(float A[20][20], float M[3][3], float R[20][20]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            float soma = 0;
            
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    soma += A[i][j] * M[k][l];
                }
            }
            R[i][j] = soma / 9.0;
        }
    }
}

int main() {

    float matA[20][20];
    float matM[3][3];
    float matR[20][20];

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            matA[i][j] = 1.0; 
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matM[i][j] = 2.0;
        }
    }

    calcular_R(matA, matM, matR);

   
    printf("Resultado da celula [0][0]: %.2f\n", matR[0][0]);

    return 0;
}