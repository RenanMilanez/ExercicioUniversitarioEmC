#include<stdio.h>
#include<stdlib.h>

/*11) Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha. Use um único comando printf() para isso.*/

int main()
{
  char caract1, caract2, caract3;
  printf("Digite três caracteres com espaços entre eles: ");
  scanf("%c %c %c", &caract1, &caract2, &caract3);
  printf("Os caracteres sao: \n%c\n%c\n%c", caract1, caract2, caract3);
  return 0;
}
