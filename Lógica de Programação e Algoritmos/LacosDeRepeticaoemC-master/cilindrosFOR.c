#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	float ra,h,ar;
	int n;
	
	for(n=1; n<=10; n++){
	
	printf("Calculando a área de 10 latas\n%dº Lata\n", n);
	printf("\nDigite o raio da lata:\n");
	scanf("%f", &ra);
	
	printf("Digite a altura da lata:\n");
	scanf("%f", &h);
	ar = 2 * 3.14 * ra *(ra + h);
	printf("A area externa da lata e: %.2f\n", ar);
	
	}
}	
