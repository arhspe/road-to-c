#include <stdio.h>

float converter(float c) {
    return c * (9.0 / 5.0) + 32.0;
}

int main() {
    float celsius;
    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);
    printf("Fahrenheit: %.2f\n", converter(celsius));
    return 0;
}