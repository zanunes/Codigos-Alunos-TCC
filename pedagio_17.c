#include <stdio.h>

int main() {
    int tipo, eixos;
    float valor, tarifa = 15.9;

    printf("Digite o tipo de veiculo:\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Veiculo comercial\n");
    scanf("%d", &tipo);

    if (tipo == 1) {
        valor = tarifa * 0.5;
    }
    else if (tipo == 2) {
        valor = tarifa;
    }
    else if (tipo == 3) {
        printf("Digite a quantidade de eixos: ");
        scanf("%d", &eixos);

        valor = tarifa * eixos;
    }
    else {
        printf("Tipo de veiculo invalido.\n");
        return 0;
    }

    printf("Valor do pedagio: R$ %.2f\n", valor);

    return 0;
}