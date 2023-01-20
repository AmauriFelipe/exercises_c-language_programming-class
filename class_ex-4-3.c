/*Lista 04 Exercício 03 – Ler um valor inteiro (aceitar somente
valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor
lido.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, contador;

	printf("============================================"
		   "\n                  TABUADA"
		   "\n============================================"
		   "\nDigite um valor inteiro entre 1 e 10: ");
	scanf("%d", &n);

	if (n < 1 || n > 10)
		printf("\nEsse valor não está entre 1 e 10.");
	else
		for (contador = 1; contador <= 10; contador++)
			printf("\n%d x %d = %d", n, contador, n * contador);

	return (0);
}
