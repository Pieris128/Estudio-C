#include<stdio.h>

int main (){
	float a,b,c,media=0;
	printf("Digite 3 numeros cualesquiera: ");scanf("%f %f %f",&a,&b,&c);
	media = (a+b+c)/3;
	printf("\nLa media aritmetica es: %f",media);
	return 0;
}
