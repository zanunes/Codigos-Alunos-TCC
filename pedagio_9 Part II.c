#include <stdio.h>

int main (){

    int veiculo,eixo;
    float vpedagio, base,vm;

    printf("digite qual o valor do Pedagio\n");
    scanf("%f",&base);
    printf("digite qual Veiculo vc esta utilizando:\n(1)Carro (2)Moto(3)Veiculo Comercial\n");
    scanf("%d",&veiculo);

    if(veiculo == 1){
        printf("Valor Fornecido pelo Motorita:");
        scanf("%f",&vm);
        printf("Valor do Pedagio a ser pago  e: %f \n",base);
        printf("Valor do Troco e: %f",vm - base);
    }
    else if(veiculo == 2 ){
        printf("Valor Fornecido pelo Motorita:");
        scanf("%f",&vm);
        vpedagio = base - (base * 0.5);
        printf("Valor do Pedagio a ser pago  e: %2.f\n",vpedagio);
        printf("Valor do Troco e: %2.f",vm - vpedagio);
    }
    else if(veiculo == 3 ){
        printf("Valor Fornecido pelo Motorita:");
        scanf("%f",&vm);
        printf("Quantos Eixos contem:\n");
        scanf("%d",&eixo);
        vpedagio = base * eixo;
        printf("Valor do Pedagio a ser pago  e: %2.f\n",vpedagio);
        printf("Valor do Troco e: %2.f",vm - vpedagio);
    }

}
