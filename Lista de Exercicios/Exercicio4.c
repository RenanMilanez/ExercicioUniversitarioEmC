#include<stdio.h>
#include<stdlib.h>

/*4) Faça um programa que leia um número inteiro e depois o imrprima usando o operador "%f", veja o que aconteceu.*/

int main()
{
   int numero;
   printf("Digite um numero inteiro: ");
   scanf("%i", &numero);
   printf("O numero lido foi: %f", numero);
   return 0;
}
