#include <stdio.h>
#include <stdlib.h>

/*
 10 -Faça um programa para calcular o fatorial de um número digitado pelo usuário.
*/
int main(){
	int fator, num;  								
	printf("Informe um valor para fatorar :");
	scanf("%d", &fator);
	num = fator;
	       			 				//num vai ser igual ao fator  Ex: num = 5
	while(fator >1 ){				//enquanto fator for maior que 1 
	     fator --;					//fator -1					Ex: fator = 4
		num = num * fator; 			//num = num* fator			Ex: num = 5 * 4 = 20			
	}
	printf("O fatorial do numero e %d\n" , num);
return 0;	
}
