#include<stdio.h>
#include<stdlib.h>

/*12) Escreva um programa que leia tr�s vari�veis: char, int e float. Em seguida, imprima-as de tr�s maneiras diferentes: separadas por espa�os, por uma tabula��o horizontal e uma em cada linha. Use um �nico comando printf() para cada opera��o de escrita das tr�s vari�veis.*/

int main()
{
  char caractere;
  int inteiro;
  float real;

  printf("Digite um caractere, um inteiro e um real (separadas por espa�os): ");
  scanf("%c %i %f", &caractere, &inteiro, &real);
  printf("Espa�os: %c %i %f\n", caractere, inteiro, real);
  printf("tabula��o: \t%c\t%i\t%f\n", caractere, inteiro, real);
  printf("Linhas:\n%c\n%i\n%f", caractere, inteiro, real);
  return 0;
}
