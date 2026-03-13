#include <stdio.h>

int main() {

    int numero = 2;
    int contador = 0;
    int soma = 0;

    while(contador < 50){
        soma = soma + numero;
        numero = numero + 2;
        contador++;
    }

    printf("Soma: %d\n", soma);

    return 0;
}