/*Lista 04 Exercício 14 – Crie um programa que leia um número do
teclado até que encontre um número igual a zero. No final, mostre
a soma dos números digitados.*/


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
