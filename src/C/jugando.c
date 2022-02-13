#include<stdio.h>

int division(int a, int b){
    return a / b;
}

int main(){
    int a = 8, b = 4;
    int resultado;
    resultado = division(a, b);
    printf("%i",resultado);
}