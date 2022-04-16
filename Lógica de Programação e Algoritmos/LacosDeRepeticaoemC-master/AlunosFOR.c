#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
 int n;
 float n1,n2,n3,n4,soma,media;
 
 	for(n=1;n<=5;n++){
		
		printf("\n%dº Aluno",n);
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
	printf ("\nA media do aluno foi de %f\n",media);
	
	
}
	return 0;
}
