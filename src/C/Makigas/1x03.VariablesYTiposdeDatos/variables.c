#include<stdio.h>

void imprimir_datos(int edad, char* nombre){
    printf("Hola, tu nombre es %s, y tu edad es %d",nombre,edad);
} 

int main (){
    imprimir_datos(20,"Pepito");
    return 0;
  }