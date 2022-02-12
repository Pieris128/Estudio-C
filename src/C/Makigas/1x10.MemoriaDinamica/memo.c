#include<stdio.h>
#include<stdlib.h> //esta libreria permite el trabajo con memoria dinamica

//aqui aprendemos a reservar memoria

int main (){
    printf("¿Cuantos elementos quieres almacenar?");
    int longitud;
    scanf("%d", &longitud);
    
    float* valores = (float*) malloc(longitud * sizeof(float));

}