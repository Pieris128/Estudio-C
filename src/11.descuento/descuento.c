#include<stdio.h>

int main (){
	float a,d=0,b;
	printf("Digite el valor total de la compra: ");
	scanf("%f",&a);

	d = (15 * a)/100;
	b = a - d;


	printf("\nEL valor del descuento es de: %.2f",d);
	printf("\nEl total a pagar es de: %.2f",b);

	return 0;

}
