#include <stdio.h>
#include <math.h>

float calc_hipotenusa(float a, float b) {
    return sqrt((a * a) + (b * b));
}

int main() {
    float cat1, cat2;
    printf("Catetos a e b: ");
    scanf("%f %f", &cat1, &cat2);
    printf("Hipotenusa: %.2f\n", calc_hipotenusa(cat1, cat2));
    return 0;
}