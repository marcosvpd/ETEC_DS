#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int n, resto;
	printf("Digite um N�mero: ");
	scanf("%d",&n);
	resto = n % 2;
	if (resto == 0) {
		printf("Este n�mero � par");
	}
	else
		printf("Esse n�mero � impar");
	return 0;
}
