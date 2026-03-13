#include<stdio.h>
#include<string.h>

int main(){
    char nombre1 [16]="Antonio";
    char nombre2 [15];
    char jugadores[4][20];

/*
    scanf("%s", &nombre2);
    printf("%s", nombre2);

    fgets(nombre2, sizeof(nombre2), stdin);
    printf("%s", nombre2);
*/
    printf("Escribe los nombres de tu lista:\n");
    for(int i=0 ; i<4; i++ ){
        fgets(jugadores[i], sizeof(jugadores[i]), stdin);

    }

    printf("\n");
    printf("Tu lista es:\n");

    for(int j=0 ; j<4; j++ ){

        int longitud = strlen(jugadores[j]);
        printf("%sla longitud es %d\n\n", jugadores[j], longitud);


    }



    return 0;
}
