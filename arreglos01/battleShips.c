#include<stdio.h>

int main(){
    int n = 3;
    int m = 3;
    int j;
    int i;
    int jugador1 [n][m];
    int jugador2 [n][m];
    int bote1 = 777;
    int bote2 [2]={555,555};
    int a, b, c, d, e, f;
    
    for (m=0; m < 3  ; m++){
        for (n=0; n < 3; n++){
            jugador1 [n][m] = 0;
            printf("(%d)", jugador1 [n][m]);
        }
        printf("\n");
    }

    printf("ingresa la coordenada del bote 1 (jugador 1)\n");
    scanf("%d" "%d", &a, &b);
    a= a-1;
    b= b-1;
    jugador1 [a][b]= bote1;

    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
        printf("(%d)", jugador1 [i][j]);
        }
        printf("\n");
    }

    do
    {
    printf("ingresa la primera coordenada del bote 2 (jugador 1)\n");
    scanf("%d" "%d", &c, &d);
    c= c-1;
    d= d-1; 

    } while ((c || d)==(a || b));
    
    
    jugador1 [c][d]= bote2 [0];

    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
        printf("(%d)", jugador1 [i][j]);
        }
        printf("\n");
    }

    do
    {
    printf("ingresa la segunda coordenada del bote 2 (jugador 1)\n");
    scanf("%d%d", &e, &f);
    e= e-1;
    f= f-1;
    } while (  (!( (c==e) || (d==f) ))  || ((e==f) && !(e==1 || f==1)) || (e>f) );//Esta shit hace que solo se pongan valores alrededor de la primera coordenada del bote 2,
                                                    //el pedo es cuando tenemos un barco de que en en medio de un fila, no se puede poner en el centro        

    


    jugador1 [e][f]= bote2 [1];
    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
        printf("(%d)", jugador1 [i][j]);
        }
        printf("\n");
    }   
        
}