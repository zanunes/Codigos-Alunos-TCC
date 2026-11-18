#include <stdio.h>
#include <string.h>

int main(void) {
	const double tarifa_base = 15.50;
	char tipo[30];
	int eixos;
	double valor;

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
	return 0;
}