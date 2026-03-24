#include <stdio.h>

int main() {
    float av1[20], av2[20], hw[20], medias[20];
    int situacao[20];
    int n, i;

    printf("Quantidade de alunos (max 20): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("AV1: ");
        scanf("%f", &av1[i]);
        printf("AV2: ");
        scanf("%f", &av2[i]);
        printf("Homeworks: ");
        scanf("%f", &hw[i]);

        medias[i] = (av1[i] * 3 + av2[i] * 4 + hw[i] * 3) / 10;

        if (medias[i] >= 6.0) {
            situacao[i] = 1;
        } else {
            situacao[i] = 2;
        }
    }

    printf("\nAV1\tAV2\tHW\tMedia\tSituacao\n");
    for (i = 0; i < n; i++) {
        printf("%.1f\t%.1f\t%.1f\t%.1f\t%d\n", av1[i], av2[i], hw[i], medias[i], situacao[i]);
    }

    return 0;
}