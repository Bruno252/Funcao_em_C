#include <stdio.h>
#include <stdlib.h>

void par_ou_impar(int acumulador[]){

    int i,par=0,impar=0;
    for(i=0;i<4;i++){
        if(acumulador[i]%2==0){
            printf("Este Numero e Par:%d\n",acumulador[i]);
            par++;
        }else{
            printf("Esse Numero e Impar:%d\n",acumulador[i]);
            impar++;
        }   
    }
        printf("\nQuantidade de Par:%d\n",par);
        printf("Quantidade de Impar:%d\n",impar);
}

void limpatudo(){

    fflush(stdin);
    system("cls ||clear");

}

int main(){

int numero;
int acumulador[4];
int i;

    for(i=0;i<4;i++){
        printf("Numero:");
        scanf("%d",&numero);
        acumulador[i]=numero;
    }

    printf("\n");
    limpatudo();
    par_ou_impar(acumulador);

    return 0;
}