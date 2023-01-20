/*Escreva um algoritmo em C que lê 2 números
inteiros (N1, N2) e retorna o maior deles.*/


#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float n1, n2;
	
	printf("Enter two numbers:\n");
	scanf("\n%f\n%f", &n1, &n2);
	if (n1 > n2)
		{
		printf("\n%.2f is bigger than %.2f", n1, n2);
		}
	else
		{
		if (n1 < n2)
			{
			printf("\n%.2f is bigger than %.2f", n2, n1);
			}
		else
			{
			printf("\nThese numbers are the same!");
			}
		}

return(0);
}
