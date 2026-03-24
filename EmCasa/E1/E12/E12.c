#include <stdio.h>

int main() {

    int vetor[10];
    int referencia;
    int menorCount = 0;
    int igualCount = 0;
    int vetor50[50];
    int totalEncontrados = 0;

    // leitura dos 10 numeros do usuario
    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // solicita o valor de referencia
    printf("Digite o valor de referencia: ");
    scanf("%d", &referencia);

    // a. imprima os numeros do vetor que sao maiores que o valor referencia
    printf("Numeros maiores que a referencia: ");
    for(int i = 0; i < 10; i++){
        if(vetor[i] > referencia){
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    // b. quantidade de numeros menores que a referencia
    for(int i = 0; i < 10; i++){
        if(vetor[i] < referencia){
            menorCount++;
        }
    }
    printf("Quantidade de numeros menores que a referencia: %d\n", menorCount);

    // c. quantidade de vezes que a referencia aparece no vetor
    for(int i = 0; i < 10; i++){
        if(vetor[i] == referencia){
            igualCount++;
        }
    }
    printf("Quantidade de vezes que a referencia aparece no vetor: %d\n", igualCount);

    // d. leitura do segundo vetor com 50 posicoes
    printf("Digite 50 numeros para o segundo vetor:\n");
    for(int i = 0; i < 50; i++){
        scanf("%d", &vetor50[i]);
    }

    // d.i contabiliza quantas vezes cada numero do primeiro vetor aparece no segundo vetor
    for(int i = 0; i < 10; i++){
        int count = 0;
        for(int j = 0; j < 50; j++){
            if(vetor[i] == vetor50[j]){
                count++;
            }
        }
        printf("O numero %d aparece %d vezes no vetor de 50 posicoes\n", vetor[i], count);
        if(count > 0){
            totalEncontrados++;
        }
    }

    // d.ii calcula o percentual de numeros do primeiro vetor que aparecem no segundo
    float percentual;
    percentual = (totalEncontrados / 10) * 100;
    printf("Percentual de numeros do primeiro vetor que aparecem no segundo: %.2f%%\n", percentual);

    return 0;
}