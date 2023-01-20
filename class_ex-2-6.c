/*Exercício 06 – Faça um programa em C que leia dois
valores reais, em seguida, leia uma operação básica
aritmética, e apresente o resultado na tela.*/


#include <stdio.h>
#include <stdlib.h>


int main(){

	float n1, n2, op;
	
	printf("Enter two numbers: ");
	scanf("\n%f\n%f", &n1, &n2);
	printf
		(
		"Which operation do you want?\n"
		"[1] for '+'\n"
		"[2] for '-'\n"
		"[3] for '*'\n"
		"[4] for '/'\n"
		);
	scanf("%f", &op);
	
	if(op == 1)
	{
	printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
	}
	if(op == 2)
	{
	printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
	}
	if(op == 3)
	{
	printf("%.2f * %.2f = %.2f", n1, n2, n1 * n2);
	}
	if(op == 4)
	{
	printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
	}

return(0);
}

