#include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300 */
main ( ) {
int fahr, celsius; //declaracion de variables
int lower, upper, step;
lower = 0 ; /* límite inferior de la tabla de temperaturas */
upper = 300; /* límite superior */
step = 20 ; /* f tamaño del incremento */
fahr = lower; //estas son proposiciones de asignacion que asignan valores iniciales a las variables
while (fahr <= upper) {  //en esta linea se establece la condicion para la ejecucion del bucle, mientras se cumpla el bucle continua
celsius = 5 * (fahr-32) / 9; /* La razón de multiplicar por 5 y después dividir entre 9 en lugar de solamente
multiplicar por 5/9 es que en C, como en muchos otros lenguajes, la división de
enteros trunca el resultado: cualquier parte fraccionaria se descarta. Puesto que
5 y 9 son enteros, 5/9 sería truncado a cero y así todas las temperaturas Celsius
se reportarían como cero */
printf("%d\t%d\n", fahr, celsius); /* Su primer argumento es una cadena
de caracteres que serán impresos, con cada % indicando en donde uno de
los otros (segundo, tercero, ...) argumentos va a ser sustituido, y en qué forma
será impreso. Por ejemplo, %d especifica un argumento entero, de modo que la
proposición
printf(''%d\t%d\n", fahr, celsius);
hace que los valores de los dos enteros fahr y celsius sean escritos, con una tabulación
(\t) entre ellos */
fahr = fahr + step;
return 0;
}
}