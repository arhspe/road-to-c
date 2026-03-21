#include <stdio.h>

int main() {
    int A[5] = {3, 18, 51, 2, 45};
    int maior = A[0];
    for (int i = 1; i < 5; i++) {
        if (A[i] > maior) {
            maior = A[i];
        }
    }

    return 0;
}