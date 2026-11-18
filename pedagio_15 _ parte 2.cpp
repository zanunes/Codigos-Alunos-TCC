#include <stdio.h>
#include <string.h>
int main (){
	float tarifa_base;
	float vl_pedagio;
	int quantia_eixo;
	float vl_pago_motor;
	float troco;
	char tipo [20];
	
	printf("Informe o tipo do seu veiculo: moto, carro, comercial:");
	scanf("%s", & tipo);
	
	printf("Informe a tarifa_base:");
	scanf("%f", &tarifa_base);
	
	printf("Informe valor pago pelo motorista:");
	scanf("%f", &vl_pago_motor);
	

    if (strcmp(tipo, "moto") == 0) {
        vl_pedagio = tarifa_base * 0.50;
    }
    else if (strcmp(tipo, "carro") == 0) {
        vl_pedagio = tarifa_base - vl_pago_motor;
        
        troco = vl_pago_motor - vl_pedagio;
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
    printf("Troco eh:%f", troco);

    return 0;
}