#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;

	printf("Informe um valor inteiro :");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("\n %d � PAR", num);
	}else{
		printf("\n %d � IMPAR", num);
	}
	
	
}
