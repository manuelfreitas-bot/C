#include <stdio.h>
/*Crie uma estrutura, representando um aluno de uma disciplina, onde essa estrutura
deve conter o número de matrícula do aluno (um número inteiro), seu nome (com até
40 caracteres) e as notas de três provas (reais), além de um campo para a média de
tais notas. Escreva um programa que leia os dados para povoar esta estrutura
(matrícula, nome e 3 notas) e calcule e armazene a média das notas.*/
int main(){
//criando a o tipo de dado aluno com 6 campos
typedef struct{
	int matricula;
	char nome[40];
	float ap1;
	float ap2;
	float ap3;
	float media;
}aluno;

aluno aluno1; //definindo o primeiro aluno do tipo aluno
//inserindo valores
printf("======VAMOS INSERIR OS DADOS DO ALUNO======\n\n");
		printf("Informe o numero da matricula:\n");
		scanf("%d", &aluno1.matricula);
		
		printf("Informe o nome completo:\n");
		scanf(" %[^\n]s", &aluno1.nome);
		
		printf("Informe a nota da AP1:\n");
		scanf("%f", &aluno1.ap1);
		
		printf("Informe a nota da AP2:\n");
		scanf("%f", &aluno1.ap2);
		
		printf("Informe a nota da AP3:\n");
		scanf("%f", &aluno1.ap3);

//claculando media
aluno1.media = (float)(aluno1.ap1 + aluno1.ap2 + aluno1.ap3)/3.0;
//mostrando valores
	printf("\n\n======OS DADOS DIGITADOS DO ALUNOS FORAM:======\n");
	printf("MATRICULA: %d\n", aluno1.matricula);
	printf("NOME: %s\n", aluno1.nome);
	printf("AP1: %1.2f\n", aluno1.ap1);
	printf("AP2: %1.2f\n", aluno1.ap2);
	printf("AP3: %1.2f\n", aluno1.ap3);
	printf("MEDIA: %1.2f\n",aluno1.media);
return 0;
}
