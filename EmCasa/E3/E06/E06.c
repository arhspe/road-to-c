#include <stdio.h>

struct Data {
    int dia, mes, ano;
};

struct Funcionario {
    char nome[50];
    int idade;
    char sexo;
    char cpf[15];
    struct Data nasc;
    int setor;
    char cargo[30];
    float salario;
};

int main() {
    struct Funcionario f;

    printf("Nome: ");
    scanf(" %s", f.nome);

    printf("Idade: ");
    scanf("%d", &f.idade);

    printf("Sexo (M/F): ");
    scanf(" %c", &f.sexo);

    printf("CPF: ");
    scanf("%s", f.cpf);

    printf("Data de Nascimento (dia mes ano): ");
    scanf("%d %d %d", &f.nasc.dia, &f.nasc.mes, &f.nasc.ano);

    printf("Codigo do Setor (0-99): ");
    scanf("%d", &f.setor);

    printf("Cargo: ");
    scanf(" %s", f.cargo);

    printf("Salario: ");
    scanf("%f", &f.salario);

    printf("\nDados do Funcionario\n");
    printf("Nome: %s\nIdade: %d\nSexo: %c\nCPF: %s\n", f.nome, f.idade, f.sexo, f.cpf);
    printf("Nascimento: %02d/%02d/%d\nSetor: %d\nCargo: %s\nSalario: %.2f\n", 
            f.nasc.dia, f.nasc.mes, f.nasc.ano, f.setor, f.cargo, f.salario);

    return 0;
}