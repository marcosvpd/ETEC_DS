#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
 int candidatos,resp,votos,vbranco,vnulo;
 int c1,c2,c3,c4,total;
 c4 = 0;
 vnulo = 0;
 do{
 	system("CLS");
 	printf("\nVote em seu candidato!\n 1 - Candidato 1;\n 2 - Candidato 2;\n 3 - Candidato 3;\n 4 - Candidato 4;\n 0 - Voto branco.\n  ");
 	scanf("%d", &candidatos);
 	
 	switch(candidatos){
 		case 0:
 			printf("\nVoto branco!");
 			vbranco = vbranco + 1;
 		break;
 		case 1:
 			printf("\nVoto calculado!");
 			c1 = c1 + 1;
 		break;
 		case 2:
 			printf("\nVoto calculado!");
 			c2 = c2 + 1;
 		break;
 		case 3:
 			printf("\nVoto calculado!");
 			c3 = c3 + 1;
 		break;
 		case 4:
 			printf("\nVoto calculado!");
 			c4 = c4 +1;
 		break;
 		default:
 			printf("\nVoto nulo");
 			vnulo = vnulo +1;
 		break;
	 }
  		printf("\nDeseja votar novamente? 1 para sim e 2 para não.");
 		scanf("%d", &resp);
 }while (resp == 1);
 	system("CLS");
 	total = c1+c2+c3+c4+vbranco+vnulo;
 	printf("Quantidade total de votos: %d",total);
 printf ("\nQuantidade de votos no candidato 1: %d", c1);
 printf ("\nQuantidade de votos no candidato 2: %d", c2);
 printf ("\nQuantidade de votos no candidato 3: %d", c3);
 printf ("\nQuantidade de votos no candidato 4: %d", c4);
 printf ("\nQuantidade de votos brancos: %d", vbranco);
 printf ("\nQuantidade de votos nulos: %d", vnulo);
 
 
 
 return 0;
 
 
}
