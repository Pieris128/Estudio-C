#include<stdio.h>

int main(){
	int a;
	printf("Digite un numero: ");scanf("%i",&a);

	if ( a < 0 ){
		puts("El numero es negativo");
	}
	if ( a > 0 ){
		puts("El numero es positivo");
	}
	if ( a == 0 ){
		printf("El numero es 0");
	}
	return 0;
}
