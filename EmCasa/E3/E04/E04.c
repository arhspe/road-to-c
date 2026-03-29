#include <stdio.h>

struct aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
    struct aluno alunos[5];

    for(int i = 0; i < 5; i++) {
        printf("Aluno %d - Nome: ", i + 1);
        scanf(" %s", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Curso: ");
        scanf(" %s", alunos[i].curso);
    }
    for(int i = 0; i < 5; i++) {
        printf("\n%s %d %s", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
    }
    return 0;
}