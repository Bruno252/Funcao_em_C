#include <stdio.h>
#include <stdlib.h>
#define tam 6

struct dado{
    int numero;
    int par;
    int impar;
};
    struct dado numeros;

int par(int numero){
        if(numero%2==0){
            numeros.par++;
            return numeros.par;
        }
}

int impar(int numero){
    if(numero%2==1){
        numeros.impar++;
    }
    return numeros.impar;
}

int main(){

int i;

    for(i=0;i<tam;i++){
        printf("%d Numero:",i+1);
        scanf("%d",&numeros.numero);
        par(numeros.numero);
        impar(numeros.numero);
    }

        printf("Quantidades de Par:%d\n",numeros.par);
        printf("Quantidades de Impares:%d\n",numeros.impar);

    return 0;
}