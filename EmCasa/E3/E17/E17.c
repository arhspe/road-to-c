#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float distancia(struct Ponto p1, struct Ponto p2) {
    float dx;
    float dy;

    dx = p2.x - p1.x;
    dy = p2.y - p1.y;

    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Ponto p1;
    struct Ponto p2;

    printf("Digite x1 e y1: ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite x2 e y2: ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("Distancia: %.2f\n", distancia(p1, p2));

    return 0;
}