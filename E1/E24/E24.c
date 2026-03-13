#include <stdio.h>

int main() {

    int numero;
    int i;
    int soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero <= 0){
        printf("Numero invalido.\n");
        return 0;
    }

    for(i = 1; i < numero; i++){
        if(numero % i == 0){
            soma += i;
        }
    }

    printf("Soma dos divisores (exceto o proprio numero): %d\n", soma);

    return 0;
}