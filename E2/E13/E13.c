#include <stdio.h>

int main() {
    int jogadores[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    double Xi[] = {8, 4, 6, 10, 9, 7, 8, 12, 5, 8, 3};
    double xi[11];
    double xi_quadrado[11];
    int n = 11;
    double soma_Xi = 0, M, S = 0;

    for (int i = 0; i < n; i++) {
        soma_Xi += Xi[i];
    }
    M = soma_Xi / n;

    for (int i = 0; i < n; i++) {
        xi[i] = Xi[i] - M;
        xi_quadrado[i] = xi[i] * xi[i];
        S += xi_quadrado[i];
    }

    printf("Jogador\tAcertos(Xi)\txi\t\t(xi)^2\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.0f\t\t%.2f\t\t%.2f\n", jogadores[i], Xi[i], xi[i], xi_quadrado[i]);
    }

    printf("\nMedia (M): %.2f\n", M);
    printf("Variancia (S): %.2f\n", S);

    return 0;
}