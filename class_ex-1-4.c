/*Exerc�cio 04 � Escreva um algoritmo em C para mostrar o sucessor e
o antecessor de um n�mero qualquer digitado pelo usu�rio.*/


#include <stdio.h>


int main()
{
	int a;

	printf("Digite um valor inteiro qualquer: ");
	scanf("%d", &a);
	printf("o sucessor de %d %c %d e o antecessor %c %d", a, 130, a + 1, 130, a - 1);

	return (0);
}
