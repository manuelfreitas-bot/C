#include <stdio.h>
/*Escreva uma fun��o que receba por par�metro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular �
calculado por meio da seguinte f�rmula: V = p * raio2 * altura, em que p =
3.141592*/
//fun��o com retorno e parametros a e r respectivos de altura e raio
float volume_cilindro(float a, float r){
	float const pi = 3.141592;
	float V;
	V = (pi * r * r * a); //calculando volume
	return V;
}
int main(){
	float altura , raio, volume;
	printf("VAMOS CALCULAR O VOLUME DO CILINDRO\n");
	printf("Altura(cm): \n");
	scanf("%f", &altura);
	
	printf("Raio(cm) ; \n");
	scanf("%f", &raio);
	
	volume = volume_cilindro(altura, raio); //atribuindo o resultado da fun��o chamada a variavel volume
	printf("O volume do cilindro e : %1.2f cm%c3",volume, 94 );	
	
	return 0;
}
