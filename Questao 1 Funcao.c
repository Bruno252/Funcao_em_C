#include <stdlib.h>
#include <stdio.h>

float  mediar(float soma){
return soma/2;
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

    float  numero;
    float  soma;
    float  media;
    int i;

    for(i=0;i<2;i++){

        printf("%d Numero:",i+1);
        scanf("%f",&numero);
        soma+=numero;

    }

    media=mediar(soma);
    //limpatudo();
    resultado(media);

    return 0;
}