#include<stdio.h>

int main(){
int opcion;
    do{
        printf("1. Continuar\n");
        printf("2. Salir\n");
        scanf("%d", &opcion);
    }while(opcion !=2);

    return 0;

}