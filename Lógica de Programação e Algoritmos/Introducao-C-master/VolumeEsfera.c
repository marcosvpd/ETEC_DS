#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float raio, volume;
	printf("Insira o valor em cent�metros correspondente ao raio: \n");
	scanf("%f",&raio);
	volume = 4 * 3.14 * (pow(raio,3)) / 3;
	printf("O volume da esfera � : %2.f cm�\n",volume);
	return 0;
}
