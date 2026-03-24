#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int w[100];
    int i;
    int j;
    int primo;

    srand(time(NULL));

    for(i = 0; i < 100; i++){
        w[i] = rand() % 1001;
    }

    printf("Numeros primos no vetor w:\n");

    // verifica cada numero se e primo
    for(i = 0; i < 100; i++){
        if(w[i] < 2){
            continue;
        }

        primo = 1; 
        for(j = 2; j * j <= w[i]; j++){
            if(w[i] % j == 0){
                primo = 0;
                break;
            }
        }

        if(primo){
            printf("%d ", w[i]);
        }
    }

    printf("\n");

    return 0;
}