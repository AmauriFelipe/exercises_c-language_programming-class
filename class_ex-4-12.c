/*Lista 04 Exercício 12 – Foi feita uma pesquisa entre os
habitantes de uma região. Foram coletados os dados de idade,
sexo (M/F) e salário. Faça um programa que calcule e mostre:

a) A média dos salários do grupo;
b) A maior e a menor idade do grupo;
c) A quantidade de mulheres na região;
d) A idade e o sexo da pessoa que possui o menor salário;

Finalize a entrada de dados ao ser digitada uma idade negativa.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	float sal, soma_sal, menor_sal, maior_sal;
	char nome[20], sex, sex_menor_sal;
	int f, idade, maior_id, menor_id, contador, id_menor_sal;

	while(1)
	{
		printf("\nDigite o nome da pessoa: ");
		scanf("%s", &nome);
		printf("Digite a idade: (negativo para finalizar) ");
		scanf("%d", &idade);

		if (idade < 0)
			break;

		else
		{
			contador++;

			if (contador == 1)
				menor_id = idade;
			else
			{
				idade < menor_id ? menor_id = idade : 0;
				idade > maior_id? maior_id = idade : 0;
			}

			printf("Digite o sexo: [m/f] ");
			
			while (1)
			{
				scanf("%s", &sex);
	
				if (sex == 'f')
				{
					f++;
					break;
				}
				else
					if (sex == 'm')
						break;
					else
						printf("Entrada inv%clida. Tente novamente: ", 160);
			}
	
			printf("Digite o sal%crio: R$", 160);
			scanf("%f", &sal);

			if (contador == 1)
			{
				menor_sal = sal;
				sex_menor_sal = sex;
				id_menor_sal = idade;
			}
			else
			{
				if (sal < menor_sal)
				{
					menor_sal = sal;
					sex_menor_sal = sex;
					id_menor_sal = idade;
				}
			}
	
			soma_sal += sal;
		}
	}

	printf("\n\n=======================================================");
	printf("\nM%cdia dos sal%crios: R$%.2f", 130, 160, soma_sal / contador);
	printf("\nA maior idade %c %d anos, e a menor idade %c %d anos.", 130, maior_id, 130, menor_id);
	printf("\nQuantidade de mulheres: %d", f);
	printf("\nA pessoa com o menor sal%crio tem o sexo %c e %d anos de idade.", 160, sex_menor_sal, id_menor_sal);

	return (0);
}
