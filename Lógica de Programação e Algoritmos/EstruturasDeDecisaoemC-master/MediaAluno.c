#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	 
	 
	float n1,n2,n3,n4;
	float soma,media;
	
	printf ("\nDigite a nota do primeiro bimestre: ");
	scanf("%f", &n1);
	printf ("\nDigite a nota do segundo bimestre: ");
	scanf("%f", &n2);
	printf ("\nDigite a nota do terceiro bimestre: ");
	scanf("%f", &n3);
	printf ("\nDigite a nota do quarto bimestre: ");
	scanf("%f", &n4);
	soma = n1 + n2 + n3 + n4;
	media = soma/4;
	
	if(media == 5 && media <= 10){
		printf ("Você foi aprovado com media %.2f", media);
	}
	else{
		if(media < 5){
			printf ("Você foi reprovado com media %.2f", media);
		}
	}
	
	
	

	return 0;
}
