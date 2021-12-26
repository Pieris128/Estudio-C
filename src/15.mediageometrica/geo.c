#include<stdio.h>
#include<math.h>

int main (){
	float a,b,c,media;

	printf("Digite tres numeros cualesquiera: ");
	scanf("%f %f %f",&a,&b,&c);

	media = cbrt(a*b*c);

	printf("La media geometrica es: %f",media);

	return 0;
}
