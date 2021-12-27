#include<stdio.h>
#include<stdlib.h>
int main (){
	char tecla;

	printf("\nPrograma de borrado de pantalla!!!");
	printf("\n----------------------------------");
	printf("\nCon que si perra malvada");
	printf("\nTe vere en el otro lado");
	printf("\nDigite el numero 1: ");
	scanf("%c",&tecla);

	if (tecla=='1'){
		system("cls");
		printf("Ha funcionado el limpiado de pantalla");
	}
	else{
		fflush(stdin);
		printf("\nNo ha funcionado el limpiado de pantalla");
		printf("\nPor favor digite el numero 1: ");
		scanf("%c",&tecla);
		if(tecla=='1'){
			system("cls");
		}
		else{
			printf("No funciono");
	}
	}
	return 0;
}
