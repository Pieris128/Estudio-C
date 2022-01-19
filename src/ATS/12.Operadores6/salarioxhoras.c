#include<stdio.h>

int main (){
	int horas;
	float salarioxhora,salariototal;

	printf("Digite el salario por hora: ");scanf("%f",&salarioxhora);
	printf("Digite la cantidad de horas trabajadas: ");scanf("%i",&horas);

	salariototal = salarioxhora * horas;

	printf("El salario total es de: $%.4f",salariototal);

	return 0;
}
