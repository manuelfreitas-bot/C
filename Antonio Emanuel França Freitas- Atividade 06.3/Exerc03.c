#include <stdio.h>
#include <stdlib.h>

int main(){
	/*3- Faça um programa que apresente todos os números múltiplos de 3 entre 1 e 100.*/

	int i= 1,mult=0; 	// definindo as variaveis i e mult

	printf("Vamos imprimir os multiplos de 3 entre 1 e 100\n");

	while (mult < 99){            //enquanto o mult for menor que 99(ultimo mltiplo de 3 entre 1 e 100) ele irá entrar no loop 
		mult = 3 * i;		     //mult receberá 3 * i 
		i++;					// i receberá + 1
		printf(" %d \n", mult);
		
	}
	return 0;
}
