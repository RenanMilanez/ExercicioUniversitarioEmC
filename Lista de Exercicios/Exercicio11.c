#include<stdio.h>
#include<stdlib.h>

/*11) Fa�a um programa que leia tr�s caracteres do tipo char e depois os imprima um em cada linha. Use um �nico comando printf() para isso.*/

int main()
{
  char caract1, caract2, caract3;
  printf("Digite tr�s caracteres com espa�os entre eles: ");
  scanf("%c %c %c", &caract1, &caract2, &caract3);
  printf("Os caracteres sao: \n%c\n%c\n%c", caract1, caract2, caract3);
  return 0;
}
