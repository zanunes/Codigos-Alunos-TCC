#include<stdio.h>
int main (){
	
	float tarifa, novo_valor, nova_tarifa, troco, valor_motorista;
	int tipo, numero_eixos, menu,alteracao;
	
	printf("informe o tipo do veículo: 1 - carro, 2 - moto, 3 - veículo comercial ");
	scanf("%d",&tipo);
	
	if(tipo == 1){	
			printf("deseja alterar o valor da tarifa: 1 - sim , 2 - nao ");
			if(alteracao == '1'){
				nova_tarifa = tarifa;
			}	
		else{		
		novo_valor = tarifa;
		printf("valor do pedágio: R$ %.2f ",novo_valor);
	}
	}
	else if(tipo == 2){
			printf("deseja alterar o valor da tarifa: 1 - sim , 2 - nao ");
			if(alteracao == '1'){
				nova_tarifa = tarifa;
			}	
		else{
		novo_valor = tarifa / 0.50;
		printf("valor do pedágio: R$ %.2f ",novo_valor);
	}
	}
	else if(tipo == 3){
			printf("deseja alterar o valor da tarifa: 1 - sim , 2 - nao ");
			if(alteracao == '1'){
				nova_tarifa = tarifa;
			}
		else{
		printf("deseja alterar o valor da tarifa: 1 - sim , 2 - nao ");
			if(alteracao == '1'){
				nova_tarifa = tarifa;
			}
		else{
		
		printf("Informe o numero de eixos: ");{
		scanf("%d",&numero_eixos);
}
}
		novo_valor = tarifa * numero_eixos;
	
		printf("valor pedágio: R$ %.2f ",novo_valor);
		
		}
	}
	printf("Informe o valor pago pelo motorista: %.2f\n ",valor_motorista);
	printf("troco: %.2f / %.2f = %.2f ", valor_motorista / tarifa == troco);

} return 0;