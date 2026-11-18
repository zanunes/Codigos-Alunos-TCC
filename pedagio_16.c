#include <stdio.h>

int main() {
    float valor_base = 15.00;
    float moto, vc, carro;
    int eixo = 0;
    char veiculo;
    
    
    carro = valor_base;
    moto = valor_base * 0.50; 
    
    printf("******************************\n");
    printf("          PEDAGIO        \n");
    printf("******************************\n");
    
    printf("Informe o veiculo (M - Moto, C - Carro, V - Comercial): ");
    scanf(" %c", &veiculo);
    
    if (veiculo == 'v' || veiculo == 'V') {
        printf("Informe a quantia de eixos que o veiculo possui: ");
        scanf("%d", &eixo);
    }
    
    
    vc = valor_base * eixo;
    
    
    if (veiculo == 'm' || veiculo == 'M') {
        printf("Valor a pagar: \033[32m R$ %.2f \033[m\n", moto);
    } else if (veiculo == 'c' || veiculo == 'C') {
        printf("Valor a pagar: \033[32m R$ %.2f \033[m\n", carro);
    } else if (veiculo == 'v' || veiculo == 'V') {
        printf("Valor a pagar: \033[32m R$ %.2f\033[m\n", vc);
    } else {
        printf("Tipo de veiculo invalido.\n");
    }
    
    return 0;
}