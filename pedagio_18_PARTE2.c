#include <stdio.h>

int main() {
    float tarifa_base = 15.50; // Tarifa base inicial
    float valor_total = 0.0;
    float valor_pago = 0.0;
    float troco = 0.0;
    int opcao_menu = 0;
    int tipo_veiculo;
    int eixos;

    // Loop do menu principal para manter o programa rodando até o usuário decidir sair
    while (opcao_menu != 3) {
        printf("\n========================================\n");
        printf("         SISTEMA DE PEDAGIO             \n");
        printf("========================================\n");
        printf("Tarifa Base Atual: R$ %.2f\n", tarifa_base);
        printf("----------------------------------------\n");
        printf("1 - Calcular Pedagio e Troco\n");
        printf("2 - Alterar o valor da Tarifa Base\n");
        printf("3 - Sair do Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao_menu);

        switch (opcao_menu) {
            case 1: // Calcular Pedágio
                printf("\n--- Calculadora de Pedagio ---\n");
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
                            continue; // Volta para o início do menu
                        }
                        break;
                        
                    default:
                        printf("Opcao de veiculo invalida!\n");
                        continue; // Volta para o início do menu
                }

                // Exibição do valor do pedágio
                printf("\nO valor a cobrar pelo pedagio e: R$ %.2f\n", valor_total);

                // Solicita o valor pago e calcula o troco
                printf("Informe o valor pago pelo motorista (R$): ");
                scanf("%f", &valor_pago);

                if (valor_pago >= valor_total) {
                    troco = valor_pago - valor_total;
                    printf("Troco a devolver: R$ %.2f\n", troco);
                } else {
                    printf("Valor insuficiente! Faltam R$ %.2f\n", valor_total - valor_pago);
                }
                break;

            case 2: // Alterar Tarifa Base
                printf("\n--- Alterar Tarifa Base ---\n");
                printf("Tarifa atual: R$ %.2f\n", tarifa_base);
                printf("Digite o novo valor para a tarifa base (R$): ");
                scanf("%f", &tarifa_base);
                
                if (tarifa_base > 0) {
                    printf("Tarifa base alterada com sucesso para R$ %.2f!\n", tarifa_base);
                } else {
                    printf("Valor invalido! A tarifa deve ser maior que zero.\n");
                    tarifa_base = 15.50; // Restaura o valor padrão caso digitem algo inválido
                }
                break;

            case 3: // Sair
                printf("\nPrograma Encerrado. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida no menu! Tente novamente.\n");
        }
    }

    return 0;
}