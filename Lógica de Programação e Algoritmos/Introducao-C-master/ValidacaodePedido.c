#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	char pedido[6];
	
	printf("\nDigite o pedido desejado: combo ou lanche \n");
	scanf ("%s", &pedido);
	
	if(strcmp(pedido, "combo")==0) {
		printf ("\nO valor será de R$25,00.");
	}
	else {
		printf ("\nO valor será de R$13,50.");
	}
		
	
	return 0;
}
