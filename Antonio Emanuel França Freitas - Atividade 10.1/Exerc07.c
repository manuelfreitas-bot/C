#include <stdio.h>
int funcao_fibonnaci(int v){
	int n;
	if(v==1){
		return 0; //Se a pessoa quiser só um numero retorna o primeiro elemento que é 0	
	}
	if(v == 2){
		return 1; //Se a pessoa quiser dois elemntos retorna os dois primeiros elemntos que é 0 e 1 
	}
	//Se a pessoa quiser qualquer numero maior que o segundos é feita função fibonnaci com cada numero
	n = funcao_fibonnaci(v-1) + funcao_fibonnaci(v-2);
		
	return n;
}

int main(){
	int sequencia, i;
	printf("=== VAMOS IMPRIMIR A SEQUENCIA DE FIBONNACI===\n");
	//pedindo um valor entre 1 e 46
	do{
		printf("Digite um valor entre 1 e 46: \n");
		scanf("%d", &sequencia);
	}while(sequencia <= 0 || (sequencia > 46));


printf("====IMPRIMINDO A SEQUENCIA DE FIBONNACI=====\n");
for(i = 1; i <= sequencia; i++){
	printf("%d, ", funcao_fibonnaci(i));  //chama a função fibonnaci do numero i 
}
return 0;
}
