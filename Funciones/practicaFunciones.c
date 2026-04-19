#include<stdio.h>

void capturar(int v[], int n){
    printf("Escribe los elementos del array\n");
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &v[i]);
    }
 
} 

void imprmir(int v[], int n){
    printf("Estos son los elementos de tu array:\n");
    for (int i = 0 ; i < n ; i++){
        printf("%d ", v[i]);
    }
}

int filtrar(int v[], int nuevodat[], int n){
    FILE *f;
    f = fopen("resultado.txt","w");

    printf("\nEstos son los elementos de tu FILTRO:\n");
        for (int i = 0; i < n; i++){
            if ( v[i] % 2 != 0 && v[i] % 3 != 0 && v[i] < 10){
            nuevodat[i] = v[i];
            printf("%d ", nuevodat[i]);   
            fprintf(f, "%d ", nuevodat[i]);
        }   
    }
    fclose(f);
    return 0;
}

int main(){
    int datos[6], nuevodat[6];

    capturar(datos, 6);
    imprmir(datos, 6);
    filtrar(datos, nuevodat, 6);

    return 0;
}