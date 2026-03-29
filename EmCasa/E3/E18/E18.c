#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
};

struct Aluno cadastrarAluno() {
    struct Aluno a;

    printf("Nome: ");
    scanf("%s",&a.nome);

    printf("Matricula: ");
    scanf("%d", &a.matricula);

    printf("Nota 1: ");
    scanf("%f", &a.nota1);

    printf("Nota 2: ");
    scanf("%f", &a.nota2);

    return a;
}

float calcularMedia(struct Aluno a) {
    return (a.nota1 + a.nota2) / 2;
}

void exibirAluno(struct Aluno a) {
    printf("\nNome: %s\n", a.nome);
    printf("Matricula: %d\n", a.matricula);
    printf("Media: %.2f\n", calcularMedia(a));
}

int main() {
    struct Aluno alunos[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nAluno %d\n", i + 1);
        alunos[i] = cadastrarAluno();
    }

    printf("\nDados dos Alunos\n");

    for (i = 0; i < 3; i++) {
        exibirAluno(alunos[i]);
    }

    return 0;
}