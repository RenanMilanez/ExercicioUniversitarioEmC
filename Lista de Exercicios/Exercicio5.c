#include<stdio.h>
#include<stdlib.h>

/*5)Faça um programa que leia um valor do tipo float e depois imprima usando o operador "%d". Veja o que aconteceu.*/

int main()
{
  float numero;
  printf("Digite um valor do tipo float: ");
  scanf("%f", &numero);
  printf("O valor digitado foi: %d", numero);
  return 0;
}
