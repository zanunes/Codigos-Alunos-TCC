#include<stdio.h>

int main(){
	float tarifa=15.5;
	int veiculo=0, eixos=0;

	
	printf("Informe o seu tipo de veiculo\n\n1 - Moto\n2 - Carro\n3 - Veiculo Comercial ");
	scanf("%d",&veiculo);
	
	if(veiculo==1){
		tarifa=7.25;
	}
	else if(veiculo==2){
	}
	else if(veiculo==3){
		printf("\nInforme o numero de eixos do seu veiculo: ");
		scanf("%d",&eixos);
		tarifa=tarifa*eixos;
	}
	printf("\nO valor que voce deve pagar de pedagio eh de:%.2f",tarifa);
	
	
	
	return 0;
}