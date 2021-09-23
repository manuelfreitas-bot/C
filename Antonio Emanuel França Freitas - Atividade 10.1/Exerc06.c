#include <stdio.h>
#include <math.h>
/*Escreva uma função que receba o peso (em quilos) e a altura (em metros) de uma
pessoa e calcule e retorne o IMC (índice de massa corporal) dessa pessoa: IMC =
peso/(altura * altura)*/
//função para calcular imc
float calcularimc(float p, float a){
	float i;
	i = (float)(p / (a*a));
	return i;
}
//função principal
int main(){
	float peso, altura, imc;
	printf("VAMOS CALCULAR SEU IMC(Insira valores validos)\n");
	do{
	
	printf("Informe seu peso em kg : \n");
	scanf("%f", &peso);
	printf("Informe sua altura: \n");
	scanf("%f", &altura);
}while(altura <= 0 || (peso <= 0));

imc = calcularimc(peso, altura);

printf("O SEU IMC E : %1.2f", imc);
}
