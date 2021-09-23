#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*8- O mesmo exercício anterior, mas agora não será informado o número de
mercadorias em estoque. Então o funcionamento deverá ser da seguinte forma: ler o
valor da mercadoria e perguntar ‘MAIS MERCADORIAS (S/N)?’. Ao final,
imprimir o valor total em estoque e a média de valor das mercadorias em estoque.*/
int main(){

int cont=0;
char resposta = 'S';
float valor_mercadoria, valor_total=0, media;

while(resposta == 'S'){
	printf("Digite o valor da mercadoria: ");      
	scanf("%f", &valor_mercadoria);
	while(valor_mercadoria < 0){
		printf("Invalido\n");
		printf("Digite o valor da mercadoria: ");      
		scanf("%f", &valor_mercadoria);
	}
	getchar(); 											//limpar o buffer
	printf("Mais mercadorias ? (S/N):\n");
	scanf("%c", &resposta);
	resposta = toupper(resposta);  						//transforma a resposta em caixa alta(para poder aceitar S ou N minusculos)
	
	
	if((resposta != 'N')  && (resposta !='S')){      	// Se a resposta não for igual a 'S' e nem for igual a 'N'
		printf("\nParametros Invalidos,\n FIM \n "); 	//Parametros invalidos
	}
	if(resposta == 'N'){								//se for igual a 'N' termina
		break;
	}

	valor_total +=valor_mercadoria;  				//soma os valores das mercadorias digitadas	
	cont+=1;										//contador para a media
	
}
media = valor_total/ cont;
	printf("O valor total em estoque e : R$%1.2f,00\n",valor_total);
	printf("A media dos valores das mercadorias e : R$%1.2f,00\n", media);
	return 0;




}
