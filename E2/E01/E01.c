#include <stdio.h>

int main() {

    int v[10];
    int i;
    int ref;

    int menores = 0;
    int iguais = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Digite o valor de referencia: ");
    scanf("%d", &ref);

    printf("\nNumeros maiores que %d:\n", ref);

    for(i = 0; i < 10; i++) {

        if(v[i] > ref) {
            printf("%d ", v[i]);
        }

        if(v[i] < ref) {
            menores++;
        }

        if(v[i] == ref) {
            iguais++;
        }
    }

    printf("\n\nQuantidade de numeros menores: %d", menores);
    printf("\nQuantidade de vezes que aparece: %d\n", iguais);

    return 0;
}