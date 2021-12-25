#include<stdio.h>
#include<math.h>

int main (){
	float D,C,PI=3.1416; 
	printf("Inserte el diametro en centimetros: ");
	scanf("%f",&D);
	C = D * PI;
	printf("La circunferencia es de %.2f cm",C);
	return 0;
}
