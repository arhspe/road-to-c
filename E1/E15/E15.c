#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeros[20];
    int i;

    srand(time(NULL));

    for(i = 0; i < 20; i++){
        numeros[i] = rand() % 100;
    }

    printf("Numeros na ordem original:\n");
    for(i = 0; i < 20; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Numeros em ordem inversa:\n");
    for(i = 19; i >= 0; i--){
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}