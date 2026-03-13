#include <stdio.h>

int main() {

    int N;
    int i = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &N);

    while(i <= N){
        printf("%d\n", i);
        i++;
    }

    return 0;
}