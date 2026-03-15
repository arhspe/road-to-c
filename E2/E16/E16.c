#include <stdio.h>

int main() {
    char nome[20];
    int i, tamanho = 0;

    printf("Digite o nome: ");
    scanf("%s", nome);

    while (nome[tamanho] != '\0') {
        tamanho++;
    }

    printf("\nListagem numerada:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d: %c\n", i + 1, nome[i]);
    }

    printf("\nInverso: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}