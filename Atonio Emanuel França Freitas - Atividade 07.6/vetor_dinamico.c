#include <stdio.h>
#include <string.h>
int main(){
	int tamanho;
	char nome[100];
	printf("Digite algo :\n");
	gets(nome);
	tamanho = strlen(nome);
	char vetor[tamanho];
	printf("%d", tamanho);
	return 0;
}

