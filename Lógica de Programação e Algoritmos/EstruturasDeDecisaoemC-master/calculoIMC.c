#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");

	float peso,altura,imc,alt;
	
	printf ("Digite seu peso: \n");
	scanf ("%f", &peso);
	
	printf ("Digite sua altura: \n");
	scanf ("%f", &altura);
	alt = altura * altura;
	imc = (peso/alt);
	printf ("Seu imc � de: %f ", imc);
	if (imc < 18){
		printf ("Voc� est� em estado de magreza");
	}
	else{
		if(imc = 18 && imc < 25){
			printf("Voc� est� saud�vel ");
			}
			else{
				if(imc = 25 && imc < 30){
					printf ("Voc� est� com sobrepeso");
				}
				else{
					if(imc >= 30){
						printf ("Voc� est� na obesidade");
					}
				}
			}
	}
	return 0;
}

