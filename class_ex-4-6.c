/*Lista 04 Exercício 06 – Utilizando a estrutura de repetição for,
faça um programa em C que receba 10 números e conte quantos deles
estão no intervalo [10,20] e quantos deles estão fora do intervalo,
escrevendo estas informações.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float contador, n, dentro, fora;

	printf("Digite 10 n%cmeros: \n0", 163);

	for (contador = 1; contador <= 10; contador++)
	{
		scanf("%f", &n);
		n >= 10 && n <= 20 ? dentro++ : fora++;
	}

	printf("\n%.f n%cmeros est%co dentro do intervalo [10, 20] e %.f est%co fora.", dentro, 163, 198, fora, 198);

	return (0);
}
