//Hacer un programa que imprima la suma de todos los pares desde 1 a n y diga cuantos numeros hay

#include<stdio.h>

int main (){
    int n, suma = 0, cont = 0, i;

    printf("\n Señale hasta que numero quiere realizar la suma de todos los pares: ");
    scanf("%i",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            cont ++;
        }
        if (i%2==0)
        {
            suma = suma + i;
                   }
         
    }
    printf("\n La suma de los numeros pares hasta %i es igual a: %i",n,suma);
    printf("\n Hasta %i se han encontrado %i numeros pares",n,cont);

    return 0;
}