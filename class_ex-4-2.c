/*Lista 04 - Exercício 02 – Fazer um programa para encontrar
todos os pares entre 1 e 100.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int contador;
	
	printf("Os números pares entre 1 e 100 são: ");

	for (contador = 1; contador <= 100; contador++)
		contador % 2 == 0 ? printf("\n%d", contador) : 0;

	return (0);
}
