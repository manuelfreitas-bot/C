/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, o
telefone e o endereço de uma pessoa. Agora, leia um inteiro positivo N e crie um
vetor de tamanho N, para essa estrutura. Solicite também que o usuário entre com os
dados para o povoamento desse vetor e depois imprima os dados digitados.*/
#include <stdio.h>

int main(){
//criando estrutura cadastro
struct Cadastro{
	char nome[40];
	char telefone[20];
	char endereco[30];
};
//pedir um valor para o vetor 
	int n, i; 
	printf("===CADASTRO===\n");
	do{
	printf("Quantos cadastros voce quer fazer:\n");
	scanf("%d", &n);
}while(n<=0);
	

struct Cadastro c[n];
//inserindo os valores em cada indice do vetor c heterogenero e composto do tipo cadastro;
for(i=0; i<n; i++){
	printf("====INSERIR O %d CADASTRO ====\n", i+1);
	printf("Informe o nome do %d:\n", i+1);
	scanf(" %[^\n]s", &c[i].nome);

	printf("Telefone :\n");
	scanf(" %s", &c[i].telefone);
	
	printf("Endereco :\n");
	scanf(" %[^\n]s", &c[i].endereco);
	setbuf(stdin, NULL);
}

//imprimindo os dados cadastrados
printf("\n======IMPRIMINDO DADOS======\n\n");
for(i=0; i<n; i++){
	printf("====CADASTRO %d====\n", i+1);
	printf("NOME : %s \n", c[i].nome);
	printf("TELEFONE %s:\n", c[i].telefone);
	printf("ENDERECO : %s\n", c[i].endereco );
	printf("\n\n");
}
}
