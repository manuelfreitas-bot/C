#include <stdio.h>
#include <stdlib.h>
/*7- Uma loja está levantando o valor total de todas as mercadorias em estoque.
Escreva um algoritmo que permita a entrada das seguintes informações: a) o
número total de mercadorias no estoque; b) o valor de cada mercadoria. Ao final,
imprimir o valor total em estoque e a média de valor das mercadorias.*/
int main(){

int quantidade, i=0;
float valor_mercadoria, valor_total=0, media;
printf("Informe o total de mercadorias no estoque :");
scanf("%d", &quantidade);



while(quantidade > 0){
	printf("informe o valor da %d mercadoria: ", i+1);
	scanf("%f", &valor_mercadoria);
	valor_total += valor_mercadoria;
	quantidade--;
	i++;
}
	media = valor_total/i;
	printf("O valor total em estoque e : R$%1.2f,00\n",valor_total);
	printf("A media dos valores das mercadorias e : R$%1.2f,00\n", media);
	return 0;
}
