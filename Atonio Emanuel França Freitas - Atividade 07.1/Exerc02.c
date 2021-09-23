#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um conjunto de n (a ser informado pelo usuário)
notas (números reais), entre 0,00 e 10,00 (inclusive) e, ao final, informe quais são: 
1)menores do que 4,0;
2) maiores ou iguais a 4,00 e menores do que 7,0; e 
3) maiores ou iguais a 7,0. Informe ainda a média por cada subconjunto de notas e a média geral
das notas.*/
int main(){
	int qtd_notas, cont, a =0, b=0, c=0;
	do{
		printf("Informe quantas notas seram colocadas:\n");	
		scanf("%d",&qtd_notas );
	}while(qtd_notas<=0);

	
	float notas[qtd_notas];				//vetor com a quantidade de notas
	float menores_quatro[a];			//vetor para notas menores que 4
	float entre_quatro_sete[b];			//vetor para notas entre 4 e 7
	float maiores_sete[c];				//vetor para notas entre 7 e 10
	
	float soma_menores_quatro =0, soma_menores_sete = 0, soma_maiores_sete =0,soma_total =0, media4, media7, media10;
	for(cont = 0; cont< qtd_notas; cont++){
		
		do{
		printf("Informe o valor da %d nota (Ex: 9.5): \n", cont+1);
		scanf("%f", &notas[cont]);								//estrutura para o usuario digitar valores positivos
		}while(notas[cont] < 0 || (notas[cont]> 10));
		
		soma_total += notas[cont];
		
		 if(notas[cont] < 4){
		 	menores_quatro[a] = notas[cont];
			soma_menores_quatro	+= notas[cont];			  //armazenar valores menores que 4 e maiores que 0
		 	a +=1;
		 	
		 }else if(notas[cont] >= 4 && (notas[cont] < 7)){
		 	entre_quatro_sete[b] = notas[cont];				//armazenar valores entre 4 e menores que 7
		 	soma_menores_sete += notas[cont];
		 	b+=1;
		 	
		 }else if(notas[cont] >= 7){
		 	maiores_sete[c] = notas[cont];
			 soma_maiores_sete += notas[cont];					//armazenar notas entre 7 e 10
		 	c+=1;
		 }
		
		
	}


	if(a > 0){
		printf("\n\n===MENORES QUE 4====\n\n");
		for(cont = 0; cont< a; cont++){					//percorrendo valores entre menores que 4 
	    	printf("%1.2f ", menores_quatro[cont]);		
		}
		printf("\nMEDIA DAS NOTAS MAIORES QUE QUATRO : %1.2f\n", soma_menores_quatro/a);

	}
	
		

	if(b>0){
	printf("\n\n===NOTAS ENTRE 4 E MENORES QUE 7===\n\n");
	for(cont = 0; cont < b; cont++){					//percorrendo valores entre 4 e menores que 7
		printf("%1.2f ", entre_quatro_sete[cont]);	
	}
	printf("\nMEDIA DAS NOTAS ENTRE 4 E MENORES QUE 7:  %1.2f \n", soma_menores_sete/b);
}
	
	if(c>0){
		
	printf("\n\n===NOTAS ENTRE 7 E 10===\n\n");
	for(cont = 0; cont < c; cont++){				//percorrendo valores maiores que 7 
		printf("%1.2f ", maiores_sete[cont]);	
	}
	
	printf("\nMEDIA DAS NOTAS ENTRE 7 E 10 : %1.2f \n", soma_maiores_sete/c);
}
	printf("\nMEDIA GERAL DAS NOTAS :%1.2f \n", (soma_total)/(a+b+c));

	return 0;
}
