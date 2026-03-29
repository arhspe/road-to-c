#include <stdio.h>

struct horario {

    int hora;
    int minutos;
    int segundos;

};

struct data {

    int dia;
    int mes;
    int ano;

};

struct compromisso {

    struct data data_agendada;
    struct horario horario_agendado;
    char descricao[100];

};

typedef struct compromisso Compromisso;

int main() {

    Compromisso comp;
    
    return 0;

}