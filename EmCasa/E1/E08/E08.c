#include <stdio.h>

int main() {

    int valor;
    int menor;
    int maior;

    for(int i = 1; i <= 10; i++){

        printf("Digite o %d numero: ", i);
        scanf("%d", &valor);

        if(i == 1){
            menor = valor;
            maior = valor;
        }

        if(valor < menor){
            menor = valor;
        }

        if(valor > maior){
            maior = valor;
        }

    }

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    return 0;
}