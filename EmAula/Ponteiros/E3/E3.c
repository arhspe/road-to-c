#include <stdio.h>

int main() {

    int *p;
    int c = 10;

    p = &c;

    (*p)++;
    *p = (*p) * 10;

    printf("Valor : %d", *p);

    return 0;
}

