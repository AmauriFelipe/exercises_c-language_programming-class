/*Lista 04 Exercício 11 – Faça um programa que peça ao usuário um
número entre 12 e 20. Se a pessoa digitar um número diferente,
mostrar a mensagem "entrada inválida" e solicitar o número
novamente. Se digitar correto mostrar o número digitado.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float n;

	printf("Digite um número entre 12 e 20: ");

	while (1)
	{
		scanf("%f", &n);

		if (n <= 12 || n >= 20)
			printf("\nEntrada inválida. Tente novamente: ");
		else
			break;
	}

	printf("\nOK.");

	return (0);
}
