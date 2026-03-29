#include <stdio.h>

int main() {
    int m[5][4];
    float soma_finais = 0;
    int maior_nota = -1, mat_maior = 0;

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d (Matricula, MedProvas, MedTrabalhos): ", i + 1);
        scanf("%d %d %d", &m[i][0], &m[i][1], &m[i][2]);
        
        m[i][3] = m[i][1] + m[i][2];
        soma_finais += m[i][3];

        if (m[i][3] > maior_nota) {
            maior_nota = m[i][3];
            mat_maior = m[i][0];
        }
    }

    printf("\nMatricula Maior Nota: %d", mat_maior);
    printf("\nMedia das Notas Finais: %.2f\n", soma_finais / 5.0);

    return 0;
}