#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nom[20];
    char tablero[5][5];
    FILE *archivo;
    archivo = fopen("tablero.txt", "w");


    fgets(nom, sizeof(nom), stdin);
    printf("%s", nom);
    fprintf(archivo, "%s",nom);
    for(int i=0; i<5; i++){
        for(int j=0; j<5 ; j++){
            tablero[i][j]='~';
        }
    }

    tablero[1][2]='B';
    tablero[3][4]='X';
    tablero[2][1]='0';

    for(int i=0; i<5; i++){
        for(int j=0; j<5 ; j++){
            printf("%c ",tablero[i][j]);
        }
    printf("\n");
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            fprintf(archivo, "%c ", tablero[i][j]);
        }
        fprintf(archivo,"\n");
    }
    printf("%s", nom);
    fprintf(archivo, "%s",nom);
    fclose;

    fopen("tablero.txt", "r");

    return 0;
}
