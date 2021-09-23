#include <stdio.h>
#include <stdlib.h> 
	/*Faça um programa que leia um valor do usuário e informe se o número digitado
é primo ou não.*/
int main(){
int num, j=1;
int cont;

    printf("Informe um valor inteiro:");  
	scanf("%d", &num);

	for (; j< abs(num); j++){   //percorrer um for de 1 ate o valor de num
		if(num % j == 0){		//Se o resto da divisao de num por j for 0 
		 cont += 1;				//ele conta os numeros divisores
			
		}			
	}
	if(cont > 2 || cont < 2 ){               //se tiver mais de 2 divisores ele nao e primo
		printf("NAO E PRIMO!");
	} if(cont == 2){			//se tiver exatamente 2 ele sera primo  
		printf("PRIMO");
	}		
		return 0;		
	}

	
	
