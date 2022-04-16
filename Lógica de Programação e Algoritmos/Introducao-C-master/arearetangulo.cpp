#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 	
	float a,b,area;
	printf ("Digite a base do retangulo: ");
	scanf ("%f", &b);
	printf ("Digite a altura do retangulo: ");
	scanf ("%f", &a);
	area = b * a;
	printf ("A area do seu retangulo e de: %f",area);
	system ("PAUSE");
	return 0;
}
