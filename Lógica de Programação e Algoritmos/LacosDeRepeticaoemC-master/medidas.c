#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");

	float cm,m,mm,dcm;
	int n;
	n = 1;
	do{
	printf("\n%dª Medida!", n);
	printf ("\nDigite a medida em centimetros: ");
	scanf("%f",&cm);
	m = cm / 100;
	mm = cm / 0.10000;
	dcm = cm / 10;
	printf("\nA sua medida em metros e de: %f metros", m);
	printf("\nA sua medida em milimetros e de: %f milimetros", mm);
	printf("\nA sua medida em decimetros e de: %f decimetros", dcm);
		printf("\n----------------- ----------------");
	n = n+1;
}while (n <= 10);
	system ("PAUSE");
	return 0;
  
  
}
