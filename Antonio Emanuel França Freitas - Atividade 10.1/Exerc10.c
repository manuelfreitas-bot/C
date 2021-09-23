/*Dado o programa do item anterior, faça com que o usuário possa escolher entre o
primeiro nome ou o telefone e faça uma busca nos registros, mostrando os outros
dados do usuário encontrado, ou mostre a mensagem “usuário não encontrado”, caso
contrário.*/
#include <stdio.h>
#include <string.h>
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
int op;
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

	//pergunta por quais dados o usuario quer buscar
	printf("Voce quer buscar pelo nome(1) ou pelo telefone(2): \n");
	char busca[30];
	while (1)
		{
			scanf("%d", &op);
			if(op == 1 ) {
				printf("Informe o nome que deseja procurar:\n");
				scanf(" %[^\n]s", &busca);
				break;
			}else if(op ==2){
			  printf("Telefone :\n");
			  scanf(" %s", &busca);
			  break;
			
			}else{
				printf("Valores invalidos, tente novamente:");
				
			}
		}
	for(i=0; i<n ; i++){
		if(strcmp(c[i].nome, busca)==0){
			printf("====CADASTRO %d====\n", i+1);
			printf("NOME : %s \n", c[i].nome);
			printf("TELEFONE %s:\n", c[i].telefone);
			printf("ENDERECO : %s\n", c[i].endereco );
			printf("\n\n");
		}else if(strcmp(c[i].telefone, busca)==0){
				printf("====CADASTRO %d====\n", i+1);
			printf("NOME : %s \n", c[i].nome);
			printf("TELEFONE %s:\n", c[i].telefone);
			printf("ENDERECO : %s\n", c[i].endereco );
			printf("\n\n");
		}else{
			printf("Cadastro nao encontrado\n");
		}
	}
 }

	
