#include <stdio.h>

int main() {

    int codigos[10];
    int quantidades[10];
    float valoresUnit[10];
    float totalItem[10];
    int i;
    int qtdTotal = 0;
    float valorTotal = 0;
    float somaValoresUnit = 0;
    float somaTotalItem = 0;
    int codigoConsulta;

    // leitura das 10 entradas
    for(i = 0; i < 10; i++){
        printf("Digite o codigo do produto %d: ", i+1);
        scanf("%d", &codigos[i]);

        printf("Digite o valor unitario do produto %d: ", i+1);
        scanf("%f", &valoresUnit[i]);

        printf("Digite a quantidade vendida do produto %d: ", i+1);
        scanf("%d", &quantidades[i]);

        totalItem[i] = valoresUnit[i] * quantidades[i];
    }

    // a. exibicao da listagem de produtos com colunas alinhadas
    printf("\n%-6s %-10s %-5s %-10s\n", "CODIGO", "V.UNIT", "QTD", "TOTAL ITEM");
    for(i = 0; i < 10; i++){
        printf("%-6d %-10.2f %-5d %-10.2f\n", codigos[i], valoresUnit[i], quantidades[i], totalItem[i]);
    }

    // b. calculos
    for(i = 0; i < 10; i++){
        qtdTotal += quantidades[i];
        valorTotal += totalItem[i];
        somaValoresUnit += valoresUnit[i];
        somaTotalItem += totalItem[i];
    }

    printf("\nQuantidade total de itens vendidos: %d\n", qtdTotal);
    printf("Valor total vendido: %.2f\n", valorTotal);
    printf("Quantidade media de itens por venda: %.2f\n", qtdTotal / 10.0);
    printf("Valor unitario medio: %.2f\n", somaValoresUnit / 10.0);
    printf("Media do valor total por item: %.2f\n", somaTotalItem / 10.0);

    // c. consulta por codigo
    printf("\nDigite um codigo para consulta: ");
    scanf("%d", &codigoConsulta);

    for(i = 0; i < 10; i++){
        if(codigos[i] == codigoConsulta){
            printf("\nInformacoes do produto:\n");
            printf("Codigo      : %d\n", codigos[i]);
            printf("Valor unitario: %.2f\n", valoresUnit[i]);
            printf("Quantidade  : %d\n", quantidades[i]);
            printf("Total item  : %.2f\n", totalItem[i]);
            break;
        }
    }

    return 0;
}