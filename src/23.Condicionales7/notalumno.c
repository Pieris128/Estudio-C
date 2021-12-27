#include<stdio.h>

int main (){
	char nota;

	printf("Digite la nota: ");
	scanf("%c",&nota);

	switch(nota){
		case 'A': printf("Excelente");break;
		case 'a': printf("Excelente");break;
		case 'B': printf("Notable");break;
		case 'b': printf("Notable");break;
		case 'C': printf("Aprobado");break;
		case 'c': printf("Aprobado");break;
		case 'D':
		case 'd': 
		case 'F': printf("Reprobado");break;
		case 'f': printf("Reprobado");break;
		default: printf("Se equivoco de nota");
	}
	return 0;
}

