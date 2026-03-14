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

    printf("Escribe los nombres de tu lista:\n");
    for(int i=0 ; i<4; i++ ){
        fgets(jugadores[i], sizeof(jugadores[i]), stdin);

    }

    printf("\n");
    printf("Tu lista es:\n");

    for(int j=0 ; j<4; j++ ){

        int longitud = strlen(jugadores[j]);
        printf("%sla longitud es %d\n\n", jugadores[j], longitud-1);


    }

    char origen[20];
    char destino[20];


    printf("Escribe la cadena que quieres copiar:\n");
    fgets(origen, sizeof(origen), stdin);
    strcpy(destino, origen);
    printf("\nEsta es la cadena de origen: %s\n", origen);
    printf("Esta es la cadena destino: %s", destino);


    char nombre[20];
    char apellido[20];

    printf("Escribe tu nombre\n");
    scanf("%s", &nombre);
    printf("Escribe tu apellido\n");
    scanf("%s", &apellido);
        
    strcat(nombre, apellido);
    printf("Tu nombre y apellido es: %s \n", nombre);

    */

    char a[20];
    char b[20];

    printf("Escribe una contrase%ca:\n",164);
    fgets(a, sizeof(a), stdin);
    printf("Confirma la contrase%ca:\n",164);
    fgets(b, sizeof(b), stdin);
    
    if (strcmp(a, b)==0)
    {
        printf("Confirmacion exitosa");
    }else{
        printf("Error");
    }
    

    return 0;
}
