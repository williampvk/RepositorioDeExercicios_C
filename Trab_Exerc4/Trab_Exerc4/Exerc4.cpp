#include <stdio.h>
#include <stdlib.h>


int main()
{
   printf("\n*********REGISTRO DE ALUNO**********\n\n");


   //Struct que ir� receber as vari�veis
   struct Ficha_do_Aluno
   {
	  char nome[10];
	  int RU;

   }; struct Ficha_do_Aluno aluno, *aluno_pont;
   //"aluno" ser� a chamada que representa a struct e "*aluno_pont" o ponteiro que aponta a chamada


	aluno_pont = &aluno;
	

	//Entradas dos valores e caracteres das vari�veis
	printf("Digite o nome do aluno: ");
	fflush(stdin);
	fgets(aluno.nome, 10, stdin);
	printf("Digite a RU do aluno: ");
	scanf_s("%d", &aluno.RU);



	//Imprime na tela os dados armazenados na struct
	printf("\n");
	printf("*******Imprimir dados do aluno*******\n\n");
	printf("Nome:%s", aluno_pont->nome);
	printf("RU..:%d", aluno_pont->RU);
	printf("\n\n");


	system("pause");
	return 0;

}
