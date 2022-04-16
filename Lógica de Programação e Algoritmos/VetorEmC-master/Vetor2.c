#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	int a [10];
	int b [10];
	int i,p;
	
	for(i=1;i<=10;i++){
		printf("\nDigite o %dº número: ", i);
		scanf("%d", &a[i]);
		
		if(a[i] % 2 == 0){
	b[i] = a[i] * 5;
		}
		else {
	b[i] = a[i] + 5;
		}
	}
	
	for(p=1;p<=10;p++){
		printf("\n%dº Valor: %d\n", p , b[p]);
	}
	return 0;	
}

