#include <stdio.h>

int main() {

    int *p, *p1, x, y;

    p = &x;
    p1 = &y;

    y = 10;
    x = 10;

    if (p == p1){
        printf("Sao igualzinhos :)");
    } else {
        printf("Sao diferentinhos :(");
    }

    return 0;
}

