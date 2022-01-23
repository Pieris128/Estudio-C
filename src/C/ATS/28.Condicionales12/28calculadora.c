#include<stdio.h>
#include<math.h>

int main (){
	int num,opcion;

	printf("Benvenutti a il calculatore");
	printf("\n1. Calcular cubo de un numero");
	printf("\n2. Definir si el numero es par o impar");
	printf("\n3. Salir");
	printf("\nPrego, elija una opcione");
	scanf("%i",&opcion);

	switch(opcion){
		case 1:printf("Ingrese un numero: ");scanf("%i",&num);
		       num = pow (num,3);
		       printf("El numero elevado al cubo es: %i",num);
		       break;
		case 2:printf("Ingrese un numero: ");scanf("%i",&num);
		       if (num%2==0){
			    printf("El numero es par");
			    break;
		       }
		       else {
			       printf("El numero es impar");
		       
		       break;
		       }
		case 3:break;

		      }
	return 0;
}
