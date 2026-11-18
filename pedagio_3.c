#include <stdio.h>
int main (){
	int tipoveiculo, pedagio, eixos;
	
	printf("\n Digite o tipo do seu veiculo (1)Moto (2)Carro (3)veiculo comercial\n");
	scanf("%d", &tipoveiculo);
	
	if(tipoveiculo == 1){
		printf("\nMoto o valor a ser pago sera de 7.75 reais\n");
		
	}
	
	else if(tipoveiculo == 2){
		printf("\nCarro, valor a ser pago do pedagip sera de 15,50 reais\n");
		
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