#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	int c,resp,n1,n2;
	float r;
	system("color f4");
	for(c=1;c<=5;c++){
		printf("\n O que voc� deseja fazer?\n\n 1 - Somar;\n 2 - Multiplicar;\n 3 - Dividir;\n 4 - Subtrair\n ");
		scanf("%d", &resp);
			
		switch(resp){
				case 1:
				system("CLS");
				printf(" ----SOMA---- \n Entre com o primeiro numero:\n ");
				scanf ("%d", &n1);
				printf("\n Entre com o segundo numero:\n ");
				scanf("%d", &n2);
				r = n1+n2;
				printf("\n O resultado da soma �: %.2f\n", r);
				break;
				case 2:
				system("CLS");
				printf(" ----MULTIPLICA��O---- \n Entre com o primeiro numero:\n ");
				scanf ("%d", &n1);
				printf("\n Entre com o segundo numero:\n ");
				scanf("%d", &n2);
				r = n1*n2;
				printf("\n O resultado da multiplica��o �: %.2f\n", r);
				break;
				case 3:
				system("CLS");
				printf(" ----DIVIS�O---- \n Entre com o primeiro numero:\n ");
				scanf ("%d", &n1);
				printf("\n Entre com o segundo numero:\n ");
				scanf("%d", &n2);
				r = n1/n2;
				printf("\n O resultado da divis�o �: %.2f\n", r);				
				break;
				case 4:
				system("CLS");
				printf(" ----SUBTRA��O---- \n Entre com o primeiro numero:\n ");
				scanf ("%d", &n1);
				printf("\n Entre com o segundo numero:\n ");
				scanf("%d", &n2);
				r = n1-n2;
				printf("\n O resultado da subtra��o �: %.2f\n", r);				
				break;					
				
	}
		}
		return 0;
	}
	
