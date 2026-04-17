#include<stdio.h>
void mostrarMatriz(int m[2][3]){
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<3 ; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }

    }

int main(){
    int matriz[2][3]={{1,2,3},{4,5,6}};//Las llaves representan mis filas (por eso son 2 en este caso), los elementos que estan dentro de esas llaves (en este caso 3) representan mis columnas
    mostrarMatriz(matriz);
    return 0;
}
