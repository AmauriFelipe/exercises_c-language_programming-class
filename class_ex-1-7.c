/*Exerc�cio 07 � Escreva um algoritmo em C que receba dois valores
inteiros do usu�rio e calcule cada uma das quatro opera��es matem�ticas
simples mais a congru�ncia modular (MOD): (adi��o, subtra��o,
multiplica��o, divis�o e resto).*/


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
