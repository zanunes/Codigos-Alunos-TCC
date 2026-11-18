#include <stdio.h>

int main (){

    int veiculo,eixo;
    float vpedagio;

    printf("digite qual Veiculo vc esta utilizando:\n(1)Carro (2)Moto(3)Veiculo Comercial\n");
    scanf("%d",&veiculo);

    if(veiculo == 1){
        printf("Valor do Pedagio a ser pago  e: 15.50");
    }
    else if(veiculo == 2 ){
        vpedagio = 15.5 - (15.5 * 0.5);
        printf("Valor do Pedagio a ser pago  e: %2.f",vpedagio);
    }
    else if(veiculo == 3 ){
        printf("Quantos Eixos contem:\n");
        scanf("%d",&eixo);
        vpedagio = 15.5 * eixo;
        printf("Valor do Pedagio a ser pago  e: %2.f",vpedagio);
    }

}
