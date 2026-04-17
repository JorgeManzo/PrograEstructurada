#include<stdio.h>
int sumar(int a, int b){
    printf("%d", a+b);
    }

int main(){
    int a, b;
    printf("escribe los numeros que quieres sumar\n");
    scanf("%d", &a);
    scanf("%d", &b);
    sumar(a, b);

    return 0;
}
