#include <stdio.h>
#include <stdlib.h>

void par_ou_impar(int numero){

if(numero%2==0){
    printf("\nEste Numero e Par:%d",numero);
}else{
    printf("\nEsse Numero e Impar:%d",numero);
}

}

int main(){

int numero;

    printf("Numero:");
    scanf("%d",&numero);
    par_ou_impar(numero);

    return 0;
}