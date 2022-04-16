#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	
	int alunos;
	
	float n1,n2,n3,n4;
	float soma,media;
	
	alunos = 1;
	while(alunos <= 7){
	
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
	printf ("A media do aluno foi de %f",media);
	
	alunos = alunos + 1;
	
	printf ("\nDigite o numero do aluno: %d a 7\n", alunos);
	scanf ("%d", &alunos);
}
	return 0;
}
