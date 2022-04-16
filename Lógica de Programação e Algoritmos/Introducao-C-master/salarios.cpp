#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 	
	float valorhora,h_trabalho,bonus,s_bruto,s_liquido;
	int n_dp;
	
	printf ("Digite o numero de dependentes: ");
	scanf ("%d", &n_dp);
	printf ("\nDigite o valor hora: ");
	scanf ("%f", &valorhora);
	printf ("\n Digite suas horas trabalhadas: ");
	scanf ("%f", &h_trabalho);
	bonus = n_dp * 300;
	s_bruto = valorhora * h_trabalho;
	s_liquido = s_bruto + bonus;
	printf ("\nO seu salario bruto é de: %f \ne o seu salario líquido é de: %f", s_bruto,s_liquido);
		  system ("PAUSE"); 
	  return 0;
}
