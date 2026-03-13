#include <stdio.h>

int main() {

    int N;
    int contador = 0;
    int numero = 1;

    printf("Digite um numero: ");
    scanf("%d", &N);

    while(contador < N){
        printf("%d\n", numero);
        numero = numero + 2;
        contador++;
    }

    return 0;
}