#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int idade,n;
	for(n=1;n<=10;n++){
		puts("\nCalculando a idade de 10 nadadores!");
	printf("Digite a idade do %d� nadador: \n",n);
	 scanf("%d", &idade);
	 
	switch(idade) {
	case 5 :
	 printf ("Categoria infantil A!");
	break;
	
	case 6 :
	 printf ("Categoria infantil A!");
	break;
	
	case 7 :
	 printf ("Categoria infantil A!");
	break;

	case 8 :
	 printf ("Categoria infantil B!");
	break;
	
	case 9 :
	 printf ("Categoria infantil B!");
	break;
	
	case 10 :
	 printf ("Categoria infantil B!");
	break;
	
	case 11:
	 printf ("Categoria Juvenil A!");
	break;
	
	case 12:
	 printf ("Categoria Juvenil A!");
	break;

	case 13 :
	 printf ("Categoria Juvenil A!");
	break;
	
	case 14 :
	 printf ("Categoria Juvenil B!");
	break;

	case 15 :
	 printf ("Categoria Juvenil B!");
	break;
	
	case 16 :
	 printf ("Categoria Juvenil B!");
	break;
	
	case 17 :
	 printf ("Categoria Juvenil B!");
	break;

		
}

	if(idade > 18) {
		printf("Categoria Senior!");
	}
}
return 0;
}
