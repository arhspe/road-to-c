#include <stdio.h>

int main() {
    int num, proximo;

    printf("Digite um numero: ");
    scanf("%d", &num);

    proximo = num + 1;

    while (1) {
        if (proximo % 11 == 0 || proximo % 13 == 0 || proximo % 17 == 0) {
            printf("O primeiro multiplo de 11, 13 ou 17 apos %d e: %d\n", num, proximo);
            break;
        }
        proximo++;
    }

    return 0;
}