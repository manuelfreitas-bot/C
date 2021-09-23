#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("Nota da primeira avaliacao : ");
	scanf("%f", &nota1);
	
	printf("Nota da segunda avaliacao : ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	if (media > 6 || media == 6){
		printf("Aluno APROVADO! \n media = %1.2f ", media);
		
	}else{
		printf("Aluno REPROVADO \n media = %1.2f ", media);
	}
	
	return 0;
}
