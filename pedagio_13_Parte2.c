#include <stdio.h>
#include<stdlib.h>

int main() {

    float tarifa = 15.00;
    float valor, troco, valorPago;
    int opcao;
    int eixos;
    

    do{
        printf("\n\n============================\n");
        printf("     sistema de pedagio       \n");
        printf("============================\n");
        printf("1 - Calcular pedagio\n");
        printf("2 - Ver tarifa base\n");
        printf("3 - Ver tabela de tarifas\n");
        printf("4 - Alterar o valor base\n");
        printf("0 - Sair\n");
        printf("\n============================\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\n----------------------------\n");
                printf("     TIPO DE VEICULO\n");
                printf("----------------------------\n");
                printf("1 - Moto\n");
                printf("2 - Carro\n");
                printf("3 - Veiculo comercial\n");
                printf("0 - Voltar\n");
                printf("----------------------------\n");
                printf("Digite uma opcao: ");
                scanf("%d", &opcao);

                switch (opcao) {

                    case 1:
                        valor = tarifa * 0.50;
                        printf("\nVeiculo: Moto\n");
                        printf("Valor do pedagio: R$ %.2f\n", valor);
                        
						printf("Valor pago pelo motorista:");
                        scanf("%f", &valorPago);
                        troco = valorPago - valor;
                        printf("troco: %.2f", troco);
                        break;

                    case 2:
                        valor = tarifa;
                        printf("\nVeiculo: Carro\n");
                        printf("Valor do pedagio: R$ %.2f\n", valor);
                        
						printf("Valor pago pelo motorista:");
                        scanf("%f", &valorPago);
                        troco = valorPago - valor;
                        printf("troco: %.2f", troco);
                        break;

                    case 3:
                        printf("\nDigite a quantidade de eixos: ");
                        scanf("%d", &eixos);
                        if (eixos <= 0){
                            printf("Quantidade de eixos invalida!\n");
                    		} 
						else{
                            valor = tarifa * eixos;
                            printf("\nVeiculo: Comercial\n");
                            printf("Quantidade de eixos: %d\n", eixos);
                            printf("Valor do pedagio: R$ %.2f\n", valor);
                        	}
                        	
                        printf("Valor pago pelo motorista:");
                        scanf("%f", &valorPago);
                        troco = valorPago - valor;
                        printf("troco: %.2f", troco);
                        break;

					case 4:
						printf("\nDigite o valor a ser alterado\n");
						scanf("%f", &tarifa);
							printf("Valor base alterado para %.2f", tarifa);
						break;
                    case 0:
                        printf("\nVoltando ao menu principal...\n");
                        break;

                    default:
                        printf("\nOpcao invalida!\n");
                }

                break;

            case 2:
                printf("\n|-----------------------------|\n");
                printf("|        TARIFA BASE          |\n");
                printf("|-----------------------------|\n");
                printf("TARIFA BASE: R$ %.2f\n", tarifa);
                break;

            case 3:
                printf("\n|----------------------------|\n");
                printf("|      TABELA DE TARIFAS|\n");
                printf("|---------------------------- |\n");
                printf("Moto   = 50%% da tarifa\n");
                printf("Carro   = tarifa base\n");
                printf("Veiculo comercial   = tarifa x numero de eixos\n");
                printf("----------------------------\n");
                break;
                
            	case 4:
					printf("\nDigite o valor a ser alterado\n");
					scanf("%f", &tarifa);
					printf("Valor base alterado para %.2f", tarifa);
					break;

            case 0:
                printf("\nEncerrando o sistema...\n");
                printf("Obrigado por utilizar o pedagio!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    }while(opcao != 0);

    return 0;
}

