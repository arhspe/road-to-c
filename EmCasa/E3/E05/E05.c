#include <stdio.h>

struct aluno {
    int mat;
    char nome[50];
    float n1, n2, n3;
};

int main() {
    struct aluno a[5];
    float med[5];
    int p1 = 0, maior = 0, menor = 0;

    for (int i = 0; i < 5; i++) {

        printf("Dados do Aluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &a[i].mat);

        printf("Nome: ");
        scanf("%s", a[i].nome);

        printf("Nota 1: ");
        scanf("%f", &a[i].n1);

        printf("Nota 2: ");
        scanf("%f", &a[i].n2);

        printf("Nota 3: ");
        scanf("%f", &a[i].n3);
        
        med[i] = (a[i].n1 + a[i].n2 + a[i].n3) / 3;

        if (a[i].n1 > a[p1].n1) p1 = i;
    }

    for (int i = 1; i < 5; i++) {
        if (med[i] > med[maior]) maior = i;
        if (med[i] < med[menor]) menor = i;
    }

    printf("\nMaior P1: %s", a[p1].nome);
    printf("\nMaior Media: %s", a[maior].nome);
    printf("\nMenor Media: %s", a[menor].nome);

    for (int i = 0; i < 5; i++) {
        if (med[i] >= 6) {
             printf("\n%s: Aprovado", a[i].nome);

            } else {
                 printf("\n%s: Reprovado", a[i].nome);
}
    }

    return 0;
}