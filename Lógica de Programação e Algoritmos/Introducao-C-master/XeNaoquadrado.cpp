#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int x,n,pot,result;
	printf("Informe o valor de X: ");
	scanf ("%d", &x);
	printf("Informe o valor de N: ");
	scanf ("%d", &n);
	result = x * n;
	pot = result * result;
	printf ("O valor ao quadrado desse numero e de: %d",pot);
	system ("PAUSE");
	return 0;
}
