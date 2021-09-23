#include <stdio.h>
#include <math.h>

int main(){
	float salario, salario_novo;
	
	printf("VAMOS CALCULAR O AUMENTO NO SEU SALARIO \n INFORME SEU SALARIO ATUAL Ex(600.34) : R$ ");
	scanf("%f", &salario);
	
	 if( (salario > 0) && (salario <= 600)){
		salario_novo = salario * 1.30;
		printf("AUMENTO 30%% \n SEU SALARIO PASSOU A SER : R$%1.2f", salario_novo);
		
	}else if((salario >= 600.01)&&(salario <= 1100)){
		salario_novo = salario * 1.25;
		printf("AUMENTO 25%% \n SEU SALARIO PASSOU A SER: R$%1.2f", salario_novo);	
		
	}else if((salario >= 1100.01)&& (salario <= 2400)){
		salario_novo = salario * 1.2;
		printf("AUMENTO 20%%\n SEU SALARIO PASSOU A SER: R$%1.2f", salario_novo);		
		
	}else if((salario >= 2400.01)&& (salario <= 3550)){
		salario_novo = salario * 1.15;
		printf("AUMENTO 15%%\n SEU SALARIO PASSOU A SER: R$%1.2f", salario_novo);
		
	}else if(salario > 3550){
		salario_novo = salario * 1.1;
		printf("AUMENTO 10%%\nSEU SALARIO PASSOU A SER: R$%1.2f", salario_novo);	
	}else {
		printf("Valor invalido");
	}
	return 0;
}
