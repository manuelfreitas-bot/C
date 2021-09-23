
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
quantas vezes a segunda string lida está contida dentro da primeira.*/

int main() {
	setlocale(LC_ALL, "Portuguese-Brazilian"); //função para carcaters especiais
	//declaração de variaveis 
	char nome1[50], nome2[50], inteiro;
	int i=0, j=0, k = 0 ,cont, rep=0, op;
	
	printf("Digite a primeira palavra: ");
	gets(nome1);
	
	printf("Digite a segunda palavra: ");
	gets(nome2);
	//condição for para substituir valores com acentos por vogais sem acentos
	for(k =0; k<strlen(nome1); k++){
  	 inteiro = (int)nome1[k];
  	 if((inteiro == -123) || (inteiro == -96) ||(inteiro ==-58) || (inteiro == -125)){
  	 	nome1[k] = 'a';
	   }else if((inteiro == -120 ) || (inteiro == -126)){
	   	nome1[k]='e';
	   	
	   }else if((inteiro == -95 ) || (inteiro == -95)){
	   	nome1[k] = 'i';
	   	
	   }else if((inteiro == -12) || (inteiro ==-94) || (inteiro == -109) || (inteiro ==-12) ){
	   	nome1[k] = 'o';
	 	
	   }else if((inteiro == -106) || (inteiro == -93)){
	   	nome1[k] = 'u';
	   }
  	
  }
  //for  para verificar os valores repetidos
  printf("%s", nome1);
	for(i=0; i< strlen(nome1);i++){  			//for para percorrer cada valor do primeiro nome
		for(j=0;j < strlen(nome2);j++){			//for para cada caracter do segundo nome
			if(nome2[j] == nome1[i]){			//se for igual
				cont++;							//conta + 1
			}		
	}		 
}
rep = (cont/strlen(nome2));  //rep = a quantidade de vezes repetida / o tamanho da string2 isso para valores maiores que 1 caracter
if(strlen(nome2) == 1){
  printf("A palavra \"%s\" esta inserida \"%d\" vezes na string \"%s\"", nome2, cont, nome1);

}else{
  printf("A palavra \"%s\" esta inserida \"%d\" vezes na string \"%s\"", nome2, rep, nome1);
	
}
	return 0;
	
}
