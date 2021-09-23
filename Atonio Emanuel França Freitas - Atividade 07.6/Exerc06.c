#include <stdio.h>

/* Gere uma matriz 4 x 4 com valores recebidos do usuário. Escreva um
programa que transforme a matriz gerada numa matriz triangular inferior, ou
seja, atribuindo zero a todos os elementos acima da diagonal principal.
Imprima a matriz original e a matriz transformada.*/
int main(){
	int i, j;
	float matriz[4][4];
	printf("\n-------INSERINDO OS VALORES DA MATRIZ------------\n\n");
	for(i =0; i< 4; i++){
		for(j =0; j<4; j++){
			printf("Informe um valor para a linha %d e coluna %d da matriz :", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
		printf("\n");
	}
	//imprimindo a matriz original
	printf("\n---------------MATRIZ ORIGINAL -----------------\n"); 
		for(i =0; i<4; i++){
		for(j =0; j<4; j++){
			printf(" %3.f\t ", matriz[i][j]);
		}
		printf("\n");
	}
	/* 11 12 13 14
	   21 22 23 24
	   31 32 33 34
	   41 42 43 44
	*/
	//imprimindo a matriz traingular inferior sabendo que todos os valores em que i for menor que j recebe 0.
	printf("\n---------------MATRIZ TRIANGULAR INFERIOR -----------------\n");   
		for(i =0; i<4; i++){
		for(j =0; j<4; j++){
			if(i <j ){
				matriz[i][j] = 0;	
		}
		printf(" %3.f\t ", matriz[i][j]);
		
	}
	printf("\n");
}
	return 0;
	
}
