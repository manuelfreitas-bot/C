#include <stdio.h>
int main(){
	int linhas, colunas, i=0, j=0, cont=0; //variavel que vai armazenar o tamanho da matriz quadrada
	do{
		printf("Informe o valor das dimensoes da sua matriz quadrada: \n");
		scanf("%d", &linhas);
	}while(linhas <= 0);  //o usuario deve digitar dimensoes reais 
	colunas = linhas; 
	float matriz[linhas][colunas]; //criando matriz
	
	for(i = 0; i< linhas; i++){       //percorrer a matriz
		for(j = 0; j <colunas; j++){
			if(i == j ){    			//quando i = j a matriz recebe 1-> diagonal principal
				matriz[i][j] = 1;
			}else if(i + j == linhas-1){ //quando a soma de i + j for igual a quantidade de linhas -1 -> diagonal secundaria
					matriz[i][j] = 1;
			}else{										
				matriz[i][j] = 0;
			}	
		}
	}
	/*Ex: 11 12 13
	      21 22 23
		  31 32 33*/	

	printf("\n---------------MATRIZ -----------------\n");
		for(i =0; i<linhas; i++){  				//mostrando os valores da matriz
		for(j =0; j<colunas; j++){
			printf("%3.f\t ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
