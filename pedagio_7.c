/*Crie um programa para calcular o valor a cobrar em um pedagio. Considerando que este pedagio
cobra R$15,50 como tarifa base, o usuario deve informar o tipo do veiculo
(carro, moto, veiculo comercial), e receber de volta o valor do pedagio. Caso seja um veiculo
comercial, o usuario deve informar tambem a quantidade de eixos do mesmo. Apos obter o tipo do veiculo,
o programa deve calcular o novo valor do pedagio conforme a tabela abaixo:
MOTO = 50% do valor
CARRO = Tarifa base
VEICULO COMERCIAL = Tarifa base * numero de eixos*/

#include<stdio.h>

int main(){
int veiculo, eixo;
float pedagio, moto, carro, vc;

printf ("qual o seu tipo  de veiculo: \nDIGITE 1 para CARRO \nDIGITE 2 para MOTO \nDIGITE 3 para VEICULO COMERCIAL\n");
scanf ("%d", &veiculo);

if (veiculo == 1){

moto = 15.50 * 0.50;

printf ("o valor do pedagio da moto eh %.2f R$", moto);

}

else if (veiculo == 2){

carro = 15.50;

printf ("o valor do pedagio do carro eh %.2f R$", carro);

}

else if (veiculo == 3){

printf ("quantos eixos tem seu veiculo:\n");
scanf ("%d", &eixo);

vc = 15.50 * eixo;

printf ("o valor do pedagio do veiculo comercial eh %.2f R$", vc);


    }

}
