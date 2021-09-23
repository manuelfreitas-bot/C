#include <stdio.h>
//função sem retorno e com parametros
void dias_do_mes(int m){
//se m corresponder a um desses valores ele imprime
 	if(m == 1){
 		printf("janeiro(31 dias)\n");
	 }else if(m == 2){
	 	printf("fevereiro(28 ou 29 dias)\n");
	 }else if(m == 3){
	 	printf("marco(31 dias)\n");
	 }else if(m == 4){
	 	printf("abril(30 dias)\n");
	 }else if(m == 5){
	 	printf("maio(31 dias)\n");
	 }else if(m == 6){
	 	printf("junho(30 dias)\n");
	 }else if(m == 7){
	 	printf("julho(31 dias)\n");
	 }else if(m == 8){
	 	printf("agosto(31 dias)\n");
	 }else if(m == 9){
	 	printf("setembro(30 dias)\n");
	 }else if(m == 10){
	 	printf("outubro(31 dias)\n");
	 }else if(m == 11){
	 	printf("novembro(30 dias)\n");
	 }else {
	 	printf("dezembro(31 dias)\n");
	 }
}
int main(){
	int mes;
	do{
		printf("Informe o numero do mes(1 a 12): \n");
		scanf("%d", &mes);
	}while(mes < 1 ||(mes > 12));
	//chamando a função com o parametro mes
	dias_do_mes(mes);
	
	return 0;
}
