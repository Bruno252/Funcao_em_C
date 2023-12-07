#include <stdio.h>
#include <stdlib.h>

struct dados{
float preco;
float inflacao;
float valorTotal;
};
struct dados valors;

float menor(float valor){
    valors.inflacao=valor*0.10;
    valors.valorTotal=valor+valors.inflacao;
    return valors.valorTotal;
}

float maior(float valor){
    valors.inflacao=valor*0.20;
    valors.valorTotal=valor+valors.inflacao;
    return valors.valorTotal;
}

void imprimir(float valorTotal){

    printf("Valor Total:%.2f",valorTotal);

}

int main(){


    printf("Valor:");
    scanf("%f",&valors.preco);

        if(valors.preco<100){
            menor(valors.preco);
        }else{
            maior(valors.preco);
        }

    imprimir(valors.valorTotal);


    return 0;
}