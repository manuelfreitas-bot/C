#include <stdio.h>
/*Escreva um programa que, dada uma matriz de dimensões n x m, imprime a
matriz transposta desta (de dimensões m x n).*/
int main(){
	
	int n, m, i=0, j=0, cont=0; //variavel que vai armazenar o tamanho da matriz quadrada
	do{
		printf("Quantas linhas tem sua matriz: \n");
		scanf("%d",&n);
		printf("Quantas colunas tem sua matriz :");
		scanf("%d", &m);
	}while((n <= 0 )|| (m <=0));
	
					    			//colunas recebe o mesmo valor de linhas
	float matriz[n][m];	//criando matriz
	//for para percorrer os valores da matriz
	for(i =0; i<n; i++){
		for(j =0; j<m; j++){
			printf("informe um valor para a linha %d e coluna %d :", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
		printf("\n");
	}
	//for para mostrar os valores inseridos
	printf("--------------MATRIZ------------------\n");
		for(i =0; i<n; i++){
		for(j =0; j<m; j++){
			printf(" %3.f\t ", matriz[i][j]);
		}
		printf("\n");
	}
	
	//Simetrica é quando a Transposta(indices invertidos) e a matriz original permanece iguais
	
		printf("\n----------------TRANSPOSTA----------------\n");
		for(i =0; i<m; i++){
		for(j =0; j<n; j++){
			printf(" %3.f\t ", matriz[j][i]);
			}
			printf("\n");
		}
		return 0;
}
