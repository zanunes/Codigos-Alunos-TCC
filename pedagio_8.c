/*crie um programa para calcular o valor a cobrar em um pedagio. Considerando que este pedagio cobra 15,50 como tarifa base, o usuario deve informar o tipo de veiculo (carro, moto, ou veiculo comercial),
e receber de volta o valor do pedagio. Caso seja um veiculo comercial, o usuario deve informar tambem a quantidade de eixos do mesmo.
 Apos obter o tipo de veiculo, o programa deve calcular o novo valor do pedagio conforme a tabela abaixo:

Moto - 50% do valor
Carro - Tarifa base
Veiculo comercial - Tarifa base * numero de eixos*/

#include <stdio.h>

int main () {

float val = 15.50;
int veic, eixos;

printf("( 1- Moto / 2 - Carro /3 - Veiculo comercial)\n");
printf("Digite o numero correspondente ao seu veiculo: ");
scanf("%d", &veic);

if(veic == 3) {
    printf("Digite quantos eixos o seu veiculo possui: ");
    scanf("%d", &eixos);
    val = val * eixos;
    printf("O valor da tarifa eh: %.2f", val);
}

else if(veic == 2)
    printf("O valor da tarifa eh: 15,50");

else {
    val = val / 2;
    printf("O valor da tarifa eh: %.2f", val);
}

}
