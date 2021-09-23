#include <stdio.h>
int main(){
		int linhas1, colunas1, linhas2, colunas2, i=0, j=0, cont, soma =0; //variavel que vai armazenar o tamanho da matriz quadrada
printf("==MULTIPLICACAO DE MATRIZES==\n\n Lembre-se de que para ocorrer muliplicacao o numero de colunas de A deve ser igual ao numero de linhas de B\n");

	do{
		printf("\nQuantas linhas tem sua matriz A: ");
		scanf("%d",&linhas1);
		printf("\nQuantas colunas tem sua matriz A:");
		scanf("%d", &colunas1);
	}while((linhas1 <= 0 )|| (colunas1 <=0));
	
		do{
		printf("\nQuantas linhas tem sua matriz B:");
		scanf("%d",&linhas2);
		printf("\nQuantas colunas tem sua matriz B:");
		scanf("%d", &colunas2);
	}while((linhas2 <= 0 )|| (colunas2 <=0));

if(colunas1 == linhas2){

float matrizA[linhas1][colunas1], matrizB[linhas2][colunas2];

printf("\n---------------INSERIR A -----------------\n");
for(i =0; i<linhas1; i++){
		for(j =0; j<colunas1; j++){
			printf("Informe um valor para a linha %d e coluna %d da matriz A:", i+1, j+1);
			scanf("%f", &matrizA[i][j]);
		}
		printf("\n");
	}
printf("\n---------------INSERIR B-----------------------\n");
for(i =0; i<linhas2; i++){
		for(j =0; j<colunas2; j++){
			printf("Informe um valor para a linha %d e coluna %d da matriz B:", i+1, j+1);
			scanf("%f", &matrizB[i][j]);
		}
		printf("\n");
	}

	//for para mostrar os valores inseridos
	printf("\n---------------MATRIZ A-----------------\n");
		for(i =0; i<linhas1; i++){
		for(j =0; j<colunas1; j++){
			printf(" %3.f\t ", matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("----------------MATRIZ B-----------------------\n");
		for(i =0; i<linhas2; i++){
		for(j =0; j<colunas2; j++){
			printf(" %3.f\t ", matrizB[i][j]);
		}
		printf("\n");
	}
	
	float matrizM[linhas1][colunas2];   //criando a matriz multiplicação
	for(i = 0; i < linhas1; i++) {		//percorrer a matrizM
		for(j = 0; j < colunas2; j++) {
			
			matrizM[i][j] = 0; 					
			for(cont = 0; cont < colunas1; cont++) {       
				soma +=  matrizA[i][cont] * matrizB[cont][j];  // Ex: (A11 * B11) + (A12 * B21) + (A13 * B31)
			}

			matrizM[i][j] = soma;   //MatrizM recebe soma
			soma = 0;
		}
	}
printf("\n-----------MULTIPLICACAO-----------------------\n");
	for(i = 0; i < linhas1; i++) {
		for(j = 0; j < colunas2; j++) {
			printf("%3.f\t ", matrizM[i][j]);
		}
		printf("\n\n");
	}
}else{
	printf("\nNao e possivel multiplicar.\nLembre-se de que para ocorrer muliplicacao o numero de colunas de A deve ser igual ao numero de linhas de B\n \n");
}
	return 0;
}
