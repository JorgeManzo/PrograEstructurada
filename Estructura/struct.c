#include<stdio.h>

struct alumne{
    char nombre[20] ;
    float cal;
    int act, derecho;
};

int main(){
    struct alumne carlos;

    printf("Ingresa el nombre del alumno es:\n");
    fgets(carlos.nombre, 20, stdin);

    printf("Calificacion");
    scanf("%f", &carlos.cal);

    printf("Actividades");
    scanf("%d", &carlos.act);

    printf("Derecho");
    scanf("%d", &carlos.derecho);

    printf("La calificacion de %s es:%f",carlos.nombre,carlos.cal);
    printf("Las actividades de %s es:%d",carlos.nombre,carlos.cal);
    printf("El derecho de es %s (1=Con derecho, 0=Sin derecho) es:%f",carlos.nombre,carlos.act);

    return 0;

}
