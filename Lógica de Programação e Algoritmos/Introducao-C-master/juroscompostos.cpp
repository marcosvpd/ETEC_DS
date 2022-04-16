#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 	
	float mes1,mes2,mes3,saldo1,saldo2,saldo3;
	
	mes1 = 500 * 0.01;
	saldo1 = mes1 + 500;
	printf ("\n O saldo do primeiro mes foi de: %f", saldo1);
	mes2 = saldo1 * 0.01;
	saldo2 = mes2 + saldo1;
	printf ("\n O saldo do segundo mes foi de: %f", saldo2);
	mes3 = saldo2 * 0.01;
	saldo3 = mes3 + saldo2;
	printf ("\n O saldo do terceiro mes foi de: %f", saldo3);
	system ("PAUSE");
	return 0;
}
