/*Exerc�cio 02 � Escreva um algoritmo em C que apresente o dobro de
um n�mero qualquer.*/


#include <stdio.h>


int main()
{
	float a;

	printf("Digite um valor qualquer: ");
	scanf("%f", &a);
	printf("\nO dobro de %.2f e %.2f.", a, a *2);
	
	return (0);
}
