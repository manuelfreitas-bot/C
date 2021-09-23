#include <stdio.h>
#include <stdlib.h>

int main(){
	float num;
	
	printf("Digite um valor :");
	scanf("%f", &num);
	if(num > 10){
		printf("\n E MAIOR QUE 10!");		
	}else{
		printf("\n  NAO E MAIOR QUE 10");
	}
	return 0;
	
}
