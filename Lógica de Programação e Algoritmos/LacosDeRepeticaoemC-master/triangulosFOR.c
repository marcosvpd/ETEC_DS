#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	int n;
	float a,b,c;
	
	for(n=1;n<=10;n++){
	printf("\nCalculando a �rea de 10 tri�ngulos!\n %d� Triangulo\n",n);
	printf ("\nDigite o valor de A: \n");
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
}}
	return 0;
	
}
