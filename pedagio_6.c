#include<stdio.h>
int main(){
	int codigo,eixo;
	float valor;
	
	for(;;){
		ESCOLHA:
	printf("\nInforme a tarifa base:");
	scanf("%f",&valor);
		
	printf("\nInforme o veiculo:");
	printf("\nCARRO:1\nMOTO:2\nVEICULO COMERCIAL:3\n");
	scanf("%d",&codigo);
	
	if(codigo == 1){
		printf("CARRO - tarifa base R$10 reais");
		goto ESCOLHA;
	}
	if(codigo == 2){

		printf("MOTO - tarifa com acressimo de %%50 R$ %2.f",(valor*100)/50);
		goto ESCOLHA;
	}
	if(codigo == 3)
	printf("\nInfome a quantidade de eixos:");
	scanf("%d",&eixo);
	printf("\nVEICULO COMERCIAL - Valor R$ %f", (eixo*valor) );
		goto ESCOLHA;
	
	}
	return 0;
}