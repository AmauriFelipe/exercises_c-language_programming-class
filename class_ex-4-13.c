/*Lista 04 Exercício 13 – Escreva um algoritmo que leia um número
do teclado até que encontre um número menor ou igual a 1*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float n;

	printf("Digite um n%cmero: [digite menor ou igual a 1 para finalizar]\n", 163);

	do
	{
		scanf("%f", &n);
	} while (n > 1);

	printf("\n\nFIM!");

	return (0);
}
