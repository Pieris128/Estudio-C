#include<stdio.h>

int main(){ 
    int x = 10;
    int* dirX = &x; 

    printf("x = %d\n",x);
    printf("Direccion de memoria de x = %u\n",dirX);
    
}
/* 
Un puntero es una variable que almacena la dirección de memoria de un objeto
*/ 