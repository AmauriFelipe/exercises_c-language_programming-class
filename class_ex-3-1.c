//Lista de exercícios 03

//Questão 01


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");

	int c;
	
	printf("Digite o código do produto: ");
	scanf("%d", &c);
	printf("\n");

	switch (c)
	{
		case 1:
			printf("Alimento não-perecível");
			break;

		case 2: case 3: case 4:
			printf("Alimento perecível");
			break;

		case 5: case 6:
			printf("Vestuário");
			break;

		case 7:
			printf("Higiene pessoal");
			break;			
		
		default:
			if (c >= 8 && c <= 15)
				printf("Limpeza e Utensílios Domésticos");
			else
				printf("Código inválido");
	}

	return (0);
}
