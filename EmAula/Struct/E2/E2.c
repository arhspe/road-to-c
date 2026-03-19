#include <stdio.h>


// Crie um struct que represente um aluno, solicite ao usuario informar o nome, a p1 e a p2,e calcular a media
// A media devera ser armazenada no struct

//Definicao do tipo;
struct aluno
{
    char nome[50];
    float p1;
    float p2;
    float media;
};

int main() {

    // Declara-se a variavel dados do tipo STRUCT ALUNO;
    struct aluno dados;

    printf("Ola, escreva seu nome: ");
    scanf("%s" , &dados.nome);

    printf("Escreva sua primeira nota: ");
    scanf("%f" , &dados.p1);

    printf("Escreva sua segunda nota: ");
    scanf("%f" , &dados.p2);
    
    dados.media = (dados.p1 + dados.p2)/2;

    printf("\nNome: %s", dados.nome);
    printf("\nP1: %f", dados.p1);
    printf("\nP2: %f", dados.p2);
    printf("\nMedia: %f", dados.media);

    return 0;
}