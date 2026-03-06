#include<stdio.h>

int main(){
    float temp[24];
    float temp1, temp2;
    int dummy;
    printf("Direccion de mem de 2 flotantes: &temp1:%d, \n&temp2:%d\n", &temp1, &temp2);
    printf("Direccion de mem de temp[24]:%d\n", temp);
    printf("Direccion de mem de temp[24]:%d\n", &temp);
    printf("Direccion de mem de dummy:%d\n", &dummy);
    return 0;
}
