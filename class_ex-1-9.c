/*Exercício 09 – Escreva um algoritmo em C que calcule o reajuste
de um salário de uma pessoa qualquer. O salário e o porcentual de
reajuste deverão ser fornecidos pelo usuário.*/


#include <stdio.h>


int main()
{
	float sal, porc;

	printf("Digite o sal%crio: R$ ", 160);
	scanf("%f", &sal);
	printf("Digite a porcentagem de reajuste: ");
	scanf("%f", &porc);

	printf("\nO sal%crio reajustado %c: R$ %.2f", 160, 130, sal * (porc / 100 + 1));

	return (0);
}
