#include <stdio.h>
#include <stdlib.h>

struct dados{
float m;
float cm;
};
struct dados numeros;

float conversao(float metro){
    numeros.cm=metro*100;
    return numeros.cm;
}

void imprimir(float cm){
    printf("Metros em centimetros:%.2f",cm);
}

int main(){

    printf("Valor do Metro:");
    scanf("%f",&numeros.m);

    conversao(numeros.m);
    imprimir(numeros.cm);
    
    return 0;
}