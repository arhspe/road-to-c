#include <stdio.h>

int main() {

    int valor;
    int soma = 0; 
    int contador = 0;

    while(contador < 10){
        printf("Digite um numero positivo: ");
        scanf("%d", &valor);

        if(valor > 0){
            soma += valor;
            contador++;
        }else{
            printf("Numero negativo ou zero digitado. Digite apenas numeros positivos!\n");
        }
    }

    printf("A media dos positivos e: %.2f\n", soma / (float)contador);

    return 0;
}