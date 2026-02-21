#include<stdio.h>

int main(){
    int i, mat, opc, opc2, aprobadas, reprobadas;
    float cal, suma, resu;

    printf("Bienvendio Usuario!\n1.Iniciar Programa | 2.Salir\n");
    scanf("%d", &opc);

    switch (opc){
        case 1:
            do{ 
                aprobadas=0;
                reprobadas=0;
                suma=0;//Se establecen estos valores (aprobadas, reprobadas, suma) en 0 para que el usuario pueda ingreasr nuevos valores y estos no se le sumen a los pasados.  
                
                printf("Introduce el n%cmero de materias de los que obtendr%cs su promedio :\n",163, 160);
                scanf("%d", &mat);

                while(mat < 1){
                    printf("Debes ingresar por lo menos una materia, intenta otra vez\n");
                    scanf("%d", &mat);
                }

                for(i = 1 ; i <= mat ; i++){
                    printf("\nEscribe la calificaci%cn:\n",162);
                    scanf("%f", &cal);

                    if(cal < 0 || cal > 100){
                        cal=0;
                        printf("\nValor no v%clido, ",160);
                        i--;//Decrece el valor de i para que el bucle se repita hasta tener los valores válidos (0-100)
                    }else if(cal >= 60){
                        aprobadas++;//Se le suma 1 a la variable para contabilizar las materias aprobadas.
                        suma+=cal; 
                    }else if (cal < 60){
                        reprobadas++;//Se le suma 1 a la variable para contabilizar las materias reprobadas.
                        suma+=cal;
                    }            
                }

        resu=suma/mat;
        printf("\nTu promedio es: %.2f | aprobaste: %d materias | reprobaste: %d materias\n",resu, aprobadas, reprobadas);

        do{    
            printf("\nDeseas obtener otro promedio? 1.si | 2.no\n");
            scanf("%d", &opc2);

            if (opc2 > 2 || opc2 < 1){
                printf("\nValor no v%clido, intenta otra vez",160);
            } else if (opc2 == 2){
                printf("Gracias por usar el programa!");
            }      
        } while (opc2 > 2 || opc2 < 1);//Se evalua esta condición para forzar que el usuario solo escriba 1 o 2

        }while(opc2 == 1);//Esta condición regresa al usuario a obtener el promedio de nuevo
        break;

        case 2:
            printf("Gracias por usar el programa!");
            break;

        default:
            break;
    }

    return 0;

}