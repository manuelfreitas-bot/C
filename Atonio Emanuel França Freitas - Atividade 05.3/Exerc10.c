#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dia , mes, ano;
	
	while(1){ 												//laço de repetição while para forçar o usuario a digitar um valor entre 1 e 31
		printf("Informe o valor do dia Ex(1):");
		scanf("%d", &dia);
		if(1<= dia && dia <=31){
			break;
		}
	}
	while(1) {												//laço de repetição while para forçar o usuario digitar valores entre 1 e 12
		printf("Informe o valor do mes ex(1):");
		scanf("%d", &mes);
		if(1<=mes && mes <=12){
			break;
		}
	}
	printf("Informe o ano Ex: (2021):");
	scanf("%d", &ano);
	printf("A que voce quer mostrar e %d/%d/%d ", dia , mes, ano);
		
	



}
