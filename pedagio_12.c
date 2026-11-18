#include <stdio.h>

int main() {
    float tarifaBase = 15.50;
    float valorPedagio;
    int tipo, eixos;
    char nomeVeiculo[30];

    printf("\n");
    printf(" ________________________________________\n");
    printf("|                                        |\n");
    printf("|          SISTEMA DE PEDAGIO            |\n");
    printf("|________________________________________|\n\n");

    printf("Selecione o tipo de veiculo:\n");
    printf("  [1] Moto\n");
    printf("  [2] Carro\n");
    printf("  [3] Veiculo Comercial\n\n");
    printf(">> Opcao: ");
    scanf("%d", &tipo);

    switch (tipo) {
        case 1:
            valorPedagio = tarifaBase * 0.5;
            sprintf(nomeVeiculo, "Moto");
            break;

        case 2:
            valorPedagio = tarifaBase;
            sprintf(nomeVeiculo, "Carro");
            break;

        case 3:
            printf(">> Quantidade de eixos: ");
            scanf("%d", &eixos);
            valorPedagio = tarifaBase * eixos;
            sprintf(nomeVeiculo, "Veiculo Comercial (%d eixos)", eixos);
            break;

        default:
            printf("\n[ERRO] Tipo de veiculo invalido!\n\n");
            return 1;
    }

    printf("\n");
    printf(" ______________________________________\n");
    printf("|                                      |\n");
    printf("|                RECIBO                |\n");
    printf("|______________________________________|\n");
    printf("| Veiculo:%-29s|\n", nomeVeiculo);
    printf("| Tarifa base: R$ %-21.2f|\n", tarifaBase);
    printf("|______________________________________|\n");
    printf("| VALOR A PAGAR: R$ %-19.2f|\n", valorPedagio);
    printf("|______________________________________|\n");

    return 0;
}