#include<stdio.h>

int main(){
	int opcion, saldo=1000;
	float agregar, retirar;

	printf("\tBienvenido a su cajero virtual");
	printf("\n1. Ingreso en cuenta");
	printf("\n2. Retirar dinero");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);

	switch(opcion){
		case 1:printf("\nCuanto dinero quiere ingresar en cuenta: ");
		       scanf("%f",&agregar);
			saldo += agregar;
		       printf("El saldo total es de %i",saldo);
		       break;
		case 2:printf("Cuanto dinero desea retirar: ");
		       scanf("%f",&retirar);
		       if (retirar > saldo){
			       printf("La cantidad a retirar es mayor al saldo");
		       }
		       else{   saldo -= retirar;
			       printf("El saldo disponible es de: %i",saldo);
		       		break;
		       }
		case 3:	break;
		default:printf("Se equivoco de opcion de menu");
	}
	return 0;
	
}




