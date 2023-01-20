/*Exercício 06 – Considerando que todos os meses tenham 30 dias,
escreva um algoritmo em C para calcular o total de dias de uma
quantidade de meses determinada pelo usuário.*/


#include <stdio.h>


int main()
{
	int a;

	printf("Digite a quantidade de meses: ");
	scanf("%d", &a);

	printf("A quantidade de dias %c: %d", 130, a * 30);

	return (0);
}
