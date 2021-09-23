#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float n1, n2, media, p1, p2;
	printf("Informe a primeira nota :");
	scanf("%f", &n1);
	printf("Qual o peso dessa nota :");
	scanf("%f", &p1);
	printf("Informe a segunda nota :");
	scanf("%f", &n2);
	printf("Qual o peso dessa nota :");
	scanf("%f", &p2);
	
	media = (((n1 * p1) + (n2 * p2))/ (p1 + p2));
	
	if (media >= 7){
		printf("APROVADO\n MEDIA :%1.2f ",media);
		
	}else if((media >= 4)&& (media < 7)){
		printf("FINAL\n MEDIA :%1.2f ",media);

	}else if((media >=0)&& (media < 4)){
    	printf("REPROVADO \n MEDIA : %1.2f ",media);

	}else{
		printf("Valores Invalidos");
	}
	return 0;
}
