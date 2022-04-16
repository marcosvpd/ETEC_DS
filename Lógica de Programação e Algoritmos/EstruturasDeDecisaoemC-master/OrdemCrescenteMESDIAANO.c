#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL,"Portuguese");
  int dia1, dia2, mes1, mes2, ano1, ano2;
  printf("Digite a primeira data, começando pelo dia: ");
  scanf("%d", &dia1);
  printf("Mês: ");
  scanf("%d", &mes1);
  printf("Ano: ");
  scanf("%d", &ano1);
  
	printf("Agora Digite a segunda data, começando pelo dia: ");
  scanf("%d", &dia2);
  puts("Mês: ");
  scanf("%d", &mes2);
  puts("Ano: ");
  scanf("%d", &ano2);
  
  
                  if(ano1 > ano2) {
                          printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia2,mes2,ano2, dia1,mes1,ano1);
                  }
                  
                  else if (ano2 > ano1) {
                           printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia1,mes1,ano1, dia2,mes2,ano2);  
                  }
                  
                  else if (ano1 == ano2) {
                       
                       if (mes1 > mes2) {
                          printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia2,mes2,ano2, dia1,mes1,ano1);
                       }      
                       else if (mes2 > mes1) {
                             printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia1,mes1,ano1, dia2,mes2,ano2);
                       }
                       else if (mes1 == mes2) {
                             
                                       if (dia1 > dia2) {
                                          printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia2,mes2,ano2, dia1,mes1,ano1);
                                       }      
                                       else if (dia2 > dia1) {
                                             printf("Ordem crescente: %d/%d/%d , %d/%d/%d \n",dia1,mes1,ano1, dia2,mes2,ano2);
                                       }
                                       else if (dia1 == dia2) {
                                            printf("Datas iguais.\n");
                                       } 
                       }
                  }
  system("PAUSE");	
  return 0;
}
