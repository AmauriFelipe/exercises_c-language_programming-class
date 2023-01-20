/*Exercício 05 – Escreva um algoritmo em C que calcule
a média simples (aritmética) de 3 valores quaisquer.
Utilize as variáveis valor1, valor2 e valor3. Em seguida,
determine de o mesmo está aprovado (média maior ou igual
a 60) ou reprovado (média inferior a 60).*/


#include <stdio.h>
#include <stdlib.h>


int main(){

	float valor1, valor2, valor3;
	
	printf("Enter your three grades:\n");
	scanf("%f", &valor1);
	scanf("%f", &valor2);
	scanf("%f", &valor3);

	float media = (valor1 + valor2 + valor3)/3;

	printf("Your media is %.2f", media);
	
	if (media >= 60){
		printf("\nCongratulations! You are aproved!");}
	else{
		printf("\nSorry... You are reproved...");}

return(0);
}

