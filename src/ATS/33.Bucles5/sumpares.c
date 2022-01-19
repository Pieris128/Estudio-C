#include<stdio.h>

int main (){
	int n,m,suma=0,i;

	printf("Digite el numero por el cual comenzar: ");scanf("%i",&n);
	printf("\nDigite hasta cual numero realizar la operacion: ");scanf("%i",&m);

	i = n;

	while(i<=m){
		if (i%2==0){
		suma=suma+i;
		}

		i++;
	}

	printf("\nLa suma es: %i",suma);


	return 0;
}
