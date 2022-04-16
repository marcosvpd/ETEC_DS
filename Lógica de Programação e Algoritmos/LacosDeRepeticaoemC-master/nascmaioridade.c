#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  int anonasc, idade, anoatual,n;
  n = 1;
  do{
  	printf("\n%dª Pessoa!", n);
  printf("\nDigite seu ano de nascimento: ");
  scanf("%d", &anonasc);
  printf("\nDigite o ano atual: ");
  scanf("%d",&anoatual);
  idade = anoatual - anonasc;
  if (idade < 18) {
     printf("\nNão atingiu a maioridade \n ");         
	printf("\n----------------- ----------------");
  }
  else 
       printf("\nAtingiu a maioridade \n");
	printf("\n----------------- ----------------");
	
	
	n = n + 1;
}while (n<=15);

  system("PAUSE");	
  return 0;
}
