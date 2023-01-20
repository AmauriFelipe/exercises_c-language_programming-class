/*Exercício 05 – Escreva um algoritmo em C que calcule a média simples
aritmética) de 3 valores quaisquer. Utilize as variáveis valor1, valor2
e valor3.*/


#include <stdio.h>


int main()
{
	float a[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Digite o %d%c valor: ", i + 1, 167);
		scanf("%f", &a[i]);
	}

	printf("\nA m%cdia aritm%ctica %c: %.2f", 130, 130, 130, (a[0] + a[1] + a[2])/3);

	return (0);
}
