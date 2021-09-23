#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que, dada uma matriz quadrada de dimensão n,
verifica se esta é simétrica ou não.*/
int main(){
	
	int linhas, colunas, i=0, j=0, cont=0; //variavel que vai armazenar o tamanho da matriz quadrada
	do{
		printf("Informe o valor das dimensoes da sua matriz quadrada: \n");
		scanf("%d",&linhas);
	}while(linhas <= 0);
	
	colunas = linhas;     			//colunas recebe o mesmo valor de linhas
	int matriz[linhas][colunas];	//criando matriz
	//for para percorrer os valores da matriz
	for(i =0; i<linhas; i++){
		for(j =0; j<colunas; j++){
			printf("informe um valor para a linha %d e coluna %d :", i+1, j+1);
			scanf(" %d", &matriz[i][j]);
		}
		printf("\n");
	}
	//for para mostrar os valores inseridos
	printf("--------------MATRIZ------------------\n");
		for(i =0; i<linhas; i++){
		for(j =0; j<colunas; j++){
			printf(" %3.d \t", matriz[i][j]);
		}
		printf("\n");
	}
	
	//Simetrica é quando a Transposta(indices invertidos) e a matriz original permanece iguais
	
		printf("\n---------------------TRANSPOSTA-----------------------\n");
		for(i =0; i<linhas; i++){
		for(j =0; j<linhas; j++){
			printf("%3.d \t", matriz[j][i]);
			if(matriz[i][j] != matriz[j][i]){ //Se for diferente o contador recebe 0
				cont = 0;
				}else{
				 	cont+=1;  //Se nao cont recebe 1
				 }
			}
			printf("\n");
		}
		
		
	if(cont == (linhas * colunas)){  //Se o contador for igual a quantidade de valores da matriz ela e simetrica
		printf("A MATRIZ E SIMETRICA\n");
	}else{
		printf("A MATRIZ NAO E SIMETRICA\n");
	}
	return 0;
}
