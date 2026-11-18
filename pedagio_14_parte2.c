#include <stdio.h>
int main() {
    float tarifa_base;
    float valor, valor_pago, troco;
    int tipo, eixos;

    printf("=== CALCULO DO PEDAGIO ===\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Veiculo comercial\n");
    printf("Escolha o tipo de veiculo: ");
    scanf("%d", &tipo);
    printf("Valor da tarifa atual: ");
    scanf("%f", &tarifa_base);
    printf("Valor pago pelo motorista: ");
	scanf("%f", &valor_pago);

    if (tipo == 1) {
        valor = tarifa_base * 0.50;
        troco = valor_pago - valor;
    }
    else if (tipo == 2) {
        valor = tarifa_base;
        troco = valor_pago - valor;
    }
    else if (tipo == 3) {
        printf("Informe a quantidade de eixos: ");
        scanf("%d", &eixos);

        valor = tarifa_base * eixos;
        troco = valor_pago - valor;
    }
    else {
        printf("Tipo de veiculo invalido!\n");
        return 0;
    }
	printf("\nValor do pedagio: R$ %.2f\n", valor);
	printf("Troco para o motorista eh: %.2f", troco);
    return 0;
}
