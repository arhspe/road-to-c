#include <stdio.h>

int main() {

    int num1;
    int num2;
    int i;
    int somaPares = 0;
    int multImpares = 1;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(i = num1; i <= num2; i++){
        if(i % 2 == 0){
            somaPares += i;
        } else {
            multImpares *= i;
        }
    }

    printf("Soma dos numeros pares: %d\n", somaPares);
    printf("Multiplicacao dos numeros impares: %d\n", multImpares);

    return 0;
}