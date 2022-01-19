# include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300; versión de punto flotante */
int main(void){

float fahr, celsius; //se usa float para mas exactitud
int lower, upper, step;
lower = 0 ; /* límite superior de la tabla de temperaturas */
upper = 300; /* límite superior */
step = 20 ; /* tamaño del incremento */
fahr = lower;
printf("Tabla de conversion Farenheit a Celsius\n");
while (fahr <= upper) {
celsius = (5.0/9.0) * (fahr-32.0);
printf("%3.0f %6.1f\n", fahr, celsius); //se agragaron espacios para mas prolijidad
fahr = fahr + step;}
return 0;
}