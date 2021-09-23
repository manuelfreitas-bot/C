#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int valor; //declarando um valor inteiro
	
	printf("Digite um valor inteiro :");
	scanf("%d", &valor); //lendo esse valor na memoria
	
	printf("%f", valor); //mostrando na tela o valor com referencia float
	printf("\n logo quando for imprimir e na declaracao estiver '%%f', ele "
	 "vai mostrar um valor 0.00000, \n pois o endereco da variavel &valor nao pertence ao tipo declarado na variavel ");
	 
	return 0;
}
