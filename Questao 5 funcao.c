#include <stdio.h>
#include <stdlib.h>

struct dados{

int numero;
int soma;
int subt;
int multi;
float divi;

};

struct dados numeros;

int soma(int numero){
   return numeros.soma+=numero;
}

int subt(int numero){
        
    numeros.subt-=numero;
    numeros.subt=abs(numeros.subt);

   return numeros.subt;
}

int multi(int numero){
    if(numeros.multi<=0){
        numeros.multi=1;
    }
    return numeros.multi*=numero;
}

float divisao(int numero){

    if(numeros.divi>1){
        numeros.divi/=(float)numero;
        return numeros.divi;
    }else{
        numeros.divi=(float)numero;
        return numeros.divi;
    }
}

void imprimir(int soma,int subt,int multi,int divi){

    printf("Soma:%d\n",soma);
    printf("Subt:%d\n",subt);
    printf("Multi:%d\n",multi);
    printf("Divi:%d\n",divi);

}

void a(){

    printf("=================================\n");

}

int main(){

    int i;

    for(i=0;i<2;i++){
        a();
        printf("%d Numero:",i+1);
        scanf("%d",&numeros.numero);
        soma(numeros.numero);
        subt(numeros.numero);
        multi(numeros.numero);
        divisao(numeros.numero);
        a();
    }

    imprimir(numeros.soma,numeros.subt,numeros.multi,numeros.divi);

    return 0;
}