#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float hit;
	
	printf("Digite a sua hora de inicio de turno: \n");
	scanf ("%f", &hit);
	
	if (hit >= 5 && hit < 13){
		printf ("O seu turno e de manha.");
	}
	else{
		if(hit >= 13 && hit < 21){
			printf ("O seu turno e de tarde.");
		}
		else{
			if(hit >= 21 || hit <= 4.59)
				printf ("O seu turno e de noite.");
		}
			}
			return 0;
		}

