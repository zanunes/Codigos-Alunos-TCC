/*parte 1
Crie um programa para calcular o valor a cobrar em um pedagio. Considerando que este pedagio
cobra R$15,50 como tarifa base, o usuario deve informar o tipo do veiculo
(carro, moto, veiculo comercial), e receber de volta o valor do pedagio. Caso seja um veiculo
comercial, o usuario deve informar tambem a quantidade de eixos do mesmo. Apos obter o tipo do veiculo,
o programa deve calcular o novo valor do pedagio conforme a tabela abaixo:
MOTO = 50% do valor
CARRO = Tarifa base
VEICULO COMERCIAL = Tarifa base * numero de eixos

parte 2

altere o programa para incluir duas novas funcionalidades:
1- Além de calcular a tarifa, deve pedir ao usuário que forneça o valor pago pelo motorista do
automóvel, e deve automaticamente calcular o troco a ser devolvido.

O programa deve possuir um menu que compute as diferentes ações disponiveis ao usuario.

*/



#include<stdio.h>

int main(){
int veiculo, eixo;
float pedagio, moto, carro, vc, valor, troco;

printf ("quanto esta custando a tarifa;\n");
scanf ("%f", &pedagio);

printf ("qual o seu tipo  de veiculo: \nDIGITE 1 para CARRO \nDIGITE 2 para MOTO \nDIGITE 3 para VEICULO COMERCIAL\n");
scanf ("%d", &veiculo);

if (veiculo == 1){

printf ("qual o valor que voce ira pagar: \n");
scanf ("%f,", &valor);

moto = pedagio * 0.50;

troco = valor - moto;

printf ("o valor do pedagio da moto eh %.2f R$ e o troco eh de %.2f R$", moto, troco);

}

else if (veiculo == 2){

printf ("qual o valor que voce ira pagar: \n");
scanf ("%f,", &valor);

carro = pedagio;

troco = valor - carro;

printf ("o valor do pedagio do carro eh %.2f R$ e o troco eh de %.2f R$", carro, troco);

}

else if (veiculo == 3){

printf ("qual o valor que voce ira pagar: \n");
scanf ("%f,", &valor);

printf ("quantos eixos tem seu veiculo:\n");
scanf ("%d", &eixo);

vc = pedagio * eixo;

troco = valor - vc;

printf ("o valor do pedagio do veiculo comercial eh %.2f R$ e o troco eh de %.2f R$", vc, troco);


    }


}
