#include <stdio.h>

int main() {

    int nota;
    int somaNotas = 0;
    int contador = 0;
    float media;

    printf("Digite notas entre 10 e 20 (qualquer outro valor encerra):\n");

    do {
        scanf("%d", &nota);

        if(nota >= 10 && nota <= 20){
            somaNotas += nota;
            contador++;
        }

    } while(nota >= 10 && nota <= 20);

    if(contador > 0){
        media = somaNotas / (float)contador;
        printf("Media das notas: %.2f\n", media);
    } else {
        printf("Nenhuma nota valida foi digitada.\n");
    }

    return 0;
}