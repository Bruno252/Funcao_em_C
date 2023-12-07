#include <stdio.h>
#include <stdlib.h>

struct dados{
float m;
float cm;
int escolha;
};
struct dados numeros;

float conversaoMetro(float metro){
    numeros.cm=metro*100;
    return numeros.cm;
}

void imprimirMetro(float cm){
    printf("Metros em centimetros:%.2f\n",cm);
}

float conversaoCm(float cm){
    numeros.m=cm/100;
    return numeros.m;
}

void imprimirCm(float m ){
    printf("Centimetros em Metros:%.1f\n",m);
}

void limpatudo(){
    system("cls || clear");
    fflush(stdin);
}

void a(){
    printf("==============================================\n");
}

int main(){
do{
    a();
    printf("Digite 1 | para Metros para Centimetros\n");
    printf("Digite 2 | para Centimetros para Metro\n");
    printf("Digite 3 | para sair do programa\n");
    a();
    scanf("%d",&numeros.escolha);
    limpatudo();


switch(numeros.escolha){

    case 1:
        a();
        printf("Valor do Metro:\n");
        a();
        scanf("%f",&numeros.m);

        conversaoMetro(numeros.m);
        limpatudo();
        a();
        imprimirMetro(numeros.cm);
        a();
    break;

    case 2:
        a();
        printf("Valor em centimetros:\n");
        a();
        scanf("%f",&numeros.cm);

        conversaoCm(numeros.cm);
        limpatudo();
        a();
        imprimirMetro(numeros.m);
        a();
    break;

    case 3:
        a();
        printf("Obrigado e Volte Sempre\n");
        a();
    break;

    default:
        printf("Escolha Invalida");
    break;
}

}while(numeros.escolha!=3);

    return 0;
}