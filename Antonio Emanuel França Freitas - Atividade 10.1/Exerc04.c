#include <stdio.h>
/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula: V = p * raio2 * altura, em que p =
3.141592*/
//função com retorno e parametros a e r respectivos de altura e raio
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
	
	volume = volume_cilindro(altura, raio); //atribuindo o resultado da função chamada a variavel volume
	printf("O volume do cilindro e : %1.2f cm%c3",volume, 94 );	
	
	return 0;
}
