//Lista de exerc�cios 03

//Quest�o 01


#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main()
{
	
	setlocale(LC_ALL, "Portuguese");

	int c;
	
	printf("Digite o c�digo do produto: ");
	scanf("%d", &c);
	printf("\n");

	switch (c)
	{
		case 1:
			printf("Alimento n�o-perec�vel");
			break;

		case 2: case 3: case 4:
			printf("Alimento perec�vel");
			break;

		case 5: case 6:
			printf("Vestu�rio");
			break;

		case 7:
			printf("Higiene pessoal");
			break;			
		
		default:
			if (c >= 8 && c <= 15)
				printf("Limpeza e Utens�lios Dom�sticos");
			else
				printf("C�digo inv�lido");
	}

	return (0);
}
