#include <stdio.h>
#include <math.h> 

int main() {
    double v[10];
    double soma = 0;
    double m;
    double soma_desvio = 0.;
    int n = 10;

    printf("Digite os 10 numeros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
        soma += v[i];
    }

    m = soma / n;

    for (int i = 0; i < n; i++) {
      
        double diferenca = v[i] - m;
        soma_desvio += (diferenca * diferenca); 
    }

    double desvio_padrao = sqrt(soma_desvio / (n - 1));

    printf("Desvio Padrao: %.4f\n", desvio_padrao);

    return 0;
}