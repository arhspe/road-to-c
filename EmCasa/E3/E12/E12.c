#include <stdio.h>

int main() {
    float x[5], y[5], escalar = 0;

    printf("Vetor X (5 elementos): ");
    for (int i = 0; i < 5; i++) scanf("%f", &x[i]);

    printf("Vetor Y (5 elementos): ");
    for (int i = 0; i < 5; i++) scanf("%f", &y[i]);

    for (int i = 0; i < 5; i++) {
        escalar += x[i] * y[i];
    }

    printf("Produto Escalar: %.2f\n", escalar);
    return 0;
}