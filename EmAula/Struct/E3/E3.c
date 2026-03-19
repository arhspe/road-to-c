#include <stdio.h>

// Array
struct produto
{
    int codigo;
    int quantidade;
    float valorVenda;
    float valorCusto;
};

int main() {

    struct produto lista[10];
    int i;

    for (i = 0; i <  3; i++) {
        printf("\nID: ");
        scanf("%d", &lista[i].codigo);

        printf("\nQuantidade: ");
        scanf("%d", &lista[i].quantidade);

    }
    printf("\nLISTA DE PRODUTOS");
    printf("\nCodigo      Quantidade");

    for (i = 0; i <  3; i++) {
        printf("\n%d     %d",  lista[i].codigo, lista[i].quantidade);
    }

    return 0;
}