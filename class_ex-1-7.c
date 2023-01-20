/*Exercício 07 – Escreva um algoritmo em C que receba dois valores
inteiros do usuário e calcule cada uma das quatro operações matemáticas
simples mais a congruência modular (MOD): (adição, subtração,
multiplicação, divisão e resto).*/


#include <stdio.h>


int main()
{
	float a, b;

	printf("Digite um valor: ");
	scanf("%f", &a);
	printf("Digite outro valor: ");
	scanf("%f", &b);

	printf("\n%.2f + %.2f = %.2f", a, b, a + b);
	printf("\n%.2f - %.2f = %.2f", a, b, a - b);
	printf("\n%.2f * %.2f = %.2f", a, b, a * b);
	printf("\n%.2f / %.2f = %.2f", a, b, a / b);
	printf("\n%d mod %d = %d", (int)(a), (int)(b), (int)(a) % (int)(b));

	return (0);
}
