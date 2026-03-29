#include <stdio.h>

// Fabio, estou usando long long ao inves de int, 
// pois os valores crescem rapidamente e poderiam causar overflow.

long long produtoIntervalo(int n) {
    long long resultado = 1;
    int i;

    for (i = n + 1; i <= 2 * n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

int main() {
    int n;
    long long resultado;

    printf("Digite um numero inteiro positivo: ");

    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    if (n <= 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    resultado = produtoIntervalo(n);

    printf("Resultado: %lld\n", resultado);

    return 0;
}