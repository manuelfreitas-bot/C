#include <stdio.h>
#include <stdlib.h>

int main(){
	/*3- Fa�a um programa que apresente todos os n�meros m�ltiplos de 3 entre 1 e 100.*/

	int i= 1,mult=0; 	// definindo as variaveis i e mult

	printf("Vamos imprimir os multiplos de 3 entre 1 e 100\n");

	while (mult < 99){            //enquanto o mult for menor que 99(ultimo mltiplo de 3 entre 1 e 100) ele ir� entrar no loop 
		mult = 3 * i;		     //mult receber� 3 * i 
		i++;					// i receber� + 1
		printf(" %d \n", mult);
		
	}
	return 0;
}
