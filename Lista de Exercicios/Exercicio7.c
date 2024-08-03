#include<stdio.h>
#include<stdlib.h>

/*7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.*/

int main()
{
  char caractere;
  printf("Digite um caractere: ");
  scanf("%c", &caractere);
  printf("O caractere digitado foi: %i", caractere);
  return 0;
}
