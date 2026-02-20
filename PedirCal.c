#include<stdio.h>

int main(){
int i, mat, opc;
float cal, suma, resu;

    printf("Bienvendio Usuario!\n1.Iniciar Programa\n2.Salir");
    scanf("%d", opc);

    do{
    printf("Introduce cuantas calificaciones ingresaras\n");
    scanf("%d", &mat);

        for(i=1;i<=mat;i++){
        printf("Escribe la calificación\n");
        scanf("%f", &cal);
        suma+=cal;
        }
        resu=suma/mat;
        printf("%.2f",resu);
    }while(opc==1);



           // printf("No ingreses valor negativos");
           // printf("1.regresar al menu");
           // scanf("%d", &opc);


 return 0;
}
