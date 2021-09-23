#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
/*6. Ler 2 valores do usuário, calcular e escrever a soma e a média dos inteiros
existentes entre os 2 valores lidos (incluindo os valores lidos na soma). Observe que
primeiro você precisa descobrir qual o maior e o menor valor digitado.*/

	int num1=0, num2=0, maior, menor, soma=0; 
	float media =0, cont= 0 ;

	while (num1== num2){   			//criando um laço de repetição para forçar o usuario digitar valores diferentes
	printf("Digite um valor:");
	scanf("%d", &num1);
	printf("Digite outro valor :");
	scanf("%d", &num2);	
	}
	if(num1 > num2){				//se num1 for maior que num2
		maior = num1;				//maior recebe num1
		 menor= num2;				//menor recebe num2
		
	}
	 if (num2 > num1){				//se num2 for maior que num1
		maior = num2;				//maior recebe num2
		 menor= num1;				//menor recebe num1
			
	}

	for (menor; menor <= maior; ++menor){   //laço de repetição for para percorrer todos os valores entre o menor e maior
				soma = soma + menor;		//somando todos os valores 
				cont= cont + 1;				//contador para contar quantos valores forma digitados entre o intervalo para calcular a media
		}
	media = soma/cont;	
	printf("A soma dos valores entre o intervalo e: %d\n", soma);
	printf("A media dos valores digitados e : %1.2f\n", media);

	return 0;
	
}
