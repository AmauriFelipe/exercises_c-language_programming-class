/*Exercício 03 – O cardápio de uma casa de lanches é dado pela
tabela abaixo:

############################################################
# Código       |Produto               |Preço Unitário (R$) #
###############|######################|#####################
# 100          |Cachorro quente       |R$ 1,70             #
# 101          |Bauru Simples         |R$ 2,30             #
# 102          |Bauru com ovo         |R$ 2,60             #
# 103          |Hamburguer            |R$ 2,40             #
# 104          |Cheeseburguer         |R$ 2,50             #
# 105          |Refrigerante          |R$ 1,00             #
############################################################

Escreva um algoritmo que leia o código do item adquirido pelo
consumidor e a quantidade, calculando calculando e mostrando
o valor a pagar. Não será necessário exibir o produto e o valor,
somente o valor final.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int r;
	float quant, gasto;
	
	printf("\n============================================================="
		   "\n                     LANCHES DAINNER"
		   "\n============================================================="
		   "\n"
		   "\n############################################################"
		   "\n# C%cdigo       |Produto               |Pre%co Unit%crio (R$) #"
		   "\n###############|######################|#####################"
		   "\n# 100          |Cachorro quente       |R$ 1,70             #"
		   "\n# 101          |Bauru Simples         |R$ 2,30             #"
		   "\n# 102          |Bauru com ovo         |R$ 2,60             #"
		   "\n# 103          |Hamb%crguer            |R$ 2,40             #"
		   "\n# 104          |Cheeseburguer         |R$ 2,50             #"
		   "\n# 105          |Refrigerante          |R$ 1,00             #"
		   "\n############################################################"
		   "\n", 162, 135, 160, 163);
	printf("\nDeseja qual op%c%co? ", 135, 198);
	scanf("%d", &r);
	printf("\nQuantas unidades? ");
	scanf("%f", &quant);

	switch (r)
	{
		case 100:
			gasto = quant * 1.7;
			break;
		case 101:
			gasto = quant * 2.3;
			break;
		case 102:
			gasto = quant * 2.6;
			break;
		case 103:
			gasto = quant * 2.4;
			break;
		case 104:
			gasto = quant * 2.5;
			break;
		case 105:
			gasto = quant;
			break;
		default:
			printf("C%cdigo inv%clido!");
			break;
	}
	printf("\n Valor a ser pago: R$%.2f", gasto);

	return (0);
}
