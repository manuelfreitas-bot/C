#include <stdio.h>
int main(){
	/*Escreva um programa para determinar se uma sequência de n números
digitados pelo usuário está ordenado ou não. Faça o programa usando uma
variável contadora.*/
	int valores, i, cont=0;
	//pedir os valores do usuario
	do{
		printf("Informe quantos valores voce deseja inserir:\n");
		scanf("%d", &valores);
	}while(valores <= 1);
	
	//criando vetor e inserindo os valores
	int vetor[valores];
	for (i=0; i< valores; i++){
		printf("Informe o %d valor: ", i+1);
		scanf("%d", &vetor[i]);	
	}
	//se o vetor anterior for maior que o vetor atual o contador recebe 1 , se nao 0
	//em uma sequencia decrescente o contador vai receber no maximo o valor 9;
	for (i=0; i< valores; i++){
		if(vetor[i-1] > vetor[i]){
			cont +=1;
		}if(vetor[i-1] == vetor[i]){
			cont--;
		}
	}
	//se contador for igual a 0 ou contador for = a qauntidade de valores-1 imprime
	if(cont ==0 || (cont == (valores-1))){
		printf("OS VALORES ESTAO ORDENADOS\n");
	}else{
		printf("OS VALORES NAO ESTAO ORDENADOS\n");
	}
	return 0;
}
