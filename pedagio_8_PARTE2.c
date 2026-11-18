/*crie um programa para calcular o valor a cobrar em um pedagio. Considerando que este pedagio cobra 15,50 como tarifa base, o usuario deve informar o tipo de veiculo (carro, moto, ou veiculo comercial),
e receber de volta o valor do pedagio. Caso seja um veiculo comercial, o usuario deve informar tambem a quantidade de eixos do mesmo.
 Apos obter o tipo de veiculo, o programa deve calcular o novo valor do pedagio conforme a tabela abaixo:

Moto - 50% do valor
Carro - Tarifa base
Veiculo comercial - Tarifa base * numero de eixos*/

#include <stdio.h>

int main () {

float val, res;
int veic, eixos;

printf("( 1- Moto / 2 - Carro / 3 - Veiculo comercial)\n");
printf("Digite o numero correspondente ao veiculo: ");
scanf("%d", &veic);

printf("Digite o valor da tarifa: ");
scanf("%f", &val);

if(veic == 3) {
    printf("Digite quantos eixos o seu veiculo possui: ");
    scanf("%d", &eixos);
    val = val * eixos;
    printf("\nO valor da tarifa eh: %.2f\n", val);
}

else if(veic == 2)
    printf("\nO valor da tarifa eh: %.2f\n", val);

else {
    val = val / 2;
    printf("\nO valor da tarifa eh: %.2f\n", val);
}

printf("\nValor pago pelo motorista: ");
scanf("%f", &res);

if(res - val == 0) {
    printf("Sem necessidade de troco!");
}

else if(res - val < 0) {
    printf("\nO motorista nao pagou tudo!");
}

else {
res = res - val;
printf("\nO troco eh: %.2f", res);
}

}
