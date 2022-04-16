
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
	float saldo = 500, juros = 1;
	
	while(juros<=3){
		saldo = (saldo * 0.01) + saldo;
		juros=juros+1;
		
		printf("O saldo é: %f \n", saldo);
	}
	return 0;
}
