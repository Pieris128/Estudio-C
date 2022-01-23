/* pedir dos numeros al usuario, sumarlos, restarlos, multiplicarlos y dividirlos*/ 

#include<stdio.h>

int main (){
	
	int n1, n2, suma=0,resta=0,mult=0,div=0;

	printf("Digite el primer numero: ");
	scanf("%i",&n1);

	printf("Digite el segundo numero: ");
	scanf("%i",&n2);

	suma = n1 + n2;
	resta = n1 - n2;
	mult = n1 * n2;
	div = n1/ n2;

	printf("\nla suma es: %i",suma);
	printf("\nla resta es: %i",resta);
	printf("\nla multiplicacion es: %i",mult);
	printf("\nla division es: %i",div);
	
	return 0;

}
