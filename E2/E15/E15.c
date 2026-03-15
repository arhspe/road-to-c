#include <stdio.h>

int main() {
    int x[] = {2, 7, 4, 3, 2};
    int y[] = {1, 2, 3, 6, 5};
    int j;
    
    double soma_a = 0;
    double soma_b = 0;
    double soma_c_p1 = 0;
    double soma_c_p2 = 0;

    for (j = 0; j < 5; j++) {
        soma_a += x[j];
    }

    for (j = 0; j < 5; j++) {
        soma_b += (x[j] * y[j]);
    }

    for (j = 1; j <= 3; j++) {
        soma_c_p1 += x[j] * (y[j] * y[j]);
    }

    for (j = 0; j < 5; j++) {
        soma_c_p2 += 3;
    }

    printf("Resultados:\n");
    printf("a) %.0f\n", soma_a);
    printf("b) %.0f\n", soma_b);
    printf("c) %.0f\n", soma_c_p1 + soma_c_p2);

    return 0;
}