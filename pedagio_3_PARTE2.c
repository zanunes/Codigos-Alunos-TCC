#include <stdio.h>

int main (){
	int tipoveiculo, eixos, opcao;
	float  pedagio, pedagiobase =15.50,pedagioalterado, valorpago;
	
	printf("\n Digite o tipo do seu veiculo (1)Moto (2)Carro (3)veiculo comercial\n");
	scanf("%d", &tipoveiculo);
	
	printf("\n Digite o tipo (1)base (2)valor base diferente\n");
	scanf("%d", &opcao);
	
		if(opcao==2){
			
			printf("\n Digite o valor da tarifa desse pedagio\n");
			scanf("%f", &valorpago);
			
			printf("\n Digite o quanto voce tem para pagar\n");
			scanf("%f", &pedagioalterado);
				if(valorpago < 15.50 && tipoveiculo==1){
					pedagioalterado = valorpago-pedagioalterado;
					printf("Valor a ser pago pelo pedagio da moto sera de: %",pedagioalterado);
	}
						if(valorpago < 15.50 && tipoveiculo==2){
					pedagioalterado = valorpago-pedagioalterado;
					printf("Valor a ser pago pelo pedagio do carro sera de: %",pedagioalterado);
	}
	
	
	if(valorpago < 15.50 && tipoveiculo==3){
					pedagioalterado = valorpago-pedagioalterado;
					pedagio = pedagioalterado * eixos;
					printf("Valor a ser pago pelo pedagio do veiculo comercial sera de: %",pedagioalterado);
	}
	
		
			}
	
	if(tipoveiculo == 1){
		printf("\nMoto o valor a ser pago sera de 7,75 reais\n");	
	}
	
	else if(tipoveiculo == 2){
		printf("\nCarro, valor a ser pago do pedagio sera de 15,50 reais\n");
		
	}
	
	else if(tipoveiculo == 3){
		
		printf("\nVeiculo Comercial\n");
		printf("\nDigite quantos eixos tem seu carro\n");
		scanf("%d", &eixos);
		pedagio = 15.50 * eixos;
		
		printf("\nValor do pedagio do seu veiculo comercial sera de %d reais \n", pedagio);
		
		
	}
	  
	return 0;
	
}