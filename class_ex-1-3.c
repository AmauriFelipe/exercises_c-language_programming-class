/*Exercício 03 – Sabendo que a área quadrada é dada pela multiplicação
dos lados, escreva um algoritmo em C que mostre a área de um espaço
retangular qualquer.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a, b;

	printf("Informe o valor de um lado: ");
	scanf("%f", &a);
	printf("Informe o valor do outro lado: ");
	scanf("%f", &b);

	printf("A %crea %c %.2f unidades de %crea.", 160, 130, a * b, 160);

	return (0);
}
