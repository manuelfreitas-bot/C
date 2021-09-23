#include <stdio.h>
#include <stdlib.h>


int main(){

	float n1, n2, result;
	char sinal;
	
	printf("\n Digite um valor : Ex(1.45):");
	scanf("%f", &n1);
	getchar();
	
	printf("Informe o sinal da expressao digite \n  (+)\n  (-) \n  (*) \n  (/) :");
	scanf("%c", &sinal);
	
	printf("\n Digite um segundo valor Ex(2.56):");
	scanf("%f", &n2);
	
	switch (sinal){
		case '+':
			result = n1 + n2;
			printf("%1.2f + %1.2f = %1.2f ", n1, n2, result);
			break;
			
		case '-':
			result = n1 - n2;
			printf("%1.2f - %1.2f = %1.2f  ", n1, n2, result);
			break;
		case '*':
			result = n1 * n2;
			printf("%1.2f * %1.2f = %1.2f  ", n1, n2, result);
			break;
		case '/':
			result = n1 / n2;
			printf("%1.2f / %1.2f = %1.2f  ", n1, n2, result);
			break;
			
		default:
			printf("Valor errado!");
			break;
	}
	return 0;
	
	
}
