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
    tablero[1][2] = 1;
    tablero[3][4] = 1;
    tablero[0][0] = 1;

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

        } while(fila < 0 || fila > 4 || columna < 0 || columna > 4);
        
        // Evaluación del disparo
        if (tablero[fila][columna] == 1) {
            printf("Impacto\n");
            tablero[fila][columna] = 3;
            impactos++;
            intentos--;
        } 
        else if (tablero[fila][columna] == 0) {
            printf("Agua\n");
            tablero[fila][columna] = 2;
            intentos--; 
        } 
        else {
            printf("Ya habías disparado en esta coordenada, capitán.\n");
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