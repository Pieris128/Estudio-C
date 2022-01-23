// Hacer un bucle do while para imprimir las letras minusculas de alfabeto

#include<stdio.h>

int main (){
    char letra = 'a'; 

    do{
        printf("%c\n",letra);
        letra++; /*Para entender esta resolucion hay que tener en cuenta que
        los caracteres se guardan con el sist ascii donde cada letra equivale a un valor hexadecimal
        tal que a = 61h, b = 62h, etc */
    }while(letra<='z');

    return 0;
}