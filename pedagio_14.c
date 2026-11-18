#include <stdio.h>
int main() {
    float tarifa_base = 15.50;
    float valor;
    int tipo, eixos;

    printf("=== CALCULO DO PEDAGIO ===\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("3 - Veiculo comercial\n");
    printf("Escolha o tipo de veiculo: ");
    scanf("%d", &tipo);

    if (tipo == 1) {
        valor = tarifa_base * 0.50;
    }
    else if (tipo == 2) {
        valor = tarifa_base;
    }
    else if (tipo == 3) {
        printf("Informe a quantidade de eixos: ");
        scanf("%d", &eixos);

        valor = tarifa_base * eixos;
    }
    else {
        printf("Tipo de veiculo invalido!\n");
        return 0;
    }

    printf("\nValor do pedagio: R$ %.2f\n", valor);

    return 0;
}
