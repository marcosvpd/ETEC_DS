#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
 	
 	int placa;
 	
	printf ("\nDigite o número final da placa do veículo: \n ");
	scanf("%d", &placa);
	
	system("CLS");
	
switch(placa) {
	case 1 :
	 printf ("O seu veículo não pode rodar na Segunda!");
	break;
	
	case 2 :
	 printf ("O seu veículo não pode rodar na Segunda!");
	break;
	
	case 3 :
	 printf ("O seu veículo não pode rodar na Terça!");
	break;
	
	case 4 :
	 printf ("O seu veículo não pode rodar na Terça!");
	break;

	case 5 :
	 printf ("O seu veículo não pode rodar na Quarta!");
	break;
	
	case 6 :
	 printf ("O seu veículo não pode rodar na Quarta!");
	break;
	
	case 7 :
	 printf ("O seu veículo não pode rodar na Quinta!");
	break;
	
	case 8 :
	 printf ("O seu veículo não pode rodar na Quinta!");
	break;
	
	case 9 :
	 printf ("O seu veículo não pode rodar na Sexta!");
	break;
	
	case 0 :
	 printf ("O seu veículo não pode rodar na Sexta!");
	break;
	
	default : 
		printf("Numero nao identificado!");
}
return 0;
}
