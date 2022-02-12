#include<stdio.h>

enum diasemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

int main(){
    enum diasemana dia;

    dia = VIERNES;
    printf("%d\n",dia);

    return 0;
}