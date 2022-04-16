#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	float multa;
	int quantidade,n;
	
	n = 1;
	
	do{
		printf("\n%dº Pescador!", n);
	printf("\nQuilos pescados: ");
	scanf("%d",&quantidade);
	if (quantidade <= 50) {
		printf("\nQuantidade permitida.");
				printf("\n----------------- ----------------");
	}
	else {
		multa = (quantidade - 50) * 4;
		printf("\nQuantidade acima da permitida, multa de R$ %2.f \n",multa);
				printf("\n----------------- ----------------");
	}
n = n+1;

}while(n <= 5);
	system("PAUSE");
	return 0;
}
