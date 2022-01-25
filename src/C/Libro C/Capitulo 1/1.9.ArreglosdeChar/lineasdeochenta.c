/* Programa que imprima las lineas de texto con mas de ochenta caracteres que haya en la entrada*/ 

#include<stdio.h>

#define min 80
#define max 1000

int getline(char s[], int lim); //min: minimo de caracteres para contabilizar la linea 

int main(){

int len; /* longitud actual de la línea */
char line[max]; /* línea de entrada actual */

while ((len = getline(line, max)) > 0)
if (len > min) {
printf("%s\n",len);
} 
return 0 ;
}

/* getline: lee una línea en s, regresa su longitud */
int getline(char s[], int lim) 
{
int c, i;
for (i = 0; i<lim-1 && (c = getchar( )) !=EOF && c != '\n'; ++i)
s[i] = c;
if (c == '\n') {
s[i] = c;
++i;
}
s[i]='\0'; // '\0' es caracter nulo de valor 0
return i;
}
