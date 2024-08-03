#include<stdio.h>
#include<stdlib.h>

/*10) Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano(inteiros). Em seguida, imprima os valores lidos separados por uma barra(/).*/

int main()
{
  int dia, mes, ano;
  printf("Digite o dia: \n");
  scanf("%i", &dia);
  printf("Digite o mês: \n");
  scanf("%i", &mes);
  printf("Digite o ano: \n");
  scanf("%i", &ano);
  printf("%i/%i/%i", dia, mes, ano);
  return 0;
}
