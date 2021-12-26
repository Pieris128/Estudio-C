#include<stdio.h>

int main() {
	int horas,min,seg,t1,t2,t3,total;

	printf("Digite el numero de horas: ");
	scanf("%i",&horas);

	printf("Digite el numero de minutos: ");
	scanf("%i",&min);

	printf("Digite el numero de segundos: ");
	scanf("%i",&seg);

	t1 = horas * 3600;
	t2 = min * 60;
	t3 = seg * 1;

	total = t1 + t2 + t3;

	printf("El equivalente en segundos es: %i",total);



	return 0;
}
