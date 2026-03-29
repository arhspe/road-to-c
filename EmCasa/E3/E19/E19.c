#include <stdio.h>

struct Conta {
    int numero;
    char titular[50];
    float saldo;
};

struct Conta depositar(struct Conta conta, float valor) {
    conta.saldo = conta.saldo + valor;
    return conta;
}

struct Conta sacar(struct Conta conta, float valor) {
    if (conta.saldo >= valor) {
        conta.saldo = conta.saldo - valor;
    } else {
        printf("Saldo insuficiente!\n");
    }
    return conta;
}

void exibirConta(struct Conta conta) {
    printf("\nNumero: %d\n", conta.numero);
    printf("Titular: %s\n", conta.titular);
    printf("Saldo: %.2f\n", conta.saldo);
}

int main() {
    struct Conta conta;

    printf("Numero: ");
    scanf("%d", &conta.numero);

    printf("Titular: ");
    scanf(" %s", &conta.titular);

    printf("Saldo inicial: ");
    scanf("%f", &conta.saldo);

    exibirConta(conta);

    conta = depositar(conta, 100);
    exibirConta(conta);

    conta = sacar(conta, 50);
    exibirConta(conta);

    return 0;
}