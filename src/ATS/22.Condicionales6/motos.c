#include<stdio.h>

int main (){
	char marca[30];

	printf("\nBienvenido a nuestra distribuidora de motocicletas");
	printf("\nTenemos promociones para todas las marcas!!");
	printf("\nPara saber mas solo debe ingresar la marca");
	printf("\nTenemos Honda, Yamaha, Susuki y otras!");
	printf("\nIndique que marca es de su interes para saber mas: ");gets(marca);

	if(strcmp(marca,"honda")==0){
		printf("El descuento es del cinco porciento");
	}
	else if(strcmp(marca,"yamaha")==0){
		printf("El descuento es del ocho porciento");
	}
		else if(strcmp(marca,"susuki")==0){
			printf("El descuento es del diez porciento");}
			
			else if(strcmp(marca,"otra")==0){
				printf("El descuento es del dos porciento");
			}
	else {
		printf("\nPor favor, intente nuevamente");
		printf("\nRecuerde digitar las marcas en minusculas, para otras marcas digitar otra.");
	}

	return 0;
}
