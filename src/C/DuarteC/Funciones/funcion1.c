#include<stdio.h>

void hola(void);
void adios(void);
int suma(int a, int b);

int main (void){
    int a;
    hola();
    adios();
    a = suma(8, 6);
    printf("%d",a);
    return 0;
}

void hola(void){
    printf("hola!\n");
}

void adios(void){
    printf("adios!\n");
}

int suma(int a, int b){
    return a + b;
}