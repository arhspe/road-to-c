#include <stdio.h>
#include <math.h>

float media_vetor(float v[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++) s += v[i]; 
    return s / n;
}

float desvio_padrao(float v[], int n) {
    float m = media_vetor(v, n);
    float s = 0;
    for (int i = 0; i < n; i++) s += pow(v[i] - m, 2);
    return sqrt(s / (n - 1));
}

int main() {
    float v[5] = {10, 20, 30, 40, 50};
    printf("Desvio Padrao: %.2f\n", desvio_padrao(v, 5));
    return 0;
}