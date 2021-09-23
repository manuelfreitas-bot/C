#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	FILE *p;
	int v;
	p = fopen("questao6.bin", "rb");
	typedef struct
    {
        char st[20];
    } numero;
    numero num[100]; 
    
	if(p == NULL){
		printf("Arquivo inexistente, vamos criar \n");
		fclose(p);
		p = fopen("questao6.bin", "wb"); //criando arquivo
	
	  do{
            printf("Digite quantos valores deseja inserir:\n"); //armazena a quantidade de n numeros que serao escritos no arquivo para leitura
            scanf("%d", &v);
            if (v > 0){
                int vetor[v + 1];
                vetor[0] = v;
                itoa(vetor[0], num[0].st, 10);
                fputs(num[0].st , p);
                fputc('\n', p);
            }
            else{
                printf("Digite um valor valido e positivo!");
            }
        } while (v < 0);
      /*--------------------------------------------------------------------------------------------------------
      					ARMAZENAR NO ARQUIVOS OS VALORES ENTRE 0 E N
      */
        printf("O numero deve ser entre 0 e %d\n", v);
        int a = 1;
        do
        {
            int vetor[v + 1];
            vetor[0] = v;

            printf("Digite o %d numero:\n", a);
            scanf("%d", &vetor[a]);
            
            if (vetor[a] > v || vetor[a] < 0){
                printf("Numero Invalido! Tente novamente:\n");
            }
            else{
            	//--------ARMAZENA NO ARQUIVO---------
                itoa(vetor[a], num[a].st, 10);
                fputs(num[a].st, p);
                fputc('\n', p);
                a++;
            }
        } while (a < v + 1);
         fclose(p);
   }else{
   	//------------------CASO O ARQUIVO JA TENHA DADOS------------------
   
	   
        fscanf(p, "%d", &v);
        int vetor[v];

        for (int i = 0; i < v; i++){
            fscanf(p, "%d", &vetor[i]); //Lendo os dados do arquivos 
        }
        for (int i = 0; i < v; i++){
            printf("%d\n", vetor[i]); //mostrando os arquivos lidos
        }
        fclose(p); //fecha o arquivo
  
        //---------------AGORA VAMOS SOBREESCREVER ESSES DADOS----------------
        printf("VAMOS ATUALIZAR O ARQUIVO !\n");

        p = fopen("questao6.bin", "ab");
        
        do{
            printf("Digite quantos numeros serao colocados:\n"); //armazena a quantidade de n numeros que serao escritos no arquivo para leitura
            scanf("%d", &v);
            if (v> 0){
                int vetor[v + 1];
                vetor[0] = v;
                itoa(vetor[0], num[0].st, 10);
                fputs(num[0].st, p);
                fputc('\n', p);
            }else{
                printf("Digite um valor valido e positivo!");
            }
        } while (v < 0);
        
        //ARMAZENAR NO ARQUIVO
        
         printf("O numero deve ser entre 0 e %d\n", v);
        int a = 1;
        do
        {
            int vetor[v + 1];
            vetor[0] = v;

            printf("Digite o %d numero:\n", a);
            scanf("%d", &vetor[a]);
            
            if (vetor[a] > v || vetor[a] < 0){
                printf("Numero Invalido! Tente novamente:\n");
            }
            else{
            	//--------ARMAZENA NO ARQUIVO---------
                itoa(vetor[a], num[a].st, 10);
                fputs(num[a].st, p);
                fputc('\n', p);
                a++;
            }
        } while (a < v + 1);
         
        fclose(p); //fecha o arquivo
        
        
   }
   
	return 0;
}
