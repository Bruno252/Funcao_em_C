#include <stdio.h>
#include <stdlib.h>

void tabuada(int numero){
    int i;
    for(i=0;i<10;i++){
        printf("%d x %d :%d\n",numero,i+1,numero*(i+1));
    }
}

int main(){

    int numero;

    printf("Numero:");
    scanf("%d",&numero);
    printf("\n");
    tabuada(numero);

    return 0;
}