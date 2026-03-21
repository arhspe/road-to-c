#include <stdio.h>

struct endereco
{
    char cidade[50];
    char rua[50];
};

struct cliente
{
    int codigo;
    char nome[50];
    struct endereco ender;
    
};

//typedef
typedef int fran;
typedef struct endereco Endereco;

int main() {

    int a = 10;
    fran b = 20;
    
    struct endereco e1;
    Endereco e2;

    //
    
    struct cliente cli;

    printf("Ola, escreva o ID do funcionario: ");
    scanf("%d" , &cli.codigo);

    printf("Escreva o nome do cliente: ");
    scanf("%s" , &cli.nome);

    printf("Escreva o endereco (cidade): ");
    scanf("%s" , &cli.ender.cidade);

    return 0;
}