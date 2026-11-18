#include <stdio.h>

int main() {
    float tarifaBase = 15.50;
    float valorPedagio;
    int tipoVeiculo;
    int eixos;

    printf("=== CALCULO DO PEDAGIO ===\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Veiculo comercial\n");
    printf("Escolha o tipo de veiculo: ");
    scanf("%d", &tipoVeiculo);

    if (tipoVeiculo == 1) {
        // Moto paga 50% da tarifa
        valorPedagio = tarifaBase * 0.50;

        printf("Valor do pedagio: R$ %.2f\n", valorPedagio);

    } else if (tipoVeiculo == 2) {
        // Carro paga a tarifa base
        valorPedagio = tarifaBase;

        printf("Valor do pedagio: R$ %.2f\n", valorPedagio);

    } else if (tipoVeiculo == 3) {
        // Veiculo comercial paga de acordo com os eixos
        printf("Informe a quantidade de eixos: ");
        scanf("%d", &eixos);

        valorPedagio = tarifaBase * eixos;

        printf("Valor do pedagio: R$ %.2f\n", valorPedagio);

    } else {
        printf("Tipo de veiculo invalido!\n");
    }

    return 0;
}
