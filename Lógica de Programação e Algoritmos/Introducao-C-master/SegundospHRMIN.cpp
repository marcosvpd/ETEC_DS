#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float seg,min,hr;
	printf("Digite o tempo em segundos: ");
	scanf ("%f", &seg);
	min = seg/ 60;
	hr = min / 60;
	printf ("O tempo em minutos do seu valor e de: %f",min);
	printf ("\nE o tempo em horas de seu valor é de: %f",hr);
	system ("PAUSE");
	return 0;
}
