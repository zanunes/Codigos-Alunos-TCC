#include <stdio.h>

int main() {
    float tarifa_base = 15.50;
    float valor_total = 0.0;
    int tipo_veiculo;
    int eixos;

    // Exibição do menu para o usuário
    printf("=== Calculadora de Pedagio ===\n");
    printf("Escolha o tipo de veiculo:\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Veiculo Comercial\n");
    printf("Digite o numero correspondente: ");
    scanf("%d", &tipo_veiculo);

    // Processamento conforme o tipo de veículo escolhido
    switch (tipo_veiculo) {
        case 1: // Moto
            valor_total = tarifa_base * 0.5;
            break;
            
        case 2: // Carro
            valor_total = tarifa_base;
            break;
            
        case 3: // Veículo Comercial
            printf("Informe a quantidade de eixos: ");
            scanf("%d", &eixos);
            
            if (eixos > 0) {
                valor_total = tarifa_base * eixos;
            } else {
                printf("Quantidade de eixos invalida!\n");
                return 1; // Encerra o programa com erro
            }
            break;
            
        default:
            printf("Opcao de veiculo invalida!\n");
            return 1; // Encerra o programa com erro
    }

    // Exibição do resultado final formatado com 2 casas decimais
    printf("\nO valor a cobrar pelo pedagio e: R$ %.2f\n", valor_total);

    return 0;
}