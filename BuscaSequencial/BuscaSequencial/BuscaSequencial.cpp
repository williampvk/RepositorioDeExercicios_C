#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca para gerar a semente aleatória

int BuscaSequencial(int vet[], int buscado);
#define TAMANHOVETOR 10

int main()
{
	int buscado, achou;
	int vet[TAMANHOVETOR] = { 0 }; //Com valor 0 todas as posições do vetor iniciarão com valor 0
	srand(time(NULL)); //Gera a semente aleatória

	//INSERÇÃO DE DADOS
	for (int i = 0; i < TAMANHOVETOR; i++)
		vet[i] = rand() % 1000; //rand (de Random) gera os valores. % 1000 serão números de 0 á 999

	printf("VETOR GERADO: \n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf("%d\n", vet[i]);

	printf("Digite um valor para buscar: \n");
	scanf_s("%d", &buscado);

	achou = BuscaSequencial(vet, buscado);


	if (achou == -1)
		printf("Valor nao encontrado.\n");
	else
		printf("Valor encontrado na posicao %d.\n", achou);


	system("pause");
	return 0;
}

int BuscaSequencial(int vet[], int buscado)
{
	int achou, i;
	achou = 0;
	i = 0;

	while ((i <= TAMANHOVETOR) && (achou == 0))
	{
		if (vet[i] == buscado)
			achou = 1;
		else
			i++;
	}
	if (achou == 0)
		return -1;
	return i + 1;

}