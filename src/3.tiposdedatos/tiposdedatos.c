//tipos de datos

#include <stdio.h>

int main (){
	
	char a = 'e'; //tam=1byte rango:0a255 las comillas simples se ponen con alt+39 
	short b = -15; //tam=2bytes rango:-128a127
	int c = 1024; //tam=2bytes rango -32768a32767
	unsigned int d = 128; //2bytes rango 0a65535
	long e = 123456; //tam=4bytes rango -2147483648a2147483637
	//importante: para imprimir long se usa %li 
	float f = 15.678; //tam=4bytes 
	double m = 123123.123123; //tam=8bytes 
	//importante para imprimir double se usa %lf 
	
printf("El elemento es: %lf",m);

return 0;

}
