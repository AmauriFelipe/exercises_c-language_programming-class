/*Exerc�cio 07 � Escreva um algoritmo em C que solicita
o sal�rio e valor da presta��o. Se a presta��o for maior
que 20% do sal�rio, imprimir: �Empr�stimo n�o concedido�.
Sen�o, imprimir �Empr�stimo concedido�.*/


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

