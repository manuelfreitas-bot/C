#include <stdio.h>
#include <string.h>
/*Crie um programa para ler, calcular (contar) e exibir o número de palavras
contidas em um arquivo texto. O usuário deverá informar o nome do arquivo.*/
int main(){
	char nome[20];
	int cont=0;

	printf("Digite o nome do seu arquivo com extensao .txt: \n");
	gets(nome);
	//criando variavel ponteiro do tipo FILE
	FILE *arq; 
	arq = fopen(nome, "r");  //abrindo arquivo com o nome digitado
	//Se for igual a vazio retorna erro
	if( arq == NULL){
		printf("Erro ao ler arquivo\n");
	//Se nao executa 
	}else{  
		printf("Arquivo lido com sucesso\n");
		char x;
		//x recebe o primeiro caracter de arquivo
		x = fgetc(arq);
		//enquanto nao for o fim do arquivo
	    while (!feof(arq)){
	    	//caso de erro ao ler caracter
	    	if(ferror(arq)){
	    		printf("Erro na leitura do caracter\n");
			}else{
				//se nao der erro e ele achar um espaço em branco ou final de linha ele conta mais 1;
				if ((x == ' ') || (x == '\n')){
                 cont+=1;
            }
		}
            x = fgetc(arq);
       }
    printf("O arquivo lido tem %d palavras\n", cont+1);
    fclose(arq);
	printf("Fim do programa\n");
	
}



	return 0;
}
