#include <stdio.h>

int main() {
    int n;
    float hn = 0;

    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        hn += 1 / i;
    }

    printf("O valor de H(%d) e: %.4f\n", n, hn);

    return 0;
}