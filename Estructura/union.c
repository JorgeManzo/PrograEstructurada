#include<stdio.h>
union Dato{
    int entero;
    float decimal;
};

int main(){
    union Dato x;

    x.entero=10;
    printf("%d\n", x.entero);
    return 0;
}
