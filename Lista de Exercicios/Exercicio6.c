#include<stdio.h>
#include<stdlib.h>

/*6) Fa�a um programa que leia um valor do tipo double e depois o imprima na forma de nota��o cientifica.*/

int main()
{
  double numero;
  printf("Digite um valor do tipo double: ");
  scanf("%f", &numero);
  printf("O valor digitado foi: %e", numero);
  return 0;
}
