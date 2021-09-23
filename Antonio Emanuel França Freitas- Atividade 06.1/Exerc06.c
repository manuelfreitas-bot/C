#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //biblioteca que permite manipular strings

int main(){
	char senha_dig[100];
	char senha_corr[] = "abacate";
	
	printf("Digite a senha : ");
	scanf("%s", &senha_dig);
	
	if(strcmp(senha_dig, senha_corr)==0){ //função que compara cada caracter de cada string
	 printf("ACESSO PERMITIDO! ");
	}else{
		printf("ACESSO NEGADO!");
	}
	return 0;
}
