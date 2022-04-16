#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL,"Portuguese"); 
	float a,b,area;
	int n;
	n=1;
	
	do{
		printf ("\n%dº Triângulo!", n);
	printf ("\nDigite a base do triangulo: ");
	scanf ("%f", &b);
	printf ("\nDigite a altura do triangulo: ");
	scanf ("%f", &a);
	area = b * a/2;
	printf ("\nA area do seu triângulo e de: %f\n",area);
	printf("\n----------------- ----------------");
	n = n+1;
}while(n <=8);
	
	system ("PAUSE");
	return 0;
}
