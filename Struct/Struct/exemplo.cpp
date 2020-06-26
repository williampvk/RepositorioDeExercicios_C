#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n*********CADASTRO DE CLIENTES**********\n\n");

	struct Ficha_do_cliente
	{
		char nome[50];
		char endereco[50];
		char telefone[20];
		char email[40];

	}; struct Ficha_do_cliente cliente;

	printf("Digite o nome do cliente:");
	fflush(stdin);
	fgets(cliente.nome, 50, stdin);
	
	printf("Rua:");
	fflush(stdin);
	fgets(cliente.endereco,50,stdin);
	
	printf("Telefone:");
	fflush(stdin);
	fgets(cliente.telefone,20,stdin);
	

	printf("Email:");
	fflush(stdin);
	fgets(cliente.email, 30, stdin);
	
	printf("\n");
	printf("******Imprimir dados do cadastro******\n\n");
	printf("Nome....:%s", cliente.nome);
	printf("Rua.....:%s", cliente.endereco);
	printf("Telefone:%s", cliente.telefone);
	printf("Email...:%s", cliente.email);
	printf("\n\n");

	system("pause");
	return 0;
}
