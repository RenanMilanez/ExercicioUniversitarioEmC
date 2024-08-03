#include<stdio.h>
#include<stdlib.h>

/*9) Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.*/

int main()
{
  float valor1, valor2;
  printf("Digite dois valores float (separe com espaço): \n");
  scanf("%f %f", &valor1, &valor2);
  printf("Ordem inversa: %f -> %f", valor2, valor1);
  return 0;
}
