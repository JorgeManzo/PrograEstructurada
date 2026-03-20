#include<stdio.h>
#include<string.h>

int main(){
    char nombre[4][20];

    printf("Ingresa tus nombres y apellidos:\n");
    for(int i=0; i<4; i++){
        fgets(nombre[i], sizeof(nombre[i]),stdin);
    }

    for(int i=0; i<4; i++){
        printf("%d\n", nombre[i]);
    }

    printf("\n");

    int num[5];
    for(int i=0; i<4; i++){
        printf("%d\n", &num[i]);
    }

    printf("\n");

    char arreglo[5];
    printf("%d\n", arreglo[6]);
    for(int i=0; i<5; i++){
        printf("%d\n", &arreglo[i]);
    }
    return 0;
}
