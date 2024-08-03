#include<stdio.h>
#include<stdlib.h>

/*12) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf() para cada operação de escrita das três variáveis.*/

int main()
{
  char caractere;
  int inteiro;
  float real;

  printf("Digite um caractere, um inteiro e um real (separadas por espaços): ");
  scanf("%c %i %f", &caractere, &inteiro, &real);
  printf("Espaços: %c %i %f\n", caractere, inteiro, real);
  printf("tabulação: \t%c\t%i\t%f\n", caractere, inteiro, real);
  printf("Linhas:\n%c\n%i\n%f", caractere, inteiro, real);
  return 0;
}
