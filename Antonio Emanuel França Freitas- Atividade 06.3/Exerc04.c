#include <stdio.h>
#include <stdlib.h>

int main(){
	/*4. Faça um programa que leia 10 valores e escreva quantos desses valores lidos são
NEGATIVOS, qual o maior e o menor valor, a soma (somatório) e a média
aritmética desses valores lidos.*/
	int i, negativos = 0; 
	float valor, maior, menor, media = 0, soma = 0;
		//definindo valor para menor
			//definindo valor para maior
	
	/*
	Os valores de maior e menor são definidos de modo a forçar o programa a comparar o qe tem em maior e menor e o valor digitado
	Se não definir maior e menor são eqivalentes a 0.
	*/
	for (i = 1; i <=10; i++){      			//Estrutra de repetição para inserir os 10 valores
	
		printf("Digite um valor :");
		scanf("%f", &valor);
		
		if(valor < 0){						//Se algum valor for menor qque 0
			negativos = negativos + 1;		//negativos vai receber + 1	
		}
		if(i == 1){
			maior = valor;
			menor = valor;	
			
		}
		if (valor > maior){ 				//se o valor digitado for maior do que o que tem armazenado em maior 
		 	maior = valor;					//maior recebe valor
		}
		if (valor < menor ){				//Se valor digitado for menor que o dado armazenado em menor
			menor = valor;					//menor receber valor
		}
		soma += valor;						//A cada loop a variavel soma é acrescentada do valor inserido
		
	}
	media = soma / 10;						//Calculando media
	//type casting é mudar o tipo de um valor para realizar um determinado calculo
	printf("Foram escritos %d valores negativos ! \n", negativos);
	printf("O maior valor digitado foi : %1.1f \n", maior);
	printf("o menor valor digitado foi : %1.1f \n", menor);
	printf("A soma dos valores digitados foi: %1.1f \n", soma);
	printf("A media dos valores foi : %1.1f\n", media);
	return 0;
}
