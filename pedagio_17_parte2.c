#include <stdio.h>

int main() {

    int opcao, tipo, eixos;
    float tarifa = 15.90;
    float pedagio, pago, troco;

    do {

        printf("\n--- MENU ---\n");
        printf("1 - Calcular pedagio\n");
        printf("2 - Alterar tarifa\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("\nEscolha o veiculo:\n");
            printf("1 - Moto\n");
            printf("2 - Carro\n");
            printf("3 - Veiculo comercial\n");
            printf("Opcao: ");
            scanf("%d", &tipo);

            if (tipo == 1) {
                pedagio = tarifa * 0.5;
            }
            else if (tipo == 2) {
                pedagio = tarifa;
            }
            else if (tipo == 3) {
                printf("Quantidade de eixos: ");
                scanf("%d", &eixos);

                pedagio = tarifa * eixos;
            }
            else {
                printf("Opcao invalida!\n");
                continue;
            }

            printf("Valor do pedagio: R$ %.2f\n", pedagio);

            printf("Valor pago: R$ ");
            scanf("%f", &pago);

            if (pago >= pedagio) {
                troco = pago - pedagio;
                printf("Troco: R$ %.2f\n", troco);
            }
            else {
                printf("O valor pago nao e suficiente.\n");
            }

        }
        else if (opcao == 2) {

            printf("\nDigite o novo valor da tarifa: R$ ");
            scanf("%f", &tarifa);

            printf("Tarifa alterada para R$ %.2f\n", tarifa);

        }
        else if (opcao == 3) {

            printf("\nEncerrando...\n");

        }
        else {

            printf("\nOpcao invalida!\n");

        }

    } while (opcao != 3);

    return 0;
}