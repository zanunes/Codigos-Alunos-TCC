#include<stdio.h>

int main(){
	float tarifa, troco, pago, totalPAGO=0;
	int veiculo, eixo;
	
	printf("Escolha uma das opoes de veiculos: 1-carro, 2-moto, 3-veiculo comercial.\n");	
	scanf("%d", &veiculo);
	
	
	
	if(veiculo==1){
		
		printf("Digite quanto foi dado em dinheiro para o pedagio $:");
		scanf("%.2f",&pago);
		
		printf("Digite o valor da tarifa $");
		scanf("%.2f",&tarifa);
		
	}
	
	else if(veiculo==2){
		printf("Digite quanto foi dado em dinheiro para o pedagio $:");
		scanf("%.2f",&pago);
		
		printf("Digite o valor da tarifa $ \n");
		scanf("%.2f",&tarifa);
		
	}
	
	else if(veiculo==3){
		printf("Digite o numero de eixos:\n");
		scanf("%d",&eixo);
		
		printf("Digite quanto foi dado em dinheiro para o pedagio $:");
		scanf("%.2f",&pago);
		
		
		
		printf("Digite o valor da tarifa $ \n");
		scanf("%.2f",&tarifa);
		
		
	}
	else{
		printf("Numero INVALIDO para as opcoes apresentadas.\n");
	}
	
	printf("O veiculos escolhido foi %d \n", veiculo);
	printf("O valor pago pelo pedagio foi de %f", pago-tarifa);
	
	
	return 0;
}