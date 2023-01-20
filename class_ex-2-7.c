/*Exercício 07 – Escreva um algoritmo em C que solicita
o salário e valor da prestação. Se a prestação for maior
que 20% do salário, imprimir: “Empréstimo não concedido”.
Senão, imprimir “Empréstimo concedido”.*/


#include <stdio.h>
#include <stdlib.h>


int main(){

	float p, s;
	
	printf("Enter the noan portion: ");
	scanf("%f", &p);

	printf("\nEnter your salary: ");
	scanf("%f", &s);

	if (p > s * 0.2)
		{
		printf("\nNoan not granted.");
		}
	else
		{
		printf("\nNoan granted.");
		}

return(0);
}

