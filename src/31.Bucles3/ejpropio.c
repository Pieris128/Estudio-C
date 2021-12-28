#include<stdio.h>

int main (){
	int n;
	int op;

	printf("Ingrese un numero: ");scanf("%i",&n);

	while(n<10){
		op=1+2+3+4+5+6+7+8+9+10;
		printf("La suma es: %i",op);break;
	}
	while(n>10){
		op=1*2*3*4*5*6*7*8*9*10;
		printf("La multiplicacion es: %i",op);break;
	}
		
	return 0;
}
