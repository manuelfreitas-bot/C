#include <stdio.h>
#include <stdlib.h>
/*Escreva uma fun��o que receba por par�metro uma temperatura em graus
Fahrenheit e a retorne convertida em graus Celsius. A f�rmula de convers�o �: C =
(F � 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em
Celsius.*/

//criando a fun��o com retorno e parametros que converte em celsius
float converte_celsius(float F){
	float celsius;
	celsius = ((F - 32.0) *(5.0/9.0));
	
	return celsius;
}
//fun��o princial 

int main(){
	float tempF, resp;
	printf("Insira uma temperatura em graus Fahrenheit: %cF \n", 167);
	scanf("%f", &tempF);
	
	resp = converte_celsius(tempF); //resp recebe o retorno da fun��o;
	printf("A temperatura %1.2f %cFem Celsius e : %1.2f %cC \n ", tempF, 167 , resp, 167);
	
	return 0;
}
