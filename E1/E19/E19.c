#include <stdio.h>

int main() {

    int numero;
    int totalLidos = 0;
    int totalPares = 0;

    printf("Digite numeros inteiros (1000 para encerrar):\n");

    do {
        scanf("%d", &numero);

        if(numero != 1000){
            totalLidos++;

            if(numero % 2 == 0){
                totalPares++;
            }
        }

    } while(numero != 1000);

    printf("Total de numeros lidos: %d\n", totalLidos);
    printf("Total de numeros pares: %d\n", totalPares);

    return 0;
}