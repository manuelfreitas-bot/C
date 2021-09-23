#include <stdio.h>
#include <stdlib.h>


int main(){
	char c;
	
	printf("Digite um caractere : ");
	scanf("\n %s", &c);
	
	printf("\n  %s em decimal : %d", &c, c);
	printf("\n  %s em hexadecimal : %x", &c, c);
	printf("\n  %s em octadecimal : %o", &c, c);
	
	return 0;
}
