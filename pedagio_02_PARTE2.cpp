#include<stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	float tarifa=15.5, ntarifa=0, vp=0;
	int veiculo=0, eixos=0, i=0, op=0;

	do{
		printf("\n\nMENU\n\n1.Calcular Tarifa\n2.Alterar valor da tarifa base\n3.encerrar programa");
		scanf("%d",&op);
		
		switch(op){
		
		
		case 1:
			printf("Informe o seu tipo de veiculo\n\n1 - Moto\n2 - Carro\n3 - Veiculo Comercial ");
			scanf("%d",&veiculo);
		
			if(veiculo==1){
				tarifa=tarifa*0.5;
			}
			else if(veiculo==2){
				tarifa=tarifa;
			}
			else if(veiculo==3){
				printf("\n\nInforme o numero de eixos do seu veiculo: ");
				scanf("%d",&eixos);
				tarifa=tarifa*eixos;
			}
			else{
				printf("Valor inválido, tente novamente");
			}
			printf("\nO valor a ser pago de pedagio eh de:%.2f",tarifa);
			printf("\nDigite o valor recebido: ");
			scanf("%f",&vp);
			printf("O troco deve ser %.2f Reais",vp-tarifa);
			break;
			
		case 2:
			printf("\n\nQual o novo valor da Tarifa: ");
			scanf("%f",&ntarifa);
			tarifa=ntarifa;
			break;
	
		case 3:
			i++;
			break;
		}
	}while(i<1);
	
	return 0;
}