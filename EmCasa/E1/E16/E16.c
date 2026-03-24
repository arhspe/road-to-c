#include <stdio.h>

int main() {
    int w[10], k[10], soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o valor de w[%d] e k[%d]: ", i, i);
        scanf("%d %d", &w[i], &k[i]);
    }

    for(int i = 0; i < 10; i++) {
        soma += (w[i] + k[9 - i]);
    }

    printf("O resultado final e: %d\n", soma);

    return 0;
}