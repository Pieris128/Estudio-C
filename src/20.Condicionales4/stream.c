#include<stdio.h>
#include<string.h>
int main (){
	char nombre[40],sexo[20];
	int edad;

	printf("\nDigite su nombre: ");gets(nombre);
	printf("\nDigite su sexo: ");gets(sexo);
	if(strcmp(sexo,"masculino")==0){printf("\nDigite su edad: ");scanf("%i",&edad);

		if (edad >= 18){
		printf("Su nombre es: %s",nombre);
	}
	else{ 
		printf("Usted no es un masculino mayor de edad");
	}}

			else {
			printf("Usted no es apto");}

		
	return 0;
}
