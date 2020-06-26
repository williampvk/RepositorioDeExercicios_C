#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
#include <string.h>

struct RegistroDeAluno {
	char nome[50];
	char email[50];
	int RU;
	struct RegistroDeAluno  *direita, *esquerda;
}; struct RegistroDeAluno aluno, * aluno_pont;
 
 

int menu();
void Inserir(RegistroDeAluno** ElementoVarredura, int RuAux);
RegistroDeAluno* Buscar(RegistroDeAluno** ElementoVarredura, int num);


int main() 
{
	aluno_pont = &aluno;

	int RuAux = NULL;
	int op, c;
	RegistroDeAluno* root;
	root = (RegistroDeAluno*)malloc(sizeof(RegistroDeAluno));
	root = NULL;

	RegistroDeAluno* ElementoBusca;
	ElementoBusca = (RegistroDeAluno*)malloc(sizeof(RegistroDeAluno));

	while (1) {
		op = menu();
		switch (op) {
		case 1:
			printf("Digite a RU do aluno: ");
			scanf_s("%d", &aluno.RU);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			printf("Digite o nome do aluno: ");
			fflush(stdin);
			fgets(aluno.nome, 49, stdin);
			printf("Digite o email do aluno: ");
			fflush(stdin);
			fgets(aluno.email, 49, stdin);
			Inserir(&root, RuAux);

			break;
		case 2:
			printf("Digite o número da RU a ser buscada: ");
			scanf_s("%d", &RuAux);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			ElementoBusca = Buscar(&root, RuAux);

			

			if (ElementoBusca != 0)
				printf("Ru: %d\nNome: %sEmail: %s\n\n", aluno_pont->RU, aluno_pont->nome, aluno_pont->email);
			else
				printf("Aluno não encontrado.\n");
			system("pause");
			break;
		case 3:
			return 0;
		default:
			printf("Invalido\n");
		}
	}
	return 0;
}

int menu() 
{

	setlocale(LC_ALL, "Portuguese");
	int op, c;
	system("Cls");

	printf("\**************************\n");
	printf("\   Escolha uma opção      \n");
	printf("\   1. Cadastrar Aluno     \n");
	printf("\   2. Pesquisar Aluno     \n");
	printf("\   3. Sair                \n");
	printf("\**************************\n");
	printf("Digite sua escolha: ");

	scanf_s("%d", &op);
	while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.

	system("Cls");
	return op;
}

void Inserir(RegistroDeAluno** ElementoVarredura, int RuAux) {

	if (*ElementoVarredura == NULL)
	{ //SE ESTÁ VAZIO, COLOCA NA ÁRVORE
		RegistroDeAluno* NovoElemento = NULL;
		NovoElemento = (RegistroDeAluno*)malloc(sizeof(RegistroDeAluno));
		NovoElemento->esquerda = NULL;
		NovoElemento->direita = NULL;

		RuAux = aluno_pont->RU;

		NovoElemento->RU = aluno_pont->RU;
		*ElementoVarredura = NovoElemento;
		return;
	}

	if (aluno_pont->RU < (*ElementoVarredura)->RU)
	{
		Inserir(&(*ElementoVarredura)->esquerda, aluno_pont->RU);
	}
	else
	{
		if (aluno_pont->RU > (*ElementoVarredura)->RU)
		{
			Inserir(&(*ElementoVarredura)->direita, aluno_pont->RU);
		}
	}
}

RegistroDeAluno* Buscar(RegistroDeAluno** ElementoVarredura, int RuAux)
{
	if (*ElementoVarredura == NULL)
		return NULL;
	aluno_pont->RU = RuAux;

	if (aluno_pont->RU < (*ElementoVarredura)->RU)
	{
		Buscar(&((*ElementoVarredura)->esquerda), aluno_pont->RU);
	}
	else
	{
		if (aluno_pont->RU > (*ElementoVarredura)->RU)
		{
			Buscar(&((*ElementoVarredura)->direita), aluno_pont->RU);
		}
		else
		{
			if (aluno_pont->RU == (*ElementoVarredura)->RU)
				return *ElementoVarredura;
		}
	}
}

