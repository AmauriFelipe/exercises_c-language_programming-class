/*Lista 04 Exerc�cio 07 � Crie um programa que imprima N vezes a
frase " Hello World!". N � um valor inteiro digitado pelo usu�rio*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int contador, n;

	printf("Quantas n vezes deve ser mostrada a frase 'Hello world!'? ");
	scanf("%d", &n);

	for (contador = 1; contador <= n; contador++)
		printf("\nHello world!");

	return (0);
}
