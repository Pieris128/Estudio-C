#include<stdio.h>

int main (){
	float parcial1,parcial2,parcial3,examenfinal,tpfinal,notafinal,promedioparciales,parciales,final,tp;

	printf("\nIngrese las calificaciones que obtuvo en los 3 parciales: ");
	scanf("%f %f %f",&parcial1,&parcial2,&parcial3);

	promedioparciales = (parcial1 + parcial2 + parcial3)/3;
	parciales = 0.55 * promedioparciales;
	
	printf("\nDigite la calificacion obtenida en su examen final: ");
	scanf("%f",&examenfinal);
	
	final = 0.30 * examenfinal;
	
	printf("\nDigite la calificacion obtenida en el trabajo practico final: ");
	scanf("%f",&tpfinal);

	tp = 0.15 * tpfinal;
	
	notafinal = tp + final + parciales;

	printf("Su nota final es: %.2f",notafinal);

	return 0;
}
