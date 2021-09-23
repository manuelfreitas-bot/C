#include <stdio.h>
#include <stdlib.h>
/*5 Faça um programa que receba um número N do usuário e imprima os N
primeiros termos da seguinte série: 1, 5, 9, 13, 17, 21,*/

int main(){
	int elementos ;
	int subconjunto =-3; 
	/*subconjunto começa com -3 , pois quando for acrescentar + 4 o primeiro elemento é 1
	como o programa quer representar os elementos {1, 5, 9, 13}*/
	printf("Vamos representar uma sequencia \n Quantos numeros voce quer ver ?");
	 scanf("%d", &elementos);
	 
	 while (elementos <= 0){
				
				printf("Invalido, \n Quantos numero voce quer :");
				scanf("%d", &elementos);
				
			}
	 
	 while (elementos  >  0){     			//enquanto elementos que o usuario quer ver for maior que 0
	 
	 		 subconjunto += 4;				//subconjunto recebe 4
	 		 printf(" %d ", subconjunto);
	 		 elementos--;		//diminui um de elementos
				 
	 }	
	 
	return 0;
}
