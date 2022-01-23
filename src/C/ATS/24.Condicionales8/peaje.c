#include<stdio.h>
#include<string.h>

int main(){
	char peaje [20];
	int caso;

	printf("\nDigite el motivo de su viaje");
	printf("\nEste puede ser automovil, autobus, motocicleta: ");gets(peaje);

	if (strcmp(peaje, "automovil")==0){
		caso=1;}
	if (strcmp(peaje, "autobus")==0){
		caso=2;}
	if  (strcmp(peaje, "motocicleta")==0){
		caso=3;}
	
	switch (caso){
		case 1: printf("El peaje es de 500 pesos");break;
		case 2: printf("El peaje es de 3000 pesos");break;
		case 3: printf("El peaje es de 300 pesos");break;
		default: printf("Vehiculo no autorizado");
	}
	
	return 0;
}
