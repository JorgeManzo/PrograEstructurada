#include<stdio.h>

void calc(int opc, int x, int y, int res){
    if(opc==1){
        res=x+y;
        printf("El resultado es: %d\n\n",res);
    }else if(opc==2){
        res=x-y;
        printf("El resultado es: %d\n\n",res);
    }else{
        menu=0;
    }
}
int main(){
    int menu, opc, x, y, res;
    do{
    printf("Selecciona una opcion \n1.Analizar num\n2.Calculadora\n3.Salir\n");
    scanf("%d", &menu);
    switch(menu){
    case 1:
        printf("Escribe tu numero para saber si es par o impar:");
        scanf("%d", &x);
        if(x%2==0){
            printf("Es par\n\n");
        }else{
            printf("Es impar\n\n");
        }

    break;

    case 2:
        printf("Que deseas hacer?\n1.Sumar\n2.Restar\n3.Salir\n");
        scanf("%d",&opc);
        printf("Escribe los operandos\n");
        scanf("%d%d",&x,&y);

        switch(opc){
        case 1:
            calc(opc, x, y, res);
        break;

        case 2:
            calc(opc, x, y, res);
        break;

        case 3:
            menu=0;
        break;

        default:
            break;
        }



        break;

    case 3:
        return 0;
        break;

    default:
        break;
    }

    }while(menu!=3);

}
