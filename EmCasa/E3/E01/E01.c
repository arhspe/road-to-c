#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    int codDisciplina;
    float nota1;
    float nota2;
};

int main() {
   
    struct Aluno alunos[10];
    int n, i;

    printf("Quantos alunos deseja cadastrar? (Maximo 10): ");
    scanf("%d", &n);

    if (n > 10) n = 10;

    for (i = 0; i < n; i++) {
        printf("\nDados do Aluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Codigo da Disciplina: ");
        scanf("%d", &alunos[i].codDisciplina);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("\n--- Listagem Final (Medias) ---\n");
    for (i = 0; i < n; i++) {
        
        float mediaFinal = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;

        printf("Aluno %s  Matricula %d  Media Final %.2f\n", 
                alunos[i].nome, alunos[i].matricula, mediaFinal);
    }

    return 0;
}