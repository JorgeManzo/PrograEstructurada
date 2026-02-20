#include<stdio.h>
int main(){
int x;
int suma=0;
scanf("%d", &x);
while(x!=0){
    suma +=x;
    printf("Pom un numero");
    scanf("%d", &x);
}

printf("El nuevo valor es %d",x);
return 0;
}
