#include<stdio.h>
#include<stdlib.h>

/*10) Elabore um programa que solicite ao usu�rio entrar com o valor do dia, m�s e ano(inteiros). Em seguida, imprima os valores lidos separados por uma barra(/).*/

int main()
{
  int dia, mes, ano;
  printf("Digite o dia: \n");
  scanf("%i", &dia);
  printf("Digite o m�s: \n");
  scanf("%i", &mes);
  printf("Digite o ano: \n");
  scanf("%i", &ano);
  printf("%i/%i/%i", dia, mes, ano);
  return 0;
}
