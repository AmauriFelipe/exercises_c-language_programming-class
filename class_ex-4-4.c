/*Lista 04 Exercício 04 – Leia várias idades e calcule a média
entre as idades (usar uma variável para idade)*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int idade, soma, contador, media = 0, i = 1;

	printf("Digite idades (999 para terminar): \n");

	while (i == 1)
	{
		scanf("%d", &idade);

		idade == 999 ? i = 0 : (soma += idade);

		contador++;
	}

	printf("\nA m%cdia das idades %c %.2f", 130, 130, (float)(soma) / (float)(contador));

	return (0);
}
