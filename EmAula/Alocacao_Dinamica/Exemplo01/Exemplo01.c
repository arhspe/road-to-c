#include <stdio.h>

struct ponto {

    int x,y;

};

int main (){

    printf("char: %d\n", sizeof(char));
    printf("int: %d\n", sizeof(int));
    printf("float: %d\n", sizeof(float));
    printf("ponto: %d\n", sizeof(struct ponto));

    return 0;
}