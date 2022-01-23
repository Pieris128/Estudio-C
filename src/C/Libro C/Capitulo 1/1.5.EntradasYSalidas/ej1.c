#include<stdio.h>

/*cuenta lineas, espacios y tabulaciones*/

int main (){
    int a,nl=0,ne=0,nt=0;
    printf("Introduzca texto a analizar (Recuerde oprimir ctrl+Z para efectuar el analisis del texto): \n");
   

    while((a = getchar()) != EOF){
        if (a == '\n'){
        nl++;
        }    
        if ( a == ' '){
        ne++;
        }
                if ( a == '\t'){
        nt++;
                }
            }
    printf("La cantidad de lineas es: %d\n",nl);
    printf("La cantidad de espacios es: %d\n",ne);
    printf("La cantidad de tabulaciones es: %d\n",nt);
    
    return 0;
}