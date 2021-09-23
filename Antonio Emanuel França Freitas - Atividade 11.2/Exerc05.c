#include <stdio.h>
	/*3) Crie um programa que leia um arquivo binário contendo uma quantidade qualquer
de números. O primeiro número lido indica quantos valores existem no arquivo.
Mostre na tela o maior e o menor valor lido.*/
int main(){
 FILE *a;
 char nome[20];
 int n, i, soma=0;
 printf("Informe o nome do arquivo a ser lido com extensao .bin\n");
 gets(nome);
 a = fopen(nome, "rb"); //ler o aquivo em binario
 
	if( a == NULL){
		printf("Erro ao ler arquivo\n");
	//Se nao executa 
	}else{ 
    	printf("Vamo ler o arquivos\n");
	  int vetor[100];
	//percorrendo esses vetor
     for (i = 0; i < 100; i++){
            fscanf(a, "%d", &vetor[i]);   
        }
    for(i=0; i<100; i++){
    	soma+=vetor[i];
	}
    printf("soma dos valores %d\n", soma);
	fclose(a); //fechando arquivo
    }
return 0;
}
