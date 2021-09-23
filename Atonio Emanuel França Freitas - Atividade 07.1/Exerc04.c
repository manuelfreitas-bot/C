#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese-Brazilian");
	int cont , posicao;
    char frase[100], frase2[100], inverso[100];
 	int inteiro;
    printf("Forneca uma string com espacos em branco: ");
    gets(frase);

//for para substituir letra com acentos por letras comuns pelo codigo da tabela ascii
  for(cont =0; cont<strlen(frase); cont++){
  	 inteiro = (int)frase[cont];
  	 if((inteiro == -123) || (inteiro == -96) ||(inteiro ==-58) || (inteiro == -125)){
  	 	frase[cont] = 'a';
	   }else if((inteiro == -120 ) || (inteiro == -126)){
	   	frase[cont]='e';
	   	
	   }else if((inteiro == -95 ) || (inteiro == -95)){
	   	frase[cont] = 'i';
	   	
	   }else if((inteiro == -12) || (inteiro ==-94) || (inteiro == -109) || (inteiro ==-12) ){
	   	frase[cont] = 'o';
	   	
	   	
	   }else if((inteiro == -106) || (inteiro == -93)){
	   	frase[cont] = 'u';
	   }
  	
  }
// for para remover caracters indesejados
    for ( cont = 0, posicao = 0; cont < strlen(frase); cont++, posicao++) {
        if (isalpha(frase[posicao])==0 && posicao < strlen(frase))	posicao++; {
          
		  	frase[cont] = frase[posicao];	
		
		}
    }
//for para retirar novamente caracters indesejados 

     for ( cont = 0, posicao = 0; cont < strlen(frase); cont++, posicao++) {
        if (isalpha(frase[posicao])== 0 && posicao < strlen(frase)) posicao++;{ 
      			frase[cont] = frase[posicao];
		}
    }
  
    strcpy(frase2, frase); 							//frase2 recebe o valor de frase sem espaços ou acentos
    strlwr(frase2);									//deixa a frase2 com letras maiusculas
    strcpy(inverso, frase2);						//a variavel inverso vai receber o que ta escrito em frase2
    strrev(inverso);								//o conteudo de inverso é invertido 
								
    printf(" \n O INVERSO É :%s \n", inverso); 
	if(strcmp(frase2, inverso)==0){				//se a frase2 for igual ao que esta contido em inverso é um polidromo
		printf("\nE UM POLIDROMO");
		
	}else{
		printf("NAO E UM POLIDROMO");
	}
//	Anotaram a data da maratona;
	return 0;
}
