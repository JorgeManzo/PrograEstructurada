#include<stdio.h>


void capturar(int m[3][3]){
    printf("Escribe los elementos de la matriz:\n");
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<3 ; j++){
            scanf("%d", &m[i][j]);
        }
    }
}

void mostrar(int v[3][3]){
    FILE *f;
    f = fopen("resultado.txt","a");

    printf("\nEstos son los elementos de la matriz:\n");
    fprintf(f, "\nEstos son los elementos de la matriz:\n");

    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3 ; j++){
            printf("%d ", v[i][j]);

            fprintf(f, "%d ", v[i][j]);
        }
        printf("\n");

        fprintf(f, "\n");
    }
    fclose(f);
}

int diagonal(int d[3][3]){
    FILE *f;
    f = fopen("resultado.txt","a");

    int i, j, suma = 0;
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<3 ; j++){
            if(i == j){
                suma+=d[i][j];
            }
        }
    }
    printf("\nLa diagonal principal es: %d", suma);
    fprintf(f, "\nLa diagonal principal es: %d", suma);
    fclose(f);
    return 0;
}



int main(){
    int ma[3][3];//={{1,2,3},{4,5,6},{7,8,9}}
    capturar(ma);
    mostrar(ma);
    diagonal(ma);
    return 0;
}
