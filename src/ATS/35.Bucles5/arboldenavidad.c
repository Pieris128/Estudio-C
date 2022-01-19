/* ej arbol de navidad; importante ver el uso de bucle for anidados
ver que se imprimen espacios y luego astericos*/ 

#include<stdio.h>

int main (){
    int i,h,j;
    
      printf("Ingrese la cantidad de pisos que tendra su arbol: ");
    scanf("%i",&h);

    for (i=0;i<=h;i++){
       
        for(j=1;j<=h-i;j++)
            printf(" ");
        
        for(j=0;j<=i*2;j++)
            printf("*");
        
        printf("\n");  
               
    }

    return 0;
}