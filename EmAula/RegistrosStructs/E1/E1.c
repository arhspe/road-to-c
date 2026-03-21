#include <stdio.h>

struct produto
{
    char descricao[50];
    int quantidade;
    float valorVenda;
    float valorCusto;
};

int main() {

    struct produto p1;

    printf("Descricao Produto: ");
    scanf("%s" , &p1.descricao);
    
    p1.quantidade = 10;
    p1.valorCusto = 125.33;
    p1.valorVenda = 155.99;

    printf("\nDescricao: %s", p1.descricao);

    return 0;
}