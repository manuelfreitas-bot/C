/* Escreva um programa que crie uma estrutura para
 armazenar os dados de um aluno, contendo matrícula, nome, curso, 
telefone e endereço. Defina um array de 50 elementos do tipo desta estrutura e
implemente uma forma de ler os dados de alunos e preencher o array. 
Então salve o conteúdo de tal array em um arquivo binário, de tal
 forma que quando o programa for executado novamente, tais dados possam 
ser lidos do arquivo e carregados na memória, onde se possa fazer uma busca 
no array pelo nome do aluno, exibindo os demais dados do mesmo.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int opcoes = 0, resp, achou = 0;
    char busca[50];
    FILE *p;
    printf("=======CADASTRO DE ESTUDANTES=====\n");
	//CRIANDO STRUCT estudantes
    typedef struct{
        char matricula[50];
        char nome[50];
        char curso[50];
        char telefone[50];
        char endereco[50];
    } estudantes;
	//50 alunos do tipo estudantes;
    estudantes aluno[50];
	//opcoes
    while (opcoes == 0){
        printf("OPCOES:\n[1]-CADASTRO \n[2]-PROCURAR\n[3]-ENCERRRAR\n");
        scanf("%d", &opcoes);
        setbuf(stdin, NULL);
		//enquanto nao for 1 ou ou 3 informa opção invalida
        if (opcoes > 3 || opcoes < 1) {
            printf("INVALIDO! Tente Novamente:\n");
            opcoes = 0;
        }
        //se for 1 ira cadastrar 
        if (opcoes == 1){
            printf("VOCE IRA PERDER OS DADOS SALVOS.\n QUER CONTINUAR?\n[1]-SIM\n[2]-NAO\n");
            scanf("%d", &resp);
            setbuf(stdin, NULL);
			
            if (resp == 2){
                opcoes = 0;
            } else{
                printf("\n=====CADASTRANDO====\n");

                p = fopen("questao2.bin", "wb");
                if (p == NULL){
                    printf("Nao possivel ler o arquivo!\n");
                }
                else{
                    for (int i = 0; i < 50; i++) //pedir os dados ao usuario e povoar o vetor
                    {
                        printf("MATRICULA %d:", i + 1);
                        gets(aluno[i].matricula);
                        fputs(aluno[i].matricula, p);
                        fputc('\n', p);
                        setbuf(stdin, NULL);

                        printf("NOME:");
                        gets(aluno[i].nome);
                        fputs(aluno[i].nome, p);
                        fputc('\n', p);
                        setbuf(stdin, NULL);

                        printf("CURSO: ");
                        gets(aluno[i].curso);
                        fputs(aluno[i].curso, p);
                        fputc('\n', p);
                        setbuf(stdin, NULL);

                        printf("TELEFONE: ");
                        gets(aluno[i].telefone);
                        fputs(aluno[i].telefone, p);
                        fputc('\n', p);
                        setbuf(stdin, NULL);

                        printf("ENDERECO: ");
                        gets(aluno[i].endereco);
                        fputs(aluno[i].endereco, p);
                        fputc('\n', p);
                        setbuf(stdin, NULL);
                        printf("--------------------\n");
                    }

                    opcoes = 0;
                }
                fclose(p);
            }
        }
        //caso procure alunos
        else if (opcoes == 2) {
            printf("\nPROCURAR ALUNOS\n");
            
            p = fopen("questao2.bin", "rb");
            if (p == NULL){
                printf("Erro na leitura do arquivo!\n Ou voce ainda nao inseriu os dados");
            }else{
                for (int i = 0; i < 50; i++)  {//armazenar os dados do arquivo no vetor
                    fgets(aluno[i].matricula, 50, p);
                    fgets(aluno[i].nome, 50, p);
                    fgets(aluno[i].curso, 50, p);
                    fgets(aluno[i].telefone, 50, p);
                    fgets(aluno[i].endereco, 50, p);
                }
                for (int i = 0; i < 50; i++)  {//imprime os dados
					printf("MATRICULA :%s\n", aluno[i].matricula);
					printf("NOME: %s\n",aluno[i].nome );
					printf("CURSO :%s \n", aluno[i].curso);
					printf("TELEFONE : %s\n",aluno[i].telefone );
					printf("ENDERECO : %s\n", aluno[i].endereco);
					printf("-----------------\n");
                }
                //pergunta qual nome quer buscar
                printf("DIGITE O NOME DO ALUNO QUE DESEJA ENCONTRAR:\n");
                scanf(" %[^\n]s", &busca);
                setbuf(stdin, NULL);

                for (int i = 0; i < 50; i++){
                    char *posicao;
                    posicao = strstr(aluno[i].nome, busca);
                    int dif = posicao - aluno[i].nome;

                    if (dif == 0){
                    printf("MATRICULA :%s\n", aluno[i].matricula);
					printf("NOME: %s\n",aluno[i].nome );
					printf("CURSO :%s \n", aluno[i].curso);
					printf("TELEFONE : %s\n",aluno[i].telefone );
					printf("ENDERECO : %s\n", aluno[i].endereco);
					printf("-----------------\n");                        
					achou = 1;
                    }
                }
                if (achou == 0){
                    printf("USUARIO NAO CONSTA.\n");
                }
                opcoes = 0;
            }

            fclose(p);
        }
        else if (opcoes == 3){
            printf("\nFIM!\n");
        }
    }
}
