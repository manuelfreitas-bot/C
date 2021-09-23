#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um conjunto de n (n deve ser informado pelo
usuário) números inteiros e, ao final, informe quais são pares e quais são ímpares. */

int main(){
	int quantidade=0, cont, p =0;
	int	i = 0, impares[i], pares[p];
	while(quantidade <= 0){ 								//laço while para que seja permitir apenas valores positivos
		printf("Informe quantos numeros voce quer ler:");
		scanf("%d", &quantidade);
		if(quantidade > 0){
		break;	
	}
}

	int vetor[quantidade]; 					//criando vetor com a quantidade de posições inseridas
	for (cont = 0; cont < quantidade ; cont++){
		printf("Digite o %d valor :", cont + 1); //pedindo valores ao usuario
		scanf("%d", &vetor[cont]);	
	
} 
	for(cont = 0; cont < quantidade; cont++){
	
		if(vetor[cont] % 2 == 0 )
		{										//percorrendo o array e pegando valores pares
			pares[p] = vetor[cont];
			 p= p + 1;	
		}
	}

	

for(cont= 0 ; cont < quantidade ; cont++){
		printf("%d  ", vetor[cont]);			//imprimindo o array digitado
		
	}	

	
	printf("\n\n===== PARES:====\n\n");
	for(cont= 0 ; cont < p; cont++){
		printf("%d  ", pares[cont]);			//escrevendo os valores pares
		
	}
		
	
	for(cont = 0; cont < quantidade; cont++){
	
		if(vetor[cont] % 2 != 0 )
		{
			impares[i] = vetor[cont]; 			//percorrendo o arry e descobrindo valores impares
			i= i + 1;	
		}
	}

printf("\n\n===== IMPARES:====\n\n");
	for(cont= 0 ; cont < i ; cont++){   //imprimindo os impares
		printf("%d  ", impares[cont]);
		
	}

	return 0;
		
}
