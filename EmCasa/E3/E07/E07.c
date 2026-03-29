#include <stdio.h>

struct Voo {
    int origem;
    int destino;
};

struct Aeroporto {
    int codigo;
    int saem;
    int chegam;
};

int main() {
    struct Voo voos[5];
    struct Aeroporto aeros[5];

    for (int i = 0; i < 5; i++) {
        aeros[i].codigo = i;
        aeros[i].saem = 0;
        aeros[i].chegam = 0;
    }

    for (int i = 0; i < 5; i++) {
        int o, d;
        printf("Voo %d\n", i + 1);
        do {
            printf("Codigo Origem (0-4): ");
            scanf("%d", &o);
            printf("Codigo Destino (0-4): ");
            scanf("%d", &d);
        } while (o < 0 || o > 4 || d < 0 || d > 4);

        voos[i].origem = o;
        voos[i].destino = d;
        aeros[o].saem++;
        aeros[d].chegam++;
    }

    for (int i = 0; i < 5; i++) {
        printf("\nAeroporto %d  Saidas: %d  Chegadas: %d", 
                aeros[i].codigo, aeros[i].saem, aeros[i].chegam);
    }

    return 0;
}