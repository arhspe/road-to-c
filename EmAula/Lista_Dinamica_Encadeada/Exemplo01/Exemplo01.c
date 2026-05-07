/*
LISTA DINAMICA ENCADEADA 
- Nao e posicional 
_ Precisamos salvar inicio e fim 

Elemento(no/node)

+----------+
|<Dado> |  |
+----------+
         └── Sucessor/Proximo 
*/
#include <stdlib.h>
#include <stdio.h>

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct aluno Aluno;

struct elemento {

    Aluno dado;
    struct elemento *proximo;
};

// "Lista" e um ponteiro do tipo struct elemento
typedef struct elemento* Lista;
typedef struct elemento Elemento;

Lista* criarLista (){ 

    Lista *lista = (Lista*) malloc(sizeof(Lista));
// Valida se houve memoria o suficiente
    if(lista == NULL) {
        printf("CRIAR LISTA: Acabou a memoria :(");
        return NULL; // Encerra execucao 
    }
/*
Lista, ponteiro para ponteiro que apontara para o primeiro elemento da lista, recebe NULL pois nesse momento a lista ainda esta vazia
*/
    *lista = NULL; // LISTA VAZIA
    return lista;
}

int inserirInicioLista(Lista *lista, Aluno novoAluno) {
    
    // Verifica se a lista ja existe
    if (lista == NULL) {
        return 0; // False
    }

    Elemento *novoElemento = (Elemento*) malloc(sizeof(Elemento));

    if(novoElemento == NULL) {
        return 0; // False
    }

    novoElemento ->dado = novoAluno;
    novoElemento ->proximo = (*lista);
    *lista = novoElemento;

    return 1; // True deu certo

}

int imprimirLista (Lista *lista) { 

    if(lista == NULL) {
        printf ("Lista nula");
        return 0;
    }

    Elemento *elemento = *lista;
    printf("\n * * * * *  LISTA  DE  ALUNOS * * * * *\n");
    while(elemento != NULL) {

        printf ("\n Matricula: %d", elemento ->dado.matricula);
        printf ("\n Nome: %s", elemento ->dado.nome);
        printf ("\n - - - - - - - - - - - - - - -");
        printf ("\n Nota 01: %.2f", elemento ->dado.n1);
        printf ("\n Nota 02: %.2f", elemento ->dado.n2);
        printf ("\n Nota 03: %.2f", elemento ->dado.n3);

        printf("\n\n");

        elemento = elemento ->proximo;
        
    }

    return 1;
}

int inserirFImLista(Lista* lista, Aluno novoAluno){
    if (lista == NULL) {

        printf("LISTA NULA");
         return 0;

    }
   
    Elemento *elemento;
    elemento = (Elemento*) malloc (sizeof(Elemento));
    if(elemento == NULL)
    return 0;
    elemento -> dado = novoAluno;
    elemento -> proximo = NULL;
    if (*lista == NULL){
        *lista = elemento;
    } else {
        Elemento *aux = *lista;

        while (aux->proximo != NULL){
            aux = aux ->proximo;
        }
        aux->proximo = elemento;

    }
    
return 1;
 

}

void liberaLista(Lista* lista){

    if (lista != NULL){

        Elemento* elemento;
        while((*lista) != NULL){
            elemento = *lista;
            *lista = (*lista) ->proximo;
            free(elemento); // memoria tem que ser "limpada" por  meio do free
        }

        free(lista);
        *lista = NULL;
    }
}

int tamanhoLista(Lista *lista){

    if(lista == NULL){
        return 0;
    }

    int cont = 0;

    Elemento *elemento = *lista;

    while(elemento != NULL){

        cont++;

        elemento = elemento->proximo;

    }

    return cont;

}

int eListaVazia(Lista *lista){

    if (lista == NULL){
        return 1;
    }

    if (*lista == NULL){
        return 1;
    }

    return 0;
}

int removerInicioLista(Lista* lista){

    if (eListaVazia(lista)){
        return 0;
    }

    Elemento *atual = *lista;
    *lista = atual ->proximo;
    free(atual);
    return 1;
}

int removerFimLista(Lista *lista){

    if(eListaVazia(lista)) {
        return 0;
    }

    Elemento *ultimoElemento = *lista;
    Elemento *penultimoElemento;

    while(ultimoElemento ->proximo != NULL){
        penultimoElemento = ultimoElemento;
        ultimoElemento = ultimoElemento ->proximo;
    }

    if(ultimoElemento == (*lista)) {
        *lista = ultimoElemento ->proximo;
    } else {
        penultimoElemento ->proximo = ultimoElemento ->proximo;
    }

    free(ultimoElemento);

    return 1;
}

int removerListaMatricula(Lista* lista, int codigoMatricula){
    
    if(eListaVazia(lista)) {
        return 0;
    }

    Elemento *anterior, *atual = *lista;
    while(atual != NULL && atual ->dado.matricula != codigoMatricula){
        anterior = atual;
        atual = atual ->proximo;
    }

    if(atual == NULL)
    return 0;

    if(atual == *lista)
    *lista = atual ->proximo;
    else
    anterior -> proximo = atual ->proximo;
    free (atual);
    return 1;

} 

int inserirListaOrdenada(Lista* lista, Aluno aluno){
    if(lista = NULL) {
    return 0; 
}

    Elemento *elemento =(Elemento*) malloc (sizeof(elemento));

    if (elemento == NULL) {
    return 0;

    elemento -> proximo = NULL;
    *lista = elemento;
    return 1; 

} else {
    Elemento *anterior, *atual = *lista;
    while (atual != NULL && atual  ->dado.matricula < aluno.matricula){
        anterior = atual;
        atual = atual ->proximo;
    }

    if (atual == *lista){
        elemento ->proximo = (*lista);
        *lista = elemento;
    } else {
        elemento -> proximo = atual;
        anterior ->proximo = elemento;
    }
    
    return 1;

}


}

int main (){

    Aluno aluno01 = {111, "Jaqueline", 5.5, 7.7, 9.0};
    Aluno aluno02 = {222, "Luiz", 10.0, 9.5, 9.0};
    Aluno aluno03 = {333, "Franciele", 8.0, 9.5, 9.0};
    Aluno aluno04 = {444, "Arthur", 5.5, 6.5, 3.0};


    Lista *listaAlunos = criarLista();

    inserirInicioLista(listaAlunos, aluno01);
    inserirInicioLista(listaAlunos, aluno02);
    inserirInicioLista(listaAlunos, aluno03);

    inserirFImLista(listaAlunos, aluno04);

    imprimirLista(listaAlunos);

    int x = tamanhoLista(listaAlunos);
    printf("Tamanho da lista: %d", x);

    removerListaMatricula(listaAlunos, 222);

    return 0;
}