#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Fa�a um programa que leia uma string e imprima uma mensagem dizendo se ela
� um pal�ndromo ou n�o. Um pal�ndromo � uma palavra que tem a propriedade de
poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
Ignorar mai�sculas/min�sculas.*/
int main(){
	setlocale(LC_ALL, "Portuguese-Brazilian");
	int cont, pos;
	char nome[100], inverso[100]; 
	
	printf("Digite uma palavra: "); 			//pegando uma palavra
	gets(nome);
	
	int tamanho = strlen(nome);  	 	//tamanho recebe o tamanho da string
	char nome2[tamanho];
	
	for (cont = 0, pos = 0; cont < tamanho; pos++, cont++){   //vai percorrer a string procurando somente valores alfabeticos
		if(nome[cont] == '\0'){
			break;		
		}else if(isalpha(nome[cont])== 0){
			pos++;
			continue;
		}else{
			nome2[cont] = nome[pos];   //nome2 recebe somente os valores sem espa�os
		}		
	}
	strlwr(nome2);				 //strlwr deixa todos os caracters em minusculo
	strcpy(inverso, nome2);      //inverso recebe o que ta escrito em nome2
	strrev(inverso);		     //strrev inverte os valores de inverso	
	printf("INVERSO : %s \n", inverso);
	
	if(strcmp(nome2, inverso)==0){    //compara nome2 com inverso se for = 0 sao iguais
		printf("� um polidromo");	  
	}else{
		printf("Nao e um polidromo");
	}
		
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
