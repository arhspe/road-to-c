#include <stdio.h>
#include <stdlib.h>

int somar(int x, int y) {
    int soma = x + y;
    return soma;
}

/*
    Funcao responsavel por calcular os juros simples de um financiamento/creditário.
    Fórmula: J = C * t * i
    Onde:
    C = capital
    i = taxa de juros
    t = tempo (meses)
*/

float calcularValores(float c, float i, float t);

int main(int argc, char *argv[]) {
    float c, i, t;

    printf("Vamos calcular seus juros.Primeiro digite o capital: ");
    scanf("%f", &c);

    printf("Agora a taxa de juros: ");
    scanf("%f", &i);

    printf("Agora o tempo em meses: ");
    scanf("%f", &t);

    float resultado = calcularValores(c, i, t);

    printf("Conforme a taxa de %.1f%%, em %.1f meses, com o valor de %.1f, os juros finais sao: %.1f\n", i, t, c, resultado);

    return 0;
}

float calcularValores(float c, float i, float t) {
    float j = c * (i / 100) * t;
    return j;
}