#include <stdio.h>

struct produto {
    int codigo;
    int quantidade;

};

int main() {

    struct produto prod;
    struct produto *p;

    prod.codigo = 99;
    prod.quantidade = 10;

    p = &prod;

    /* FORMAS DE ACESSAR O CONTEUDO APONTADO PELO PONTEIRO
    EM UM TIPO STRUCT: 
    
    -> E o mais utilizado
    */ 
    printf("Codigo: %d", (*p).codigo);
    printf("\n Quantidade: %d", p -> quantidade);


    return 0;
}

