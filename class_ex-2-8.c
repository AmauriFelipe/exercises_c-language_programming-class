/*Exercício 08 – Escreva um algoritmo em C que resolva o seguinte
problema: “Um comerciante comprou um produto e quer vendê-lo com
lucro de 45% se o valor da compra for menor que $20,00; caso
contrário, o lucro será de 30%. Entrar com o valor do produto
e imprimir o valor da venda”*/


#include <stdio.h>
#include <stdlib.h>


int main(){

	float p, v;
	
	printf("Digite o valor de seu produto: R$");
	scanf("%f", &p);
	
	if (p < 20)
		{
		printf("Para ter um lucro de 45%%, venda este produto por R$%.2f", p * 1.45);
		}
	else
		{
		printf("Para ter um lucro de 30%%, venda este produto por R$%.2f", p * 1.3);
		}

return(0);
}

