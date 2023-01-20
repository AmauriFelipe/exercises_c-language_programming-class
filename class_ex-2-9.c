/*Exercício 09 – Escreva um algoritmo em C que leia três números
e imprima-os em ordem crescente.*/


#include <stdio.h>
#include <stdlib.h>


int main(){

	float n1, n2, n3, menor, meio, maior;

	printf("Type three numbers: \n");
	scanf("%f\n%f\n%f", &n1, &n2, &n3);

	if (n1<n2)
		{
		menor = n1, meio = n2;
		}
	else
		{
		menor = n2, meio = n1;
		}
	if (n1<n3)
		{
		menor = n1;
		}
	else
		{
		menor = n3;
		meio = n1;
		maior = n2;
		}
	
	printf("\n%.2f, %.2f, %.2f", menor, meio, maior);

return(0);
}

