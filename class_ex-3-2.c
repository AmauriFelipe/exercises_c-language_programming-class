/*Lista 03 -Exercício 02 – Faça um programa que receba dois
números e execute as operações listadas a seguir de acordo com a
escolha do usuário:

Escolha do usuário        Operação
1                         Média entre os números digitados
2                         Diferença entre os números
3                         Produtos entre os números digitados
4                         Divisão do primeiro pelo segundo*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float a, b;
	int r;

	printf("Digite dois n%cmeros: ", 163);
	scanf("%f"
		  "%f", &a, &b);
	printf("\nQual opera%c%co voc%c deseja?"
		   "\n[1] M%cdia entre os n%cmeros digitados"
		   "\n[2] Diferen%ca entre os n%cmeros"
		   "\n[3] Produtos entre os n%cmeros digitados"
		   "\n[4] Divis%co do primeiro pelo segundo"
		   "\n"
		   "\nResposta: ", 135, 198, 136, 130, 163, 135, 163, 163, 198);
	scanf("%d", &r);

	switch (r)
	{
		case 1:
			printf("\nM%cdia entre %.2f e %.2f: %.2f", 130, a, b, (a + b) / 2);
			break;
		case 2:
			printf("\n%.2f - %.2f = %.2f", a, b, a - b);
			break;
		case 3:
			printf("\n%.2f * %.2f = %.2f", a, b, a * b);
			break;
		case 4:
			printf("\n%.2f / %.2f = %.2f", a, b, a / b);
			break;
		default:
			printf("\nResposta inv%clida!", 160);
			break;
	}

	return (0);
}
