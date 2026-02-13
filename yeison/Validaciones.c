#include<stdio.h>

int main ()
{
    int materias, promedio, edad;

    printf("Cu%cl es tu edad?\n",160);
    scanf("%d", &edad);
    printf("Cu%cl es tu promedio?\n",160);
    scanf("%d", &promedio);
    printf("Cu%cntas materias reprobaste?\n",160);
    scanf("%d", &materias);


    if((edad>18)&&((promedio>=90 && promedio<100)&&(materias==0)))
        {
        printf("Felicidades, tienes beca!\n");
        }
    else if((edad>18)&&((promedio>=90 && promedio<100)&&(materias<=2)))
        {
        printf("Puedes reinscribirte\n");
        }
    else if((edad>18)&&((promedio>=90 && promedio<100)&&(materias>=3)))
        {
        printf("Est%cs en situacion cr%ctica\n",160,161);
        }
    else if(edad<18)
        {
        printf("Eres menor de edad no puedes aplicar a la beca");
        }


    return 0;
}
