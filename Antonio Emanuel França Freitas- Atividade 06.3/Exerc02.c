#include <stdio.h>
#include <stdlib.h>
/*Dado que a express�o (char) seguida por um valor inteiro faz a convers�o deste
valor inteiro para um caracter, fa�a um programa que apresente todos os caracteres
leg�veis (ou �imprim�veis�) da tabela ASCII, ou seja, da posi��o 32 a 255.*/
int main(){
	int i;
	printf("Vamos imprimir os valores da Tabela ASCII \n\n");
	for (i =32 ; i <= 255 ; i++){
			printf(" %c ", i);
	}

return 0;
}
