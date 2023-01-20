/*Lista 04 Exerc�cio 11 � Fa�a um programa que pe�a ao usu�rio um
n�mero entre 12 e 20. Se a pessoa digitar um n�mero diferente,
mostrar a mensagem "entrada inv�lida" e solicitar o n�mero
novamente. Se digitar correto mostrar o n�mero digitado.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float n;

	printf("Digite um n�mero entre 12 e 20: ");

	while (1)
	{
		scanf("%f", &n);

		if (n <= 12 || n >= 20)
			printf("\nEntrada inv�lida. Tente novamente: ");
		else
			break;
	}

	printf("\nOK.");

	return (0);
}
