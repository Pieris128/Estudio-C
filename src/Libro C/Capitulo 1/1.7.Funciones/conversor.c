#include <stdio.h>

int conver(int f);

/* imprime la tabla Fahrenheit-Celsius
para fahr = 0, 20, ..., 300 */

int main (){
int farh,i;
farh = 0; 
for(i=0;i<=300;i=i+20)
printf("farh: %d, celsius: %d\n",farh,conver(i));
farh = farh + 20;
return 0;
}

int conver(int farh)
{
int p, celsius;
celsius = 5 * (p-32) / 9;
return celsius;
}