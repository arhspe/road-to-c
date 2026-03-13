#include <stdio.h>

int main() {

    int valor, soma = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("A soma dos valores e: %d\n", soma);

    return 0;
}