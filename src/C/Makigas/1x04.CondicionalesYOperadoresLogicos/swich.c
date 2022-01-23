#include<stdio.h>

void imprimir_dia(int numero_de_dia){
switch ((numero_de_dia))
{
case 1:
    printf("Lunes");
    break;
case 2:
    printf("Martes");
    break;
case 3:
    printf("Miercoles");
    break;
case 4:
    printf("Jueves");
    break;
case 5:
    printf("Viernes");
    break;
case 6:
    printf("Sabado");
    break;
case 7:
    printf("Domingo");
    break;
default:
    printf("La entrada no es valida");
    break;
}

}

int main (){
    imprimir_dia(2);
    return 0;
}