#include <stdio.h>
#include <string.h>
int main (){
	float tarifa_base = 15.50;
	float vl_pedagio;
	int quantia_eixo;
	char tipo [20];
	
	printf("Informe o tipo do seu veiculo: moto, carro, comercial:");
	scanf("%s", & tipo);
	

    if (strcmp(tipo, "moto") == 0) {
        vl_pedagio = tarifa_base * 0.50;
    }
    else if (strcmp(tipo, "carro") == 0) {
        vl_pedagio = tarifa_base;
    }
    else if (strcmp(tipo, "comercial") == 0) {
        printf("Informe a quantidade de eixos: ");
        scanf("%d", &quantia_eixo);

        vl_pedagio = tarifa_base * quantia_eixo;
    }
    else {
        printf("Tipo de veiculo invalido!\n");
        return 1;
    }

    printf("Valor do pedagio: R$ %.2f\n", vl_pedagio);

    return 0;
}