/*Escreva um programa que recebe uma string S e dois valores inteiros não
negativos i e j (com i e j diferentes entre si e menores ou iguais ao tamanho de S).
Em seguida, imprima os caracteres contidos no segmento da string S que vai de i a j.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//variaveis
	char S[100];
	int i , j, cont=0;
	
	printf("Digite um nome :\n");
	gets(S);
	
	printf("Esta string tem o tamanho : %d \n", strlen(S));
	//laço do- while para que o usuario coloque apenas valores entre 0 e o tamanho da string em I
	do{
		printf("Digite um numero inteiro menor ou igual ao tamanho do nome(Ex: 0): \n");
		scanf("%d", &i);
	}while((i < 0) || (i > strlen(S)));
	
	//laço do- while para que o usuario coloque apenas valores entre 0 e o tamanho da string em j
	do{
		printf("Digite um numero inteiro menor ou igual ao tamanho do nome diferente do primeiro (caracter final): \n");
		scanf("%d", &j);
	}while((j<0) || (j> strlen(S))|| (j <= i));
		
	setbuf(stdin, NULL);  				//limpando o buffer
	printf("String representada entre os valores i e j digitados :\n");
	for(cont=i ;cont < j; cont++){    //percorrendo a string S
		printf("%c", S[cont]);	
	}
	
	return 0;
}
