#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int n1, n2;
	
	printf("Digite dois numeros inteiros : \n");
	scanf("%d %d", &n1, &n2); //1 e 7
	
	printf("Os numeros sao :\n n1 = %d ; \n n2 = %d . \n", n1,n2);
	
	n2 += n1;       			//n2 =8
	n1 = -n1 + n2; 				// n1 = -1 + 8/ n1 =7
	n2 = -n1 + n2; 				// n2 = -7 + 8/ n2 =1

	printf("\n Agora: \n n1 = %d ; \n n2 = %d .",  n1, n2);

	return 0;
}
