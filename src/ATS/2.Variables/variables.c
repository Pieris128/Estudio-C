//directivas y variables, macros, variables globales y locales, funcion suma int y float

#include <stdio.h> //librerias

#define PI 3.1416 //macro

int g = 5; //variable global

int main (){ //funcion principal

	int x = 10; //variable local

	float suma = 0; //suma flotante

		suma = PI + x;

printf("La suma es: %.2f",suma); //el punto dos me setea la cantidad de decimales que me arrojara la suma

return 0;

}
