#include <stdio.h>

int main() {
    int tablero[5][5];
    int fila, columna, intentos = 5, impactos = 0;

    // Inicializar tablero
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            tablero[i][j] = 0;
        }
    }

    // Colocar barcos manualmente
    int a, b, c, d, e, f;

    do{
        printf("Ingresa la coordenada del bote 1 (jugador 1).\n");
        scanf("%d" "%d", &a, &b);

        if (a>5 || b>5 ||a==0||b==0||a<0||b<0){
            printf("Coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        }

    }while (a>5 || b>5 ||a==0||b==0||a<0||b<0);
    a=a-1;
    b=b-1;
    tablero[a][b] = 1;
    
    do{
        printf("Ingresa la primera coordenada del bote 2 (jugador 1)\n");
        scanf("%d" "%d", &c, &d);

        if (c>5 || d>5 ||c==0||d==0||c<0||d<0 ){
            printf("coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        }else if ( (c - 1 == a) && (d - 1 == b) )//esta condicion impide que el usuario ponga coordenadas donde ya estaba el bote 1
            {
            printf("coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
            }
        
    
    }while ((c>5 || d>5 ||c==0||d==0||c<0||d<0) || (c - 1 == a) && (d - 1 == b) );
        c= c-1;
        d= d-1;
        tablero[c][d] = 1;

    do{
        printf("Ingresa la segunda coordenada del bote 2 (jugador 1)\n");
        scanf("%d" "%d", &e, &f);

        if(e>5 || f>5 ||e==0||f==0||e<0||f<0 || !((c==e-1) && (d==f)||(c==e-1)&&(d==f-2)||(c==e)&&(d==f-1)||(c==e-2)&&(d==f-1))){
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");
        }else if ((e - 1 == a) && (f - 1 == b))//esta condicion impide que el usuario ponga coordenadas donde ya estaba el bote 1
            {
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");
            }
        

    }while (e>5 || f>5 ||e==0||f==0||e<0||f<0 || !((c==e-1) && (d==f)||(c==e-1)&&(d==f-2)||(c==e)&&(d==f-1)||(c==e-2)&&(d==f-1)) || (e - 1 == a) && (f - 1 == b));
        e = e-1;
        f = f-1;
        tablero[e][f] = 1;

    // Mostrar tablero inicial
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("~ ");
        }
        printf("\n");
    }

    do {
        // Validación de coordenadas para no salir del tablero
        do {
            printf("Fila: ");
            scanf("%d", &fila);

            printf("Columna: ");
            scanf("%d", &columna);
            
            // Restamos 1 para que el usuario pueda teclear 1-5 pero internamente sea 0-4
            fila--;
            columna--;

        } while( fila < 0 || fila > 4 || columna < 0 || columna > 4);
        
        // Evaluación del disparo
        if (tablero[fila][columna] == 1) {
            printf("Impacto!\n");
            tablero[fila][columna] = 3;
            impactos++;
            intentos--;
        } 
        else if (tablero[fila][columna] == 0) {
            printf("Disparo fallido.\n");
            tablero[fila][columna] = 2;
            intentos--; 
        } 
        else {
            printf("Ya hab%cas disparado en esta coordenada.\n", 161);
        }

        // Mostrar el nuevo tablero
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                switch (tablero[i][j]) {
                    case 0:
                        printf("~ ");
                        break;
                    case 1:
                        printf("~ "); // Mantiene los barcos ocultos
                        break;
                    case 2:
                        printf("2 ");
                        break;
                    case 3:
                        printf("3 ");
                        break;
                    default:
                        break;
                }
            }
            printf("\n");
        }


        printf("\nTiraste %d barcos.", impactos);
        printf("\nTe quedan %d intentos.\n", intentos);

        if (impactos == 3) {
            printf("\nFelicidades, eres la mera verdura del caldo!\n");
        } else if(intentos == 0) {
            printf("\nLo siento BB :/\n");
        }

    } while(impactos < 3 && intentos > 0);

    return 0;

}