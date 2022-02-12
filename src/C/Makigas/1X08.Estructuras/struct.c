#include<stdio.h>
#include<string.h>

struct cuenta 
{
    /* data */
    char nombre [30];
    char apellido[40];
    int identificador;
    int saldo;
};

int main (){
    struct cuenta c1;
    c1.saldo = 400;
    c1.identificador = 1235;
     return 0;
}
