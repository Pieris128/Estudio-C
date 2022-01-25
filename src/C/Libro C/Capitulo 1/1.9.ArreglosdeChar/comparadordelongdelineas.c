/*
while (hay otra línea)
if (es más larga que la anterior más larga)
guárdala
guarda su longitud
imprime la línea más larga
*/

#include <stdio.h>
#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */

int getline(char s[], int lim);
void copy(char to[], char from[]);
/* imprime la línea de entrada más larga */

int main(){

int len; /* longitud actual de la línea */
int max; /* máxima longitud vista hasta el momento */
char line[MAXLINE]; /* línea de entrada actual */
char longest[MAXLINE]; /* la línea más larga se guarda aquí */

max = 0 ;

while ((len = getline(line, MAXLINE)) > 0)
if (len > max) {
max = len;
copy(longest, line);
}
if (max > 0 ) /* hubo una línea */
printf("%s", longest);
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

/* copy: copia 'from' en 'to'; supone que to es suficientemente grande */

void copy(char to[], char from[])
{
int i;
i = 0 ;
while ((to[i] = from[i]) != '\0')
++i;
}