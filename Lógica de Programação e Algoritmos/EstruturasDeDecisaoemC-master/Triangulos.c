#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	float a,b,c;
	
	printf ("Digite o valor de A: \n");
	scanf ("%f", &a);

	printf ("\nDigite o valor de B: \n");
	scanf ("%f", &b);

	printf ("\nDigite o valor de C: \n");
	scanf ("%f", &c);
	
	if(a == b && a == c && b == c){
		printf(" O triangulo � equil�tero!\n");
	}
	else{
		if(a == b && a != c){
			printf(" O triangulo � is�sceles!\n");
		}
		else{
			if(a == c && a != b){
					printf(" O triangulo � is�sceles!\n");
			}
			else{
				if(b == c && b != a){
							printf(" O triangulo � is�sceles!\n");
						}
			
			else{
				if(a != c && a != b && b != c ){
					printf(" O triangulo � escaleno!\n");
				}
				if(a > b + c || b > a + c || c > a + b){
					printf ("\n Porem as areas nao condizem para ser um triangulo!");
				}
			}
		}
	}
	return 0;
	
}
}
