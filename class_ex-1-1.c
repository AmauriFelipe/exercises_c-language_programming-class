/*Exerc�cio 01 � Escreva um algoritmo em C que armazene o valor 100 na
vari�vel �a� e o valor 10 na vari�vel �b�. A seguir (utilizando apenas
atribui��es entre vari�veis) troque os seus conte�dos fazendo com que
o valor que est� em �a� passe para �b� e vice-versa.*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 100, b = 10, c;

	printf("a = %d, b = %d", a ,b);

	c = a;
	a = b;
	b = c;

	printf("\na = %d, b = %d", a, b);

	return (0);
}
