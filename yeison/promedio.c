#include<stdio.h>

int main ()
{
    int materias, promedio;

    printf("Cu%cl es tu promedio?\n",160);
    scanf("%d", &promedio);
    printf("Cu%cntas materias reprobaste?\n",160);
    scanf("%d", &materias);
    if((promedio>=85 && promedio<100)&&(materias==0))
        {
        printf("Felicidades, tienes beca!\n");
        }
        else{
        printf("No fuiste selecionado\n");
        }

    return 0;
}

