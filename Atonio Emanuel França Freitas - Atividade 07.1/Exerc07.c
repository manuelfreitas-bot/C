#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); //função para poder aceitar os acentos especiais
	char nome[100];  				//declarando a array nome
	int op, cont, inteiro;  		//receber o valor da opcao 
	
	printf("Informe um nome :\n");  //pedindo um nome ao usuario
	gets(nome);
	
	do  {
		setbuf(stdin, NULL);  //limpando o buffer
		//perguntando se o usuario que ler o nome em maiusculas ou minusculas
		printf("Voce quer deixar em maiusculas(1) ou minusculas(2): \n");  
		scanf("%d", &op);
	}while( op != 1 && op != 2);
	
	
//for para substituir algumas palavras com acentos por caracters sem acentos
	for(cont =0; cont<strlen(nome); cont++){
  	 inteiro = (int)nome[cont];
  	 if((inteiro == -123) || (inteiro == -96) ||(inteiro ==-58) || (inteiro == -125)){
  	 	nome[cont] = 'a';
	   }else if((inteiro == -120 ) || (inteiro == -126)){
	   	nome[cont]='e';
	   	
	   }else if((inteiro == -95 ) || (inteiro == -95)){
	   	nome[cont] = 'i';
	   	
	   }else if((inteiro == -12) || (inteiro ==-94) || (inteiro == -109) || (inteiro ==-12) ){
	   	nome[cont] = 'o'; 	
	   	
	   }else if((inteiro == -106) || (inteiro == -93)){
	   	nome[cont] = 'u';
	   }
  	
  }
  //if para a escolha do usuario
	
	if(op == 1){
		strupr(nome);
		printf("%s", nome);
	}else{
		strlwr(nome);
		printf("%s", nome);
	}
}
