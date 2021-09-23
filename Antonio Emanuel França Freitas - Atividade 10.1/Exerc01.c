#include <stdio.h>
#include <stdlib.h>
//criando função retornamaior()
void retornamaior(float n1, float n2)
{
	float maior;
		//atribuindo a variavel maior o maior numero digitado
		if(n1 > n2){  
			maior = n1;	
		}else{
			maior = n2;
		}
		
	printf("O maior numero e %1.2f", maior);
}

//FUNÇAO PRINCIPAL
int main(){
	float num1, num2;
		do{
		printf("Digite um numero:\n");  
		scanf("%f", &num1);
		printf("Digite outro numero diferente do primeiro:\n");
		scanf("%f", &num2);	
	}while(num1 == num2);
	
	retornamaior(num1, num2); //chamando função sem retorno e com parametros num1 e num2
	return 0;
	
}
