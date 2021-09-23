#include <stdio.h>
int main(){
	int i, j, cont;
	int  matriz[4][4], valor;
	printf("\n-------INSERINDO OS VALORES DA MATRIZ------------\n\n");
	for(i =0; i< 4; i++){
		for(j =0; j<4; j++){
			printf("Informe um valor para a linha %d e coluna %d da matriz :", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	//pedir o valor a ser encontrado
	printf("Digite o numero que voce deseja encontrar na matriz \n");
	scanf("%d", &valor);
	//percorrendo a matriz e encontrando o valor da posicao
		for(i =0; i< 4; i++){
		for(j =0; j<4; j++){
			if(matriz[i][j] == valor){
				printf("O VALOR %d ESTA NA  LINHA %d E COLUNA %d\n",valor, i+1, j+1);		
			}else{
				cont +=1;
			}
		}
	}
	//se o contador para nao ocorrencia for igual ao numero de valores da matriz nao foi encontrado valores
	if(cont == 16){
		printf("\nNAO FOI ENCONTRADO VALOR NA MATRIZ\n");
	}
	//imprimindo matriz original
	
	printf("\n---------------MATRIZ ORIGINAL -----------------\n"); 
		for(i =0; i<4; i++){
		for(j =0; j<4; j++){
			printf(" %3.d\t ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
