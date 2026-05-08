#include <stdio.h>

    int f_doble(int n){
    printf("El doble es: %d\n",2*n);
    }

    int f_triple(int *n){
        *n=(*n)*3;
    printf("El triple es: %d\n",*n);
    }

int main(){
    int n;
    printf("Escribe un numero del 1 al 100\n");
    scanf("%d", &n);
    f_doble(n);
    printf("%d\n",n);
    f_triple(&n);
    printf("%d\n",n);
    return 0;
}
