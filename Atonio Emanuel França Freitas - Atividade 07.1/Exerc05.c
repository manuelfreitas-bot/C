#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Leia dois nomes (strings), compare se os mesmos são iguais. Neste caso,
imprima: “Nomes iguais”. Caso contrário, imprima “Nomes diferentes”. */
int main(){
	setlocale(LC_ALL, "Portuguese-Brazilian");
	char nome[50], nome2[50];
	
	printf("Digite uma palavra : ");
	scanf("%s", &nome);
	printf("Digite outra palavra :");
	scanf("%s", &nome2);
	
	if(strcmp(nome, nome2) == 0){ //se a diferença entre as strings resultar em 0 elas sao iguais
		printf("São iguais");
		
	}else{
		printf("Nomes diferentes!");
	}
return 0;
}
