#include <stdlib.h>
#include <stdio.h>

struct produto
{
    int codigo;
    int quantidade;
    float valorUnitario;
};

typedef struct produto Produto;

struct elemento
{
    Produto produto;
    struct elemento *anterior;
    struct elemento *proximo;
};

typedef struct elemento Elemento;
typedef struct elemento* Lista;

// Lista y; - Ponteiro de struct Elemento
// Lista *z - Ponteiro para ponteiro de struct Elemento


// Prototipos
Lista* criarLista ();
int inserirInicioLista(Lista *lista, Produto novoProduto);
void imprimirListaProdutos(Lista *lista);
int inserirFimLista(Lista* lista, Produto novoProduto);
int eVazia(Lista *lista);
int removerInicioLista(Lista *lista);
int removerFimLista(Lista *lista);

int main (){

    Produto p1 = {111, 12, 12.50};
    Produto p2 = {222, 4, 3.50};
    Produto p3 = {333, 34, 7.25};
    Produto p4 = {444, 125, 2.40};

    Lista *listaProdutos = criarLista(); // Cria a lista (ponteiro para ponteiro )

    inserirInicioLista(listaProdutos, p1);
    inserirInicioLista(listaProdutos, p2);
    inserirInicioLista(listaProdutos, p3);

    inserirFimLista(listaProdutos, p4);

    imprimirListaProdutos(listaProdutos);
    
    removerInicioLista(listaProdutos);

    imprimirListaProdutos(listaProdutos);

    removerFimLista(listaProdutos);

    imprimirListaProdutos(listaProdutos);

    return 0;
}

Lista* criarLista (){

    Lista *lista = (Lista*) malloc(sizeof(Lista)); // Serve para apontar para o primeiro elemento (ponteiro), por isso e um ponteiro para ponteiro. Pense em um ponteiro para ponteiro *lista apontando para o primeiro elemento 
  
    if(lista != NULL){ // Confere se a lista existe
        *lista = NULL; // Cria lista vazia (apontando para NULL)
    }

    return lista;
} 

int inserirInicioLista(Lista *lista, Produto novoProduto) {
    
    
    if (lista == NULL) { // Verifica se a lista ja existe
        printf ("Nao existe lista");
        return 0; // Retorna false
    }

    Elemento *elemento = (Elemento*) malloc(sizeof(Elemento)); // Cria novo elemento/no na lista

    if(elemento == NULL) { // Verifica se o elemento existe 
        return 0; // False
    }

    elemento -> produto = novoProduto;
    elemento ->proximo = (*lista);
    elemento ->anterior = NULL;

    if(*lista != NULL) {
        (*lista) ->anterior = elemento;
    }

    *lista = elemento;
    return 1; // Retorna true, ou seja, deu certo

}

void imprimirListaProdutos(Lista *lista){

    if (lista == NULL){
        printf("Print: lsita inexistente");
        return;
    }

    printf("\n..:: Lista de Produtos ::..");
    printf("\nCodigo | Qtd | Valor Unitario");
    printf("\n......................................");

    Elemento *aux = *lista;

    while(aux != NULL) {
        printf("\n%d\t%d\t%.2f ", aux->produto.codigo,
                                  aux->produto.quantidade,
                                  aux->produto.valorUnitario);
        aux = aux->proximo;
    }

    printf("\n......................................");

}

int inserirFimLista(Lista *lista, Produto novoProduto){

    if (lista == NULL) {
        printf("Inserir fim: lista nao existe");
         return 0; // False
    }
   
    Elemento *elemento = (Elemento*) malloc (sizeof(Elemento));

    if(elemento == NULL) {
        printf("Inserir fim: nao foi possivel alocar memoria");
        return 0; // False
    } 

    elemento-> produto = novoProduto;
    elemento-> proximo = NULL; // Aponta para o fim

    if (*lista == NULL){ // Lista e vazia
        *lista = elemento;
    } else {
        Elemento *aux = *lista;
        // Procura ultimo elemento
        while (aux->proximo != NULL){
            aux = aux ->proximo;
        }
        aux->proximo = elemento;
        elemento->proximo;
    }
    
return 1;
}

int eVazia(Lista *lista){

    if (lista == NULL){
        return 1;
    }

    if (*lista == NULL){
        return 1;
    }

    return 0;
}

int removerInicioLista(Lista *lista){

    if (eVazia(lista)){
        return 0;
    }

    Elemento *aux = *lista;
    *lista = aux ->proximo;

    if(aux-> proximo !=NULL){
        aux->proximo->anterior = NULL;
    }

    free(aux);
    return 1; // True =  Sucesso, removeu
}

int removerFimLista(Lista *lista){

    if (eVazia(lista)){
        return 0;
    }

    Elemento *aux = *lista;

    // Encontra o ultimo elemento
    while(aux->proximo != NULL){
        aux = aux->proximo;
    }

    // Conferir se o ultimo tambem e o primeiro
    if(aux->anterior == NULL) {
        *lista = aux ->proximo;
    } else {
        aux->anterior->proximo = NULL;
    }

    free(aux);
    return 1; // True =  Sucesso, removeu
}