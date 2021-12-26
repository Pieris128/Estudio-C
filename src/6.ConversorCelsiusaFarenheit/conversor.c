//conversor grados celsius a farenheit


#include<stdio.h>

int main (){
	float n;
	
	printf("Ingrese la temperatura en grados Celsius: ");
	scanf("%f",&n);
	
	n *= 1.8; 
	n += 32;
	
	printf("La temperatura es de: %.2f F",n);
	
	return 0;

	}
