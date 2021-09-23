#include <stdio.h>
#include <stdlib.h>
/*Dado que a expressão (char) seguida por um valor inteiro faz a conversão deste
valor inteiro para um caracter, faça um programa que apresente todos os caracteres
legíveis (ou “imprimíveis”) da tabela ASCII, ou seja, da posição 32 a 255.*/
int main(){
	int i;
	printf("Vamos imprimir os valores da Tabela ASCII \n\n");
	for (i =32 ; i <= 255 ; i++){
			printf(" %c ", i);
	}

return 0;
}
