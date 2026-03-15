#include <stdio.h>

int main() {
    int vetor[15];
    int busca, i, encontrado = -1;

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um numero para buscar: ");
    scanf("%d", &busca);

    for (i = 0; i < 15; i++) {
        if (vetor[i] == busca) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("Posicao: %d\n", encontrado);
    } else {
        printf("Nao encontrado!\n");
    }

    return 0;
}