/*Lista 04 Exerc�cio 14 � Crie um programa que leia um n�mero do
teclado at� que encontre um n�mero igual a zero. No final, mostre
a soma dos n�meros digitados.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float n, soma;

	printf("Digite um n%cmero: [0 para finalizar]\n", 163);

	do
	{
		scanf("%f", &n);
		soma += n;
	} while (n != 0);

	printf("\n\nSoma dos n%cmeros digitados: %.2f", 163, soma);

	return (0);
}
