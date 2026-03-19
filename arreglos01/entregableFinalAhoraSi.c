#include <stdio.h>
#include <string.h>

int main() {
    int tablero1[5][5];
    int tablero2[5][5];
    int fila, columna, impactosJ1 = 0, impactosJ2 = 0, turno;
    char jugadores[2][20];
    char barcosJ1[2][20];
    char barcosJ2[2][20];

    //Pedir nombres jugadores
    printf("Bienvenido! Quienes van a a jugar?");
    for(int i=0 ; i<2; i++ ) {
        printf("\nIngresa el nombre del jugador %d:", i+1);
        fgets(jugadores[i], sizeof(jugadores[i]), stdin);
    }

    //Pedir nombres barcos

    //Jugador 1
    printf("\n%scomo llamaras a tus barcos? ", jugadores[0]);
    printf("\nIngresa el nombre del barco 1x1:");
    fgets(barcosJ1[0], sizeof(barcosJ1[0]), stdin);
    printf("\nIngresa el nombre del barco 2x1:");
    fgets(barcosJ1[1], sizeof(barcosJ1[1]), stdin);

    //Jugador 2
    printf("\n%scomo llamaras a tus barcos? ", jugadores[1]);
    printf("\nIngresa el nombre del barco 1x1:");
    fgets(barcosJ2[0], sizeof(barcosJ2[0]), stdin);
    printf("\nIngresa el nombre del barco 2x1:");
    fgets(barcosJ2[1], sizeof(barcosJ2[1]), stdin); 

    // Inicializar tablero1
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            tablero1[i][j] = 0;
        }
    }

    // Inicializar tablero2
    for(int k = 0; k < 5; k++) {
        for(int l = 0; l < 5; l++) {
            tablero2[k][l] = 0;
        }
    }

    // Colocar barco 1x1 jugador1
    int a, b, c, d, e, f;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");//Saltos de linea para que los jugadores no vean las coordenadas del otro
    
    //Mostrar las coordenadas de referencia
    printf("Usa estas coordenadas como referencia.\n");
    for (int i = 1; i <=5; i++) {
        for (int j = 1; j <=5; j++) {
            printf("(%d,%d) ",i, j);
        }
        printf("\n");
    } 

    do {
        printf("\n%sIngresa las coordenadas de %s",jugadores[0], barcosJ1[0]);
        scanf("%d" "%d", &a, &b);

        if (a>5 || b>5 ||a==0||b==0||a<0||b<0) {
            printf("Coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        }
    } while (a>5 || b>5 ||a==0||b==0||a<0||b<0);

    a=a-1;
    b=b-1;
    tablero1[a][b] = 1;
    
    // Colocar barco 2x1 jugador1
    do {
        printf("%sIngresa la primer coordenada de %s",jugadores[0], barcosJ1[1]);
        scanf("%d" "%d", &c, &d);

        if (c>5 || d>5 ||c==0||d==0||c<0||d<0 ) {
            printf("coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        } else if ( (c - 1 == a) && (d - 1 == b) ) { //esta condicion impide que el usuario ponga coordenadas donde ya estaba el bote 1
            printf("coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        }
    } while ((c>5 || d>5 ||c==0||d==0||c<0||d<0) || (c - 1 == a) && (d - 1 == b) );

    c= c-1;
    d= d-1;
    tablero1[c][d] = 4;//Se le da un valor diferente a los barcos 2x2 para despues imprimir su nombre
        
    do {
        printf("%sIngresa la segunda coordenada de %s",jugadores[0], barcosJ1[1]);
        scanf("%d" "%d", &e, &f);

        if(e>5 || f>5 ||e==0||f==0||e<0||f<0 || !((c==e-1) && (d==f)||(c==e-1)&&(d==f-2)||(c==e)&&(d==f-1)||(c==e-2)&&(d==f-1))) {
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");
        } else if ((e - 1 == a) && (f - 1 == b)) { //esta condicion impide que el usuario ponga coordenadas donde ya estaba el bote 1
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");
        }
    } while (e>5 || f>5 ||e==0||f==0||e<0||f<0 || !((c==e-1) && (d==f)||(c==e-1)&&(d==f-2)||(c==e)&&(d==f-1)||(c==e-2)&&(d==f-1)) || (e - 1 == a) && (f - 1 == b));

    e = e-1;
    f = f-1;
    tablero1[e][f] = 4;//Se le da un valor diferente a los barcos 2x2 para despues imprimir su nombre
        
    // Colocar barcos 1x1 jugador2
    int a2, b2, c2, d2, e2, f2;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
    //Mostrar las coordenadas de referencia
    printf("Usa estas coordenadas como referencia.\n");
    for (int i = 1; i <=5; i++) {
        for (int j = 1; j <=5; j++) {
            printf("(%d,%d) ",i, j);
        }
        printf("\n");
    } 

    do {
        printf("\n%sIngresa las coordenadas de %s",jugadores[1], barcosJ2[0]);
        scanf("%d" "%d", &a2, &b2);

        if (a2>5 || b2>5 ||a2==0||b2==0||a2<0||b2<0) {
            printf("Coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        }
    } while (a2>5 || b2>5 ||a2==0||b2==0||a2<0||b2<0);

    a2=a2-1;
    b2=b2-1;
    tablero2[a2][b2] = 1;
    
    // Colocar barcos 2x1 jugador2
    do {
        printf("%sIngresa la primer coordenada de %s",jugadores[1], barcosJ2[1]);
        scanf("%d" "%d", &c2, &d2);

        if (c2>5 || d2>5 ||c2==0||d2==0||c2<0||d2<0 ) {
            printf("coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        } else if ( (c2 - 1 == a2) && (d2 - 1 == b2) ) { //esta condicion impide que el usuario ponga coordenadas donde ya estaba el bote 1
            printf("coordenada invalida vuelvela a ingresar.\n");
            printf("\n");
        }
    } while ((c2>5 || d2>5 ||c2==0||d2==0||c2<0||d2<0) || (c2 - 1 == a2) && (d2 - 1 == b2) );

    c2= c2-1;
    d2= d2-1;
    tablero2[c2][d2] = 4;//Se le da un valor diferente a los barcos 2x2 para despues imprimir su nombre
        
    do {
        printf("%sIngresa la segunda coordenada de %s",jugadores[1], barcosJ2[1]);
        scanf("%d" "%d", &e2, &f2);

        if(e2>5 || f2>5 ||e2==0||f2==0||e2<0||f2<0 || !((c2==e2-1) && (d2==f2)||(c2==e2-1)&&(d2==f2-2)||(c2==e2)&&(d2==f2-1)||(c2==e2-2)&&(d2==f2-1))) {
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");
        } else if ((e2 - 1 == a2) && (f2 - 1 == b2)) { //esta condicion impide que el usuario ponga coordenadas donde ya estaba el bote 1
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");
        }
    } while (e2>5 || f2>5 ||e2==0||f2==0||e2<0||f2<0 || !((c2==e2-1) && (d2==f2)||(c2==e2-1)&&(d2==f2-2)||(c2==e2)&&(d2==f2-1)||(c2==e2-2)&&(d2==f2-1)) || (e2 - 1 == a2) && (f2 - 1 == b2));

    e2 = e2-1;
    f2 = f2-1;
    tablero2[e2][f2] = 4;//Se le da un valor diferente a los barcos 2x2 para despues imprimir su nombre

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    do { //Este do while es para que los turnos de los jugadores se intercalen
        //TURNO DE JUGADOR 1    
        do {
            printf("\nTurno de %s\n",jugadores[0]);

            // Mostrar el nuevo tablero2
            for(int k = 0; k < 5; k++) {
                for(int l = 0; l < 5; l++) {
                    switch (tablero2[k][l]) {
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
                        case 4:
                            printf("~ "); // Mantiene los barcos ocultos
                            break;
                        default:
                            break;
                    }
                }
                printf("\n");
            }

            // Validación de coordenadas para no salir del tablero1
            do {
                printf("Fila: ");
                scanf("%d", &fila);

                printf("Columna: ");
                scanf("%d", &columna);
                
                // Restamos 1 para que el usuario pueda teclear 1-5 pero internamente sea 0-4
                fila--;
                columna--;

            } while( fila < 0 || fila > 4 || columna < 0 || columna > 4);
            
            // Evaluación del disparo del jugador 1 y aplicarlo al tablero del jugador 2
            if (tablero2[fila][columna] == 1) {
                printf("\nImpacto!, le diste a %s",barcosJ2[0]);
                tablero2[fila][columna] = 3;
                impactosJ1++;
                turno=1;
            } else if (tablero2[fila][columna] == 4) { //Evalua en 4 porque ese es el valor de los barcos 2x2
                printf("\nImpacto!, le diste a %s",barcosJ2[1]);//Imprime el nombre de los barcos 2x2
                tablero2[fila][columna] = 3;
                impactosJ1++;
                turno=1;
            } else if (tablero2[fila][columna] == 0) {
                printf("\nDisparo fallido.\n");
                tablero2[fila][columna] = 2;
                turno=2;
            } else {
                printf("\nYa hab%cas disparado en esta coordenada.\n", 161);
                turno=1;
            }

            printf("Tiraste %d barcos.\n", impactosJ1);

            //Se acaba el juego cuando el jugador tire los 3 barcos
            if (impactosJ1 == 3) {
                printf("\nFelicidades %sEres la mera verdura del caldo!\n",jugadores[0]);
                turno=0;
            }

        } while(turno==1);
        
        //TURNO DE JUGADOR 2
        while (turno==2) { 
            printf("\nTurno de %s\n", jugadores[1]);
            // Mostrar el nuevo tablero1
            for(int i = 0; i < 5; i++) {
                for(int j = 0; j < 5; j++) {
                    switch (tablero1[i][j]) {
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
                        case 4:
                            printf("~ "); // Mantiene los barcos ocultos
                            break;
                        default:
                            break;
                    }
                }
                printf("\n");
            }

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
            if (tablero1[fila][columna] == 1) {
                printf("\nImpacto!, le diste a %s",barcosJ1[0]);
                tablero1[fila][columna] = 3;
                impactosJ2++;
                turno=2;
            } else if (tablero1[fila][columna] == 4) { //Evalua en 4 porque ese es el valor de los barcos 2x2
                printf("\nImpacto!, le diste a %s",barcosJ1[1]);//Imprime el nombre de los barcos 2x2
                tablero1[fila][columna] = 3;
                impactosJ2++;
                turno=2;
            } else if (tablero1[fila][columna] == 0) {
                printf("\nDisparo fallido.\n");
                tablero1[fila][columna] = 2;
                turno=1;
            } else {
                printf("\nYa hab%cas disparado en esta coordenada.\n", 161);
                turno=2;
            }

            printf("Tiraste %d barcos.\n", impactosJ2);

            //Se acaba el juego cuando el jugador tire los 3 barcos
            if (impactosJ2 == 3) {
                printf("\nFelicidades %sEres la mera verdura del caldo!\n",jugadores[1]);
                turno=0;
            }
        }

    } while ( turno==1 || turno==2 );

    return 0;
}
