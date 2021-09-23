#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){
	float num;
	
	printf("Digite um valor real qualquer :");
	scanf("%f", &num);
	
	if (num > 0 ){
		
		printf("\n %1.2f e Positivo", num);
		
	}else if(num < 0){
		
		printf("\n %1.2f e Negativo", num);
		
	}else{
		
		printf("Igual a Zero");
		
	}
}

