#include <stdio.h>

int main (){
	int n,i,suma=0,suma_pares=0,suma_impares=0,ne;

	printf("Digite el total de elementos a sumar: ");scanf("%i",&n);

	i = 1;

	while(i<=n){
		if(i%2==0){
			ne = i * (-1);
			suma_pares += ne;

		}
		else{
			suma_impares += i;

		}
	i++;
	}

	suma = suma_pares + suma_impares;
	
	printf("\n La suma total es: %i",suma);

	return 0;
}
