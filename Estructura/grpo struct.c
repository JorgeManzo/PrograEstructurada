#include<stdio.h>

struct grupo{
    char nombre[20] ;
    float cal;
    int act, derecho;
};

int main(){
    struct grupo alumno[3];
    for(int i=0; i<3; i++){
        printf("Ingresa el nombre del alumno %d es:\n", i+1);
        fgets(alumno[i].nombre, 20, stdin);

        printf("\nCalificacion:\n");
        scanf("%f", &alumno[i].cal);

        printf("\nActividades\n");
        scanf("%d", &alumno[i].act);

        printf("\nDerecho\n");
        scanf("%d", &alumno[i].derecho);

        printf("La calificacion de %s es:%f\n",alumno[i].nombre,alumno[i].cal);
        printf("Las actividades de %s es:%d\n",alumno[i].nombre,alumno[i].cal);
        printf("El derecho de es %s (1=Con derecho, 0=Sin derecho) es:%f\n",alumno[i].nombre,alumno[i].act);
    }
    return 0;
}

