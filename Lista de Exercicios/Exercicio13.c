#include<stdio.h>
#include<stdlib.h>

/*13) Fa�a um programa para ler o pre�o de um computador e de um tablet.
Ao final, imprima na tela estes valores formatados, com 5 casa antes da virgula e duas ap�s.*/

int main()
{
    Float computador, tablet;
    printf("Valor do computador: ");
    scanf("%f", &computador);
    printf("Valor do tablet: ");
    scanf("%f", &tablet);
    printf("Computador: %5.2f \n", computador);
    printf("Tablet: %5.2f\n", tablet);
    return 0;
}
