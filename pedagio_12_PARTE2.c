 #include <stdio.h>

typedef struct {
    char nome[30];
    int eixos;
    float valor;
} Veiculo;

int main() {
    float tarifaBase = 15.50;
    int opcao, tipo;
    Veiculo veiculo;

    do {
        printf(" ________________________________________\n");
        printf("|                                        |\n");
        printf("|          SISTEMA DE PEDAGIO            |\n");
        printf("|________________________________________|\n\n");
        printf("  [1] Calcular pedagio\n");
        printf("  [2] Alterar tarifa base\n");
        printf("  [3] Sair\n\n");
        printf(">> Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                veiculo.eixos = 0;

                printf("\nSelecione o tipo de veiculo:\n");
                printf("  [1] Moto\n");
                printf("  [2] Carro\n");
                printf("  [3] Veiculo Comercial\n\n");
                printf(">> Opcao: ");
                scanf("%d", &tipo);

                if (tipo == 1) {
                    veiculo.valor = tarifaBase * 0.5;
                    sprintf(veiculo.nome, "Moto");
                } else if (tipo == 2) {
                    veiculo.valor = tarifaBase;
                    sprintf(veiculo.nome, "Carro");
                } else if (tipo == 3) {
                    printf(">> Quantidade de eixos: ");
                    scanf("%d", &veiculo.eixos);
                    veiculo.valor = tarifaBase * veiculo.eixos;
                    sprintf(veiculo.nome, "Veiculo Comercial (%d eixos)", veiculo.eixos);
                } else {
                    printf("\n[ERRO] Tipo de veiculo invalido!\n\n");
                    break;
                }

                printf("\n ______________________________________\n");
                printf("|                                      |\n");
                printf("|                RECIBO                |\n");
                printf("|______________________________________|\n");
                printf("| Veiculo:%-29s|\n", veiculo.nome);
                printf("| Tarifa base: R$ %-21.2f|\n", tarifaBase);
                printf("|______________________________________|\n");
                printf("| VALOR A PAGAR: R$ %-19.2f|\n", veiculo.valor);
                printf("|______________________________________|\n\n");

                float valorPago, troco;
                printf(">> Informe o valor pago pelo motorista: R$ ");
                scanf("%f", &valorPago);

                if (valorPago < veiculo.valor) {
                    printf("\n[ERRO] Valor pago insuficiente! Faltam R$ %.2f\n\n", veiculo.valor - valorPago);
                } else {
                    troco = valorPago - veiculo.valor;
                    printf("\n ______________________________________\n");
                    printf("|                                      |\n");
                    printf("|            TROCO A DEVOLVER          |\n");
                    printf("|______________________________________|\n");
                    printf("| Valor pago:    R$ %-19.2f|\n", valorPago);
                    printf("| Valor devido:  R$ %-19.2f|\n", veiculo.valor);
                    printf("| TROCO:         R$ %-19.2f|\n", troco);
                    printf("|______________________________________|\n\n");
                }
                break;

            case 2:
                printf("\nTarifa base atual: R$ %.2f\n", tarifaBase);
                printf(">> Informe a nova tarifa base: R$ ");
                scanf("%f", &tarifaBase);
                printf("Tarifa base atualizada para R$ %.2f\n\n", tarifaBase);
                break;

            case 3:
                printf("\nEncerrando o sistema...\n\n");
                break;

            default:
                printf("\n[ERRO] Opcao invalida!\n\n");
        }

    } while (opcao != 3);

    return 0;
}