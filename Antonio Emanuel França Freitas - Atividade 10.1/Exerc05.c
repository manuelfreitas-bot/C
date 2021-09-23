/*Escreva uma função que escreva o valor (feito o cálculo) do volume de uma
esfera V = 4/3p * r3 , em que p = 3.141592. O valor do raio r deve ser passado por
parâmetro.*/
#include <stdio.h>
#include <math.h>
//criando função para calcular o volume da esfera
float volume_esfera(float r){
	float const pi = 3.141592;
	float V;
	V = (float)((4.0/3.0) * pi * pow(r,3));
	return V;
}
//função principal
int main(){
	float raio, volume;
	printf("VAMOS CALCULAR O VOLUME DA ESFERA\n");
	printf("Informe o tamanho do raio: \n");
	scanf("%f", &raio);
	volume = volume_esfera(raio);
	printf("O volume da esfera e %1.2fcm%c3",volume, 94 );
	
	return 0;
}
