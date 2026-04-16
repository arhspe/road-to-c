#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[100];
    float valor;
} Produto;

/*
Criar um programa que permita cadastrar produtos dinamicamente, aumentando o vetor a cada novo cadastro usando malloc / realloc / free.

O cadastro deve parar quando o usuário digitar código = -1.

typedef struct {
    int codigo;
    char descricao[100];
    float valor;
} Produto;

1. O sistema começa sem nenhum produto cadastrado.
2. O usuario ira cadastrar produtos em loop.
3. Cada novo produto deve expandir o vetor dinamicamente.
4. O cadastro encerra quando o usuário digitar -1 para o código.
5. Ao final, o sistema deve:

• Mostrar todos os produtos cadastrados
• Mostrar o valor médio dos produtos
• Mostrar o produto mais caro

6. Liberar toda memória antes de encerrar.

*/

int codigo = 0;
int quantidadeProduto = 0; 

int main() {
    Produto *listaProdutos = NULL;
    float somaTotal = 0;
    int indiceMaisCaro = 0;

    do {
        printf("\nDigite o Codigo do Produto (ou -1 para sair): ");
        scanf("%d", &codigo);

        if (codigo != -1) {
         
            quantidadeProduto++;
            listaProdutos = (Produto *) realloc(listaProdutos, quantidadeProduto * sizeof(Produto));

            if (listaProdutos == NULL) {
                printf("Error: Acabou a Memoria!");
                return 1; 
            }

            int posicaoAtual = quantidadeProduto - 1;

            listaProdutos[posicaoAtual].codigo = codigo;

            printf("Descricao: ");
            scanf("%s", listaProdutos[posicaoAtual].descricao); 

            printf("Valor: ");
            scanf("%f", &listaProdutos[posicaoAtual].valor); 
            
            somaTotal += listaProdutos[posicaoAtual].valor;
            
            if (listaProdutos[posicaoAtual].valor > listaProdutos[indiceMaisCaro].valor) {
                indiceMaisCaro = posicaoAtual;
            }
        }

    } while (codigo != -1); 
   
    if (quantidadeProduto > 0) {
        printf("\nLISTA DE PRODUTOS");
        for (int i = 0; i < quantidadeProduto; i++) {
            printf("\n%d\t%s\tR$ %.2f", listaProdutos[i].codigo, listaProdutos[i].descricao, listaProdutos[i].valor);
        }

        printf("\n\nValor Medio: R$ %.2f", somaTotal / quantidadeProduto);
        printf("\nProduto mais caro: %s", listaProdutos[indiceMaisCaro].descricao);
    }

    free(listaProdutos);

    return 0;
}