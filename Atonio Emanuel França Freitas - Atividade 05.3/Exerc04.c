#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor;						//declarando variavel float
	
	printf("Digite um valor real:"); 
	scanf("%f", &valor); 				//lendo o valor 
	memset(&valor, 0, sizeof(int)); 	//memset apenas para termos certeza de que o pedaço de memória que vamos usar esteja sem "lixo de memoria ".

	printf("%d", valor); 				//mostrando o valor na tela
	printf("\n  logo quando for imprimir um valor float e na declaracao estiver o operador '%%d', ele "
	 "vai mostrar um valor 0, \n pois a posicao da memoria a ser imprimida nao corresponde a posicao correta da variavel");
	 
	 return 0; 
}

