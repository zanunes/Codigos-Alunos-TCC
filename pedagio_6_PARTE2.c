#include<stdio.h>
int main(){
	int codigo,eixo;
	float valor,troco,recebido;
	
	for(;;){
		ESCOLHA:
	printf("\nInforme a tarifa base:");
	scanf("%f",&valor);
	
	printf("\nInforme o valor recebido:");
	scanf("%f",&recebido);
	
	printf("\nInforme o veiculo:");
	printf("\nCARRO:1\nMOTO:2\nVEICULO COMERCIAL:3\n");
	scanf("%d",&codigo);
	
	if(codigo == 1){
		printf("CARRO - tarifa base R$10 reais \n");
		printf("Trouco: R$%2.f", recebido-valor);
		goto ESCOLHA;
	}
	if(codigo == 2){
		valor = valor/100*50;
		printf("MOTO - tarifa com acressimo de %%50 R$ %2.f \n",valor);
		printf("Trouco: R$%2.f",recebido-valor);
		goto ESCOLHA;
	}
	if(codigo == 3)
	printf("\nInfome a quantidade de eixos:");
	scanf("%d",&eixo);
	
	valor = eixo*valor;
	printf("\nVEICULO COMERCIAL - Valor R$ %f \n",valor);
	printf("Trouco: R$%2.f",recebido-valor);
		goto ESCOLHA;
	
	}
	return 0;
}