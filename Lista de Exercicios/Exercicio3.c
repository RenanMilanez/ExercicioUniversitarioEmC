#include<stdio.h>
#include<stdlib.h>

/*3) Escreva um programa que leia um número inteiro e depois imprima a mensagem "Valor lido: ", seguido do valor inteiro.
Use apenas um comando printf().
*/

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    printf("Valor lido: %i", numero);
    return 0;
}
