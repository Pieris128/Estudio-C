//Realizar la suma de dos factoriales

#include<stdio.h>

int main (){
    int i, numero,numero2,factorial = 1,factorial2 = 1, suma = 0;

    printf("Digite un numero para hallar el factorial: ");
    scanf("%i",&numero);

    for(i=1;i<=numero;i++){
        factorial *= i;
    }

    printf("\n El factorial del numero es: %i",factorial);

    printf("\n Digite otro numero para realizar la suma de factoriales: ");
    scanf("%i",&numero2);
    
       for(i=1;i<=numero2;i++){
        factorial2 *= i;
    }

    printf("\n El factorial del numero es: %i",factorial2);

    suma = factorial2 + factorial;

    printf("\n La suma de los dos factoriales es: %i",suma);


    return 0;
}