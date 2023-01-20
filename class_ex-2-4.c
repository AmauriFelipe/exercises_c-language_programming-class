/*Exercício 04 – Escreva um algoritmo em C que
descubra se um valor é maior ou menor que 10.*/


#include <stdio.h>
#include <stdlib.h>


int main(){

	float n;
	printf("Enter a number: ");
	scanf("%f", &n);
	if (n<10){
		printf("\nThis number is smaller than 10!");}
	else{
		if (n>10){
			printf("\nThis number is bigger than 10!");}
		else{
			printf("\nThis is the number 10!");}
	}

return(0);
}

