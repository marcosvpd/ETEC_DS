#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	int n [10];
	int i,p;
	
	for(i=1;i<=10;i++){
		printf("Digite o %dº valor: ",i);
		scanf("%d", &n[i]);
	}
	system("CLS");
	for(p=1;p<=10;p++){
		printf("\n%dº Valor: %d\n", p , n[p]);
	}
		return 0;
}
