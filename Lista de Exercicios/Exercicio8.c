#include<stdio.h>
#include<stdlib.h>

/*8)Faça um programa que leia dois números inteiros e depois imprima na ordem inversa em que eles foram lidos.*/

int main()
{
  int numero1, numero2;
  printf("Digite o primeiro valor: ");
  scanf("%i", &numero1);
  printf("Digite o segundo valor: : ");
  scanf("%i", &numero2);
  printf("Ordem inversa: %1 -> %i \n", numero2, numero1);
  system("pause");
  return 0;
}
