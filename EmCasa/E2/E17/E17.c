#include <stdio.h>

int main() {
    int numeros[8];
    int i, contador = 0;

    for (i = 0; i < 8; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros digitados: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
        if (numeros[i] % 6 == 0) {
            contador++;
        }
    }

    printf("\nTotal de multiplos de seis: %d\n", contador);

    return 0;
}