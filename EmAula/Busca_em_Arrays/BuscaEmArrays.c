#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaSequencial(int v[], int tamanho, int chave);
void preencherVetor(int v[], int n);
void mostrarVetor(int v[], int tamanho);

int main(int argc, char *argv[]) {
    int lista[] = {2,4,6,8,10,99};

    printf("Existe? %d", buscaSequencial(lista, 6, 99));


	return 0;
}

// Busca que percorre iterativamente os elementos do array, e retorna a posicao do elemento em questao
int buscaSequencial(int v[], int tamanho, int chave){
    int i;
    for(i = 0; i < tamanho; i++){
		if(v[i] == chave){
            return i;
        }
	}
    return  -1;

}

void mostrarVetor(int v[], int tamanho){
	int i;
	printf("\nArray: ");
	for(i = 0; i < tamanho; i++){
		printf("%d ", v[i]);	
	}	
}

void preencherVetor(int v[], int n){
	int i;
	for(i = 0; i < n; i++){
		v[i] = rand() % 1000;	
	}
}