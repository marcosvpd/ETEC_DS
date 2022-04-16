#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
	int pessoa;
	float peso,altura,imc,alt;
	
	printf("Deseja calcular seu IMC?\n");
	printf("1 - SIM\n2 - NAO\n");
	scanf("%d", &pessoa);
	
	while(pessoa == 1){
	
	printf ("Digite seu peso: \n");
	scanf ("%f", &peso);
	
	printf ("Digite sua altura: \n");
	scanf ("%f", &altura);
	alt = altura * altura;
	imc = (peso/alt);
	printf ("Seu imc é de: %f ", imc);
	if (imc < 18){
		printf ("Você está em estado de magreza");
	}
	else{
		if(imc = 18 && imc < 25){
			printf("Você está saudável ");
			}
			else{
				if(imc = 25 && imc < 30){
					printf ("Você está com sobrepeso");
				}
				else{
					if(imc >= 30){
						printf ("Você está na obesidade");
					}
				}
			}
	}
		printf ("\nDeseja calcular novamente?\n ");
	    printf ("\n1 – para Sim ou 2 – para Não\n");
        scanf("%d",pessoa);

}
	return 0;
}

