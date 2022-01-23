#include <stdio.h>

int main (){
	int a;
	printf("Digite un numero entero cualquiera: ");scanf("%i",&a);

	if ( a % 2 == 0){
		puts("El numero es par");
	}
	if ( a % 2 == 1){
		puts("El numero es impar");
	}
	return 0;
}
