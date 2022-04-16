#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
		float a,b,area;
	printf ("Digite a base do triangulo: ");
	scanf ("%f", &b);
	printf ("Digite a altura do triangulo: ");
	scanf ("%f", &a);
	area = b * a/2;
	printf ("A area do seu retangulo e de: %f",area);
	system ("PAUSE");
	return 0;
}
