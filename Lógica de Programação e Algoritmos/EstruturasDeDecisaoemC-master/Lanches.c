#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
	int hamb;
	
	printf ("\nDigite o numero do lanche: \n 1 - BigMac \n 2 - Quarteir�o \n 3 - MacChicken \n 4 - Cheddar McMelt \n 5 - MacMax  \n ");
	scanf("%d", &hamb);
	
	system("CLS");
	
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
return 0;
}
