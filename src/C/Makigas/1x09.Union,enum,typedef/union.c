#include<stdio.h>

union mi_union_t {
    int entero;
    float flotante;
};

int main (){
    union mi_union_t u;
    u.entero = 123456789;
    u.flotante = 123;
    printf("entero es igual a %d \n",u.entero);
    return 0;
}