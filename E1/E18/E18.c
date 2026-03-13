#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero para geracao da tabuada: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num);

    printf("\nSoma:\n");
    for (int i = 0; i <= 10; i++) {
        printf("%d + %d = %d\n", num, i, num + i);
    }

    printf("\nMultiplicacao:\n");
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}