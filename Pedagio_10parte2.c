#include <stdio.h>
#include <string.h>

int main(void) {
	double tarifa_base;
	char tipo[30];
	int eixos;
	double valor;
	double valor_pago;
	double troco;

	printf("Informe o valor base do pedagio: R$ ");
	if (scanf("%lf", &tarifa_base) != 1 || tarifa_base <= 0) {
		printf("Valor da tarifa invalido.\n");
		return 1;
	}

	printf("Informe o tipo de veiculo (carro, moto ou comercial): ");
	scanf("%29s", tipo);


	if (strcmp(tipo, "moto") == 0) {
		valor = tarifa_base * 0.50;
	} else if (strcmp(tipo, "carro") == 0) {
		valor = tarifa_base;
	} else if (strcmp(tipo, "comercial") == 0) {
		printf("Informe a quantidade de eixos: ");
		if (scanf("%d", &eixos) != 1 || eixos <= 0) {
			printf("Quantidade de eixos invalida.\n");
			return 1;
		}
		valor = tarifa_base * eixos;
	} else {
		printf("Tipo de veiculo invalido.\n");
		return 1;
	}


	printf("Valor do pedagio: R$ %.2f\n", valor);
	printf("Informe o valor pago: R$ ");
	if (scanf("%lf", &valor_pago) != 1 || valor_pago < valor) {
		printf("Valor pago insuficiente ou invalido.\n");
		return 1;
	}

	troco = valor_pago - valor;
	printf("Troco: R$ %.2f\n", troco);
	return 0;
}



