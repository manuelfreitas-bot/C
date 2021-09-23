#include <stdio.h>
#include <stdlib.h>

int main(){
	const  c = 3;
	printf("%d\n", c);
	// c = 4; Erro nesta linha 

	printf("c nao pode ter o valor alterado, visto que foi definida como uma constante, \n"
	"logo se for tentar mudar algo que foi definido como const ele vai dar erro. ", c);
	return 0;
	
}
