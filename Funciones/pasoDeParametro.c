#include<stdio.h>
void duplicar(int *x){
    *x= (*x)*2;
    }

int main(){
    int n=4;
    duplicar(&n);
    printf("%d",n);
    return 0;
}
