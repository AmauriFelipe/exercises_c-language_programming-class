/*Exercício 05 – Ler 10 números e imprimir quantos são pares e
quantos são ímpares*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, contador, pares, impares;

	printf("Digite 10 n%cmeros inteiros: \n", 163);

	for (contador = 1; contador <= 10; contador++)
	{
		scanf("%d", &n);
		n % 2 == 0 ? pares++ : impares++;
	}

	printf("\n%d n%cmeros s%co pares e %d s%co %cmpares.", pares, 163, 198, impares, 198, 214);

	return (0);
}
