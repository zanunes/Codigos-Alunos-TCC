#include <stdio.h>
int main (){
	
	float tarifa = 15.50, novo_valor;
	int tipo, numero_eixos;
	
	printf("informe o tipo do veículo: 1 - carro, 2 - moto, 3 - veículo comercial ");
	scanf("%d",&tipo);
	
	if(tipo == 1){
		novo_valor = tarifa;
		printf("valor do pedágio: R$ %.2f ",novo_valor);
	}
	else if(tipo == 2){
		novo_valor = tarifa / 0.50;
		printf("valor do pedágio: R$ %.2f ",novo_valor);
	}
	else(tipo == 3){
		printf("Informe o numero de eixos: "){
		scanf("%d",&numero_eixos);
		
		novo_valor = tarifa * numero_eixos;
	
		printf("valor pedágio: R$ %.2f ",novo_valor);
		
		}
	}
	
}

return 0;