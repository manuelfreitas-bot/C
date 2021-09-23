#include <stdio.h>

int main(){
	float a , b, c;
	printf("Informe o valor de 3 seguimentos de reta (use espaço para separa-los):");
	scanf("%f %f %f", &a , &b, &c);
	
	if((a+b)>c && (a + c)> b && (b + c)> a){
		printf("Pode formar um triangulo!!\n");
		
		if(a==b && b == c && a == c){
			
			printf("EQUILATERO");
			
		}else if(((a == b) && (b != c)) || ((a == c) && (a != b))|| ((b == c )&& (c != a))){
			
			printf("\nISOCELES");
			
		}else{
			
			printf("\nESCALENO");
		}
	}else{
		
		printf("Nao pode formar triangulo, pois um lado e maior que a soma dos outros 2");
	}
	return 0;
}
