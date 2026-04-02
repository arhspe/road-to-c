#include <stdio.h>

int main() {

    int c = 10;
    int *p = NULL;

//Atribuir o endereco de C para P
    
p = & c;

printf("\nValor de C: %d", c);
printf("\nValor do ponteiro P: %d", *p); // Conteudo da Posicao de memoria apontado por p
printf("\nValor do P: %p", p); // Endereco de memoria onde esta armazenado o valor de c

c = 20;

printf("\nValor de C: %d", c);
printf("\nValor do ponteiro P: %d", *p); 

*p = 30;
printf("\nValor do ponteiro P: %d", *p); 
printf("\nValor de C: %d", c);

    return 0;
}