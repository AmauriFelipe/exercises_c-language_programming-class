/*Exercício 08 – Escreva um algoritmo em C para calcular os juros
simples segundo a fórmula abaixo.

J = C . i . n

onde: J corresponde aos juros; C, ao capital; i, à taxa de empréstimo;
e n, ao período. As informações de Capital, taxa e período deverão ser
fornecidas pelo usuário.*/


#include <stdio.h>


int main()
{
	float C, i, n;

	printf("Digite o capital inicial: R$ ");
	scanf("%f", &C);
	printf("Digite a taxa de empr%cstimo em porcentagem: ", 130);
	scanf("%f", &i);
	printf("Digite o per%codo: ", 161);
	scanf("%f", &n);

	printf("\nO montante de juros %c: R$ %.2f", 130, C * (i / 100) * n);

	return (0);
}
