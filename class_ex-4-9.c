/*Lista 04 Exercício 09 – Crie um programa para ler 5 notas com
seus respectivos pesos usando while e mostrar a média ponderada
delas.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float nota, soma, peso;
	int contador = 0;

	printf("Escreva 5 notas e seus pesos: ");

	while (contador <= 5)
	{
		contador++;

		printf("\n\nNota: ");
		scanf("%f", &nota);
		printf("\nPeso: ");
		scanf("%f", &peso);

		soma += (nota * peso);
	}

	printf("\n\nA m%cdia das notas %c: %.2f", 130, 130, soma / contador);

	return (0);
}
