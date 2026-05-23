#include <stdio.h>
#include <stdlib.h>


struct aplicacao {
    char descricao[50];
    float saldoInicial;
    float valorMensal;
    float taxa;
    int tempo;
    int imposto; //1 sim 0 nao
};

typedef struct aplicacao Aplicacao;

struct rendimento {
    

    int mes;
    float saldoInicial;
    float aplicacaoMensal;
    float rendimento;
    float total;
};

typedef struct rendimento Rendimento;

struct elemento {
    Rendimento dado;
    struct elemento *proximo;
};

typedef struct elemento* Lista;
typedef struct elemento Elemento;

//prototipos
int menu();
Lista* criarLista();
void imprimir(Lista *lista);
int inserirFim(Lista *lista, Rendimento rendimento);
void calcularRendimento(Aplicacao aplicacao, Lista *lista);
float calcularRendimentoLiquido(Lista *lista, int imposto);

int main() {

    int op;
    Aplicacao aplicacao1, aplicacao2;
    
    Lista *investimo1 = criarLista();
    Lista *investimo2 = criarLista();
    int jaCalculado = 0;

    do {
        op = menu();

        switch(op) {
            case 1:
                // se ja existir uma simulacoao anterior zera o início das listas existentes
                if (jaCalculado == 1) {
                    *investimo1 = NULL;
                    *investimo2 = NULL;
                }

                printf("\n .::. Dados da Aplicacao 1  .::.\n");
                printf("Aplicacao: ");
                scanf("%s", aplicacao1.descricao);
                printf("Saldo Inicial: ");
                scanf("%f", &aplicacao1.saldoInicial);
                printf("Aplicacao mensal: ");
                scanf("%f", &aplicacao1.valorMensal);
                printf("Tempo (meses): ");
                scanf("%d", &aplicacao1.tempo);
                printf("Taxa (a.m): ");
                scanf("%f", &aplicacao1.taxa);
                printf("Imposto de Renda? 1 sim  0 nao: ");
                scanf("%d", &aplicacao1.imposto);

                printf("\n .::. Dados da Aplicacao 2  .::.\n");
                printf("Aplicacao: ");
                scanf("%s", aplicacao2.descricao);
                printf("Saldo Inicial: ");
                scanf("%f", &aplicacao2.saldoInicial);
                printf("Aplicacao mensal: ");
                scanf("%f", &aplicacao2.valorMensal);
                printf("Tempo (meses): ");
                scanf("%d", &aplicacao2.tempo);
                printf("Taxa (a.m): ");
                scanf("%f", &aplicacao2.taxa);
                printf("Imposto de Renda? 1 sim  0 nao: ");
                scanf("%d", &aplicacao2.imposto);

                calcularRendimento(aplicacao1, investimo1);   
                calcularRendimento(aplicacao2, investimo2);   
                
                jaCalculado = 1;
                printf("\nSimulacoes geradas com sucesso!\n\n");
                break;

            case 2:

                if (jaCalculado == 1) {
                    printf("\n..............................................");
                    printf("\nS I M U L A C A O   -   A P L I C A C A O   1");
                    printf("\n..............................................");
                    imprimir(investimo1);

                    float lucro1 = calcularRendimentoLiquido(investimo1, aplicacao1.imposto);
                    printf("\nRendimento Liquido (Lucro): %f\n", lucro1);

                    printf("\n..............................................");
                    printf("\nS I M U L A C A O   -   A P L I C A C A O   2");
                    printf("\n..............................................");
                    imprimir(investimo2);

                    float lucro2 = calcularRendimentoLiquido(investimo2, aplicacao2.imposto);
                    printf("\nRendimento Liquido (Lucro): %f\n\n", lucro2);

                } else {
                    printf("\nNenhuma simulacao cadastrada ainda! Escolha a opcao 1 primeiro.\n\n");
                }
                break;

            case 3:
                printf("\nE N C E R R A N D O...\n");
                break;

            default:
                printf("\nOPCAO INVALIDA! Tente novamente...\n");
        }

    } while(op != 3);

    return 0;
}

int menu(){
    int op;
    printf("................................................");
    printf("\n .::. SIMULACAO DE APLICACOES FINANCEIRAS .::.\n");
    printf("................................................");
    printf("\nDigite a opcao desejada: \n\n");
    printf("1. Simular Aplicacoes (Cadastrar 2)\n");
    printf("2. Imprimir Simulacoes\n");
    printf("3. S A I R\n");
    printf("> ");
    scanf("%d" , &op);
    return op;
}

float calcularRendimentoLiquido(Lista *lista, int imposto) {

    float total = 0.0;

    Elemento *aux = *lista;
    int tempo = 0;

    while(aux != NULL) {
        total += aux->dado.rendimento;
        aux = aux->proximo;
        tempo++;
    }

    if(imposto == 1) {
        if(tempo <= 6) {
            total = total * 0.775; //22.5
        } else if (tempo > 6 && tempo <= 12) {
            total = total * 0.8;
        } else {
            total = total * 0.85;
        }
    }

    return total;
}

void calcularRendimento(Aplicacao aplicacao, Lista *lista) {
    int i;
    float saldoAnterior = aplicacao.saldoInicial;

    for(i = 1; i <= aplicacao.tempo; i++) {
        Rendimento r;
        r.mes = i;
        r.saldoInicial = saldoAnterior;
    
        if (i == 1) {
            r.aplicacaoMensal = 0;
        } else {
            r.aplicacaoMensal = aplicacao.valorMensal;
        }
        
        r.rendimento = ((r.saldoInicial + r.aplicacaoMensal) * aplicacao.taxa)/100;
        r.total = r.saldoInicial + r.aplicacaoMensal + r.rendimento;

        saldoAnterior = r.total;
        inserirFim(lista, r);
    }
}

int inserirFim(Lista *lista, Rendimento rendimento) {

    //lista existe
    if(lista == NULL) {
        printf("InserirFim: lista nula");
        return 0; //false = nao deu certo inserir
    }

    Elemento *elemento = (Elemento*) malloc(sizeof(Elemento));

    //foi possivel alocar espaco memoria para novo elemento
    if(elemento == NULL) {
        printf("Inserir Fim: Elemento null");
        return 0; //nao deu certo inserir
    }

    elemento->dado = rendimento;
    elemento->proximo = NULL; //aponta para null pois sera o ultimo da lista

    if((*lista) == NULL) {
        *lista = elemento;
    } else {
        Elemento *aux = *lista;
        while(aux->proximo != NULL) {
            aux = aux->proximo;
        }
        aux->proximo = elemento;
    }
    return 1; //true deu certo
}

//valida se houve memoria o suficiente para alocar
Lista* criarLista() {
    
    Lista *lista = (Lista*) malloc(sizeof(Lista));

    if(lista == NULL) {
        printf("Criar Lista: acabou memoria :( ");
        return NULL; 
    }

    *lista = NULL; 
    return lista;
}

void imprimir(Lista *lista) {

    if(lista == NULL || *lista == NULL) {
        printf("Imprimir: lista nula ou vazia");
        return;
    }

    Elemento *aux = *lista;

    printf("\nAplicacao: ");
    while(aux != NULL) {
        printf("\n%d    %.2f    %.2f    %.2f    %.2f", aux->dado.mes
                                             , aux->dado.saldoInicial
                                             , aux->dado.aplicacaoMensal
                                             , aux->dado.rendimento
                                             , aux->dado.total);
        
        aux = aux->proximo;
    }
    printf("\n");
}