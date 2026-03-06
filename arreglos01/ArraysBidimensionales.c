#include<stdio.h>

int main(){
    int x=3, y=3;
    int jugador1[x][y];
    int jugador2[x][y];
    int bote1=777;
    int bote2[2]={555,555};
    for(int i=0; i<x; i++){

        for(int j=0; j<y; j++)
        {
         jugador1[x][y]=0;
         printf("\t%d\t", jugador1[x][y]);
        }
        printf("\n");
    }
    printf("J1 escoge donde vas a poner tu bote");
    printf("Escribe la coordenada ");
    scanf("%d", &jugador1[x]);
    printf("Escribe la coordenada ");
    scanf("%d", &jugador1[y]);




}
