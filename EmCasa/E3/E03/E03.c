#include <stdio.h>

struct endereco {
    char rua[50];
    int numero;
    char cidade[50];
};

struct pessoa {
    char nome[50];
    int idade;
    struct endereco ender;
};

int main() {
    struct pessoa p;
    printf("Nome: ");
    scanf(" %s", p.nome);
    printf("Idade: ");
    scanf("%d", &p.idade);
    printf("Rua: ");
    scanf(" %s", p.ender.rua);
    printf("Numero: ");
    scanf("%d", &p.ender.numero);
    printf("Cidade: ");
    scanf(" %s", p.ender.cidade);

    return 0;
}