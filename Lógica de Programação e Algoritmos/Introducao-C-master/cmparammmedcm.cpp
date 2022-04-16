#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 	
	float cm,m,mm,dcm;
	printf ("Digite a medida em centimetros: ");
	scanf("%f",&cm);
	m = cm / 100;
	mm = cm / 0.10000;
	dcm = cm / 10;
	printf("\nA sua medida em metros e de: %f metros", m);
	printf("\nA sua medida em milimetros e de: %f milimetros", mm);
	printf("\nA sua medida em decimetros e de: %f decimetros", dcm);
	system ("PAUSE");
	return 0;
}
