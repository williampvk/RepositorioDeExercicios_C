#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n*********REGISTRO DE ALUNO**********\n\n");


	//Struct que irá receber as variáveis
	struct Ficha_do_Aluno
	{
		char nome[10];
		int RU;	

	}; struct Ficha_do_Aluno aluno;//"aluno" será a chamada que representa a struct


	//Entradas dos valores e caracteres das variáveis
	printf("Digite o nome do aluno: ");
	fflush(stdin);
	fgets(aluno.nome, 10, stdin);
	printf("Digite a RU do aluno: ");
	scanf_s("%d", &aluno.RU);


	//Imprime na tela os dados armazenados na struct
	printf("\n");
	printf("*******Imprimir dados do aluno*******\n\n");
	printf("Nome:%s", aluno.nome);
	printf("RU..:%d", aluno.RU);
	printf("\n\n");

	system("pause");
	return 0;
}
