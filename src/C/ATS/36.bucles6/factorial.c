//Realizar el factorial de un numero

#include<stdio.h>

int main (){
    int i, numero,factorial = 1;

    printf("Digite un numero para hallar el factorial: ");
    scanf("%i",&numero);

    for(i=1;i<=numero;i++){
        factorial *= i;
    }

    printf("\n El factorial del numero es: %i",factorial);
    
    return 0;
}