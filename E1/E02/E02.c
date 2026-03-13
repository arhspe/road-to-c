#include <stdio.h>

int main() {

    int i;

    printf("Os 5 primeiros multiplos de 3 sao:\n");

    for(i = 1; i <= 5; i++) {
        printf("%d ", i * 3);
    }

    return 0;
}