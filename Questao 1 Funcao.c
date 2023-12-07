#include <stdlib.h>
#include <stdio.h>
#define TAM 2
struct dados{

    float  numero;
    float  soma;
    float  media;
    int i;

};
struct dados numeros;

float  mediar(float numero){
    numeros.soma+=numero;
return numeros.media = numeros.soma/2;

}

void limpatudo(){
    fflush(stdin);
    //setbuf(stdin,NULL);
    system("cls || clear");
}

 void resultado(float media){
    printf("\nMedia:%.2f",media);
}

int main(){

int i;

    for(i=0;i<TAM;i++){
        printf("%d Numero:",i+1);
        scanf("%f",&numeros.numero);
        mediar(numeros.numero);
    }

    
    //limpatudo();
    resultado(numeros.media);

    return 0;
}
