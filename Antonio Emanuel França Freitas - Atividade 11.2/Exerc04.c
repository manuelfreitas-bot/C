#include <stdio.h>

int main(){
	//criando arquivo
	FILE *p;
	//abrindo arquivo
	p = fopen("questao4.bin", "wb");
	if(p == NULL){
		printf("Erro na abertura do arquivo\n");
	}else{
		//se der certo a abertura do arquivo
		printf("Arquivo criado com sucesso\n");
		int i;
		char numero[20];
	 for (i=0;i<100;i++){
	   printf("Digite o %d numero: \n", i+1);
  	   gets(numero);
  	   fputs(numero, p);
  	   fputc('\n', p);
   }
   printf("Arquivos lidos com sucesso\n");
		fclose(p);
	}
	
	return 0;
}
