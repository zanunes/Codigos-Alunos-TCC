#include <stdio.h>

int main() {
    float tarifaBase = 15.50;
    float tarifaMotorista;
    float trocoTarifa;
    float valorPedagio;
    int tipoVeiculo;
    int eixos;

    printf("=== CALCULO DO PEDAGIO ===\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Veiculo comercial\n");
    printf("Escolha o tipo de veiculo: ");
    scanf("%d", &tipoVeiculo);
    printf("Digite o valor da taria do pedagio: ");
    scanf("%f", &tarifaMotorista);

    if (tipoVeiculo == 1) {
        // Moto paga 50% da tarifa
        valorPedagio = tarifaMotorista * 0.50;

        printf("Valor do pedagio: R$ %.2f\n", valorPedagio);

    } else if (tipoVeiculo == 2) {
        // Carro paga a tarifa base
        valorPedagio = tarifaMotorista;

        printf("Valor do pedagio: R$ %.2f\n", valorPedagio);

    } else if (tipoVeiculo == 3) {
        // Veiculo comercial paga de acordo com os eixos
        printf("Informe a quantidade de eixos: ");
        scanf("%d", &eixos);

        valorPedagio = tarifaMotorista * eixos;

        printf("Valor do pedagio: R$ %.2f\n", valorPedagio);
        
    } else {
        printf("Tipo de veiculo invalido!\n");
    }
	
		trocoTarifa = tarifaMotorista - tarifaBase;
		
		printf("\nA tarifa base tem o valor de R$ 15.50\n");
		printf("o valor do troco sera de: R$ %.2f", trocoTarifa);

    return 0;
}
