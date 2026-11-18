#include<stdio.h>
int main(){
	float tarifa=15.50, total=0;
	int veiculo, eixo;
	
	printf("Escolha uma das opoes de veiculos: 1-carro, 2-moto, 3-veiculo comercial.\n");	
	scanf("%d", &veiculo);
	
	if(veiculo==1){
		total=tarifa;
	}
	
	else if(veiculo==2){
		total=tarifa/2;
	}
	
	else if(veiculo==3){
		printf("Digite o numero de eixos:\n");
		scanf(%d,&eixo);
		
		total=(float)tarifa*eixo;	
	}
	else{
		printf("Numero INVALIDO para as opcoes apresentadas.\n");
	}
	
	printf("O veiculos escolhido foi %d e o valor a ser pago eh $ %.2f", total);
	
	return 0;
}