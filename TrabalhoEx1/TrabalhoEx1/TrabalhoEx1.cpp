#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void InserirMusica();
void VisualizarPlaylist();

struct ListaDeMusicas {
	char musica[40], artista[40];
	float duracao;
	struct ListaDeMusicas *prox;
} *inicio, *fim, *aux;

int main() 
{
	setlocale(LC_ALL, "Portuguese"); //Resolve as correções de acentos e sinais
	int op, c;

	while (1)
	{
		system("cls");
		printf("*********************\n");
		printf("1.Inserir música\n");
		printf("2.Visualizar playlist\n");
		printf("3.Sair\n");
		printf("*********************\n");

		printf("Escolha o opção: ");
		scanf_s("%d", &op);
		while ((c = getchar()) != '\n' && c != EOF) {} //Limpeza do buffer do teclado

		switch (op) 
		{
		case 1: //Insere novas músicas/artistas/tempo de duração
			InserirMusica();
			system("pause");
			break;
		case 2: //Visualiza a playlist
			VisualizarPlaylist();
			system("pause");
			break;
		case 3: //Sair do prompt
			return 0;
		default:
			printf("\n[ERRO!] Opcão não existe.\n\n");
			system("pause");
		}
	}
	system("pause");
	return 0;
}

void InserirMusica() 
{
	int c;

	struct ListaDeMusicas* dado;
	dado = (struct ListaDeMusicas*)malloc(sizeof(struct ListaDeMusicas));

	//Chamada de inserção de dados
	printf("\n***Inserção de música*** ");
	printf("\nNome da musica: ");
	fgets(dado->musica, 39, stdin);

	printf("\nNome do artista: ");
	fgets(dado->artista, 39, stdin);

	printf("\n!Usar este formato '0,00' para declarar a duração!");
	printf("\nDuracao da musica: ");
	scanf_s("%f", &dado->duracao);

	while ((c = getchar()) != '\n' && c != EOF) {} //Limpeza do buffer do teclado

	//Os dados serão inseridos no final da fila

	dado->prox = NULL;

	if (inicio == NULL) //Se a fila esta vazia aqui entra o primeiro dado
	{
		inicio = dado;
		fim = dado;
	}
	else {
		fim->prox = dado;
		fim = dado;
	}
}

void VisualizarPlaylist() 
{
	aux = inicio;
	if (inicio == NULL)
	{
		printf("\n Playlist Vazia!");
	}
	else {
		while (aux != NULL) {
			printf("\nmusica: %s", aux->musica);
			printf("artista: %s", aux->artista);
			printf("duracao: %.2f\n", aux->duracao);
			aux = aux->prox;
		}
	}
	printf("\n");
}
