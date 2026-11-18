#include <stdio.h>

int main() {
    float valor_base, valor_pago;
    float moto, vc, carro; // vc = Veiculo Comercial
    int eixo = 0;
    char veiculo;
    
    
    carro = valor_base;
    moto = valor_base * 0.50; 
    
    printf("******************************\n");
    printf("          PEDAGIO        \n");
    printf("******************************\n");
    
	// Entrada
    printf("Informe o veiculo (M - Moto, C - Carro, V - Comercial): ");
    	scanf(" %c", &veiculo);
    printf("Informe o valor BASE que deve ser cobrado R$");
    	scanf("%f",&valor_base);
    printf("Qual valor pago R$");
    	scanf("%f", &valor_pago);
    	
    if (veiculo == 'v' || veiculo == 'V') {
        printf("Informe a quantia de eixos que o veiculo possui: ");
        scanf("%d", &eixo);    
    }
    
    
    vc = valor_base * eixo;
    
    
    // Verificando Valor pago suficiente	
    if( valor_pago < valor_base){
   		printf("Valor Faltando R$%.2f\n", valor_base - valor_pago);
	} else { // saída
    if (veiculo == 'm' || veiculo == 'M') {
       	printf("Troco R$ %.2f", valor_pago - valor_base);
    } else if (veiculo == 'c' || veiculo == 'C') {
        printf("Troco R$ %.2f", valor_pago - valor_base);
    } else if (veiculo == 'v' || veiculo == 'V') {
        printf("Troco R$ %.2f", valor_pago - valor_base);
    } else {
        printf("Tipo de veiculo invalido.\n");
    }
	}
    return 0;
}