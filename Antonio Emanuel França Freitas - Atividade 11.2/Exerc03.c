#include <stdio.h>

int main(){
	/*3) Crie um programa que leia um arquivo binário contendo uma quantidade qualquer
de números. O primeiro número lido indica quantos valores existem no arquivo.
Mostre na tela o maior e o menor valor lido.*/
 FILE *a;
 char nome[20];
 int n, i, maior=0, menor=0;
 printf("Informe o nome do arquivo a ser lido .bin\n");
 gets(nome);
 a = fopen(nome, "rb"); //ler em binario
	if( a == NULL){
		printf("Erro ao ler arquivo\n");
	//Se nao executa 
	}else{ 
    	printf("Vamo ler o arquivos\n");
	 //vamo ler o primeiro valor de arquivo e armazenar em n
	 fscanf(a, "%d", &n);
	 //criando vetor com tamanho n
	 int vetor[n];
	//percorrendo esses vetor
	

 for (i = 0; i < n; i++){
            fscanf(a, "%d", &vetor[i]);
        }
        maior = vetor[0];
        menor = vetor[0];
        for (i = 0; i < n; i++){
            if (vetor[i] > maior) {
             maior = vetor[i];
            }
            else if (vetor[i] < menor){
                menor = vetor[i];
            }
        }

        printf("maior valor %d\n", maior);
        printf("menor valor %d", menor);
    }
return 0;
}
	

