/*Lista 04 Exerc�cio 10 � Fa�a um programa que mostre a tabuada de
um n�mero N (N ser� lido do teclado).*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, contador;

	printf("Digite um n%cmero inteiro: ", 163);
	scanf("%d", &n);
	printf("\n\n======================================="
		   "\n              TABUADA DO %d            "
		   "\n=======================================", n);

	for (contador = 1; contador <= 10; contador++)
		printf("\n               %d x %d = %d           ", n, contador, n * contador);

	return (0);
}
