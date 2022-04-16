#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL,"Portuguese"); 	
	float valorhora,h_trabalho,bonus,s_bruto,s_liquido;
	int n_dp,func;
	func = 1;
	
	do {
		
	printf("\n%dº Funcionario!\n", func);
	printf ("Digite o numero de dependentes: ");
	scanf ("%d", &n_dp);
	printf ("\nDigite o valor hora: ");
	scanf ("%f", &valorhora);
	printf ("\nDigite suas horas trabalhadas: ");
	scanf ("%f", &h_trabalho);
	bonus = n_dp * 300;
	s_bruto = valorhora * h_trabalho;
	s_liquido = s_bruto + bonus;
	printf ("\nO seu salario bruto é de: %.2f \nE o seu salario líquido é de: %.2f", s_bruto,s_liquido);
	printf("\n--------------      --------------\n");
	func = func+1;
	
}while (func <= 10);
		  system ("PAUSE"); 
	  return 0;
}
