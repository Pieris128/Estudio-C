#include<stdio.h>
#include<math.h>
int main (){
	int a;
	float raiz;
	printf("Digite un numero entero cualquiera: ");scanf("%i",&a);

	if ( a > 0 ){
		raiz = sqrt(a);
		printf("La raiz del numero es: %.2f",raiz);
	}
	else { 
		printf("El numero tiene raiz imaginaria");
	}
	
	return 0;
}

