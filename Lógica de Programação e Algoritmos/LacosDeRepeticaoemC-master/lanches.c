#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
	int hamb,resp;
	
	do{
	printf ("\nDigite o numero do lanche: \n 1 - BigMac \n 2 - Quarteir�o \n 3 - MacChicken \n 4 - Cheddar McMelt \n 5 - MacMax  \n ");
	scanf("%d", &hamb);
switch(hamb) {
	case 1 :
	 printf ("Voc� escolheu BigMac!");
	break;
	
	case 2 :
	 printf ("Voc� escolheu Quarteir�o!");
	break;
	
	case 3 :
	 printf ("Voc� escolheu MacChicken!");
	break;

	case 4 :
	 printf ("Voc� escolheu Cheddar McMelt!");
	break;
	
	case 5 :
	 printf ("Voc� escolheu MacMax!");
	break;
	
}
	printf("\nDeseja ver outros lanches? 1 para sim 2 para n�o\n");
	scanf("%d", &resp);
	}while (resp == 1);
return 0;
}
