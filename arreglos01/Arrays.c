#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=4;
    float temp[n];


    for(int i=0; i<n; i++){
        printf("Escibe la temperatura %i\n",i+1);
        scanf("%f",&temp[i]);
    }

    for(int i=0; i<n;i++){
        printf("%f\n", temp[i]);
    }

    return 0;
}
