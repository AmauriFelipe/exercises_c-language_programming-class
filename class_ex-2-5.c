/*Exerc�cio 05 � Escreva um algoritmo em C que calcule
a m�dia simples (aritm�tica) de 3 valores quaisquer.
Utilize as vari�veis valor1, valor2 e valor3. Em seguida,
determine de o mesmo est� aprovado (m�dia maior ou igual
a 60) ou reprovado (m�dia inferior a 60).*/


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

