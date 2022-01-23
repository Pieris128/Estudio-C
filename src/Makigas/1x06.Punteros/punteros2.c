#include<stdio.h>

/*
void jugar(int n){
    n = (n+3)*2-1;
    printf("%d\n",n);
}
int main (){
    int x=10;
    jugar(x);
    printf("%d\n",x);
    return 0;
}

ver que al ejecutar este programa, el valor de x al ejecutar
la funcion jugar(x) es de 25, lo que se imprime en pantalla
seguido se imprime el valor original de x = 10
Esto se debe a que jugar(x) trabaja con una copia de x, el original no se le entrega
x lo que en main el valor de x sigue siendo 10 incluso despues de ejecutar jugar(x)
*/ 

void jugar(int* n){
   int y = *n; //al poner un * a la izq de un punt se recupera el valor guardado en esa direcc
   y = (y+2)/2+2-(3*y);
   *n = y;
}
int main (){
    int x=10;
    jugar(&x);
    printf("%d\n",x);
    return 0;
}