#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca para gerar a semente aleatória

void QuickSort(int vet[], int p, int u);//Procedimentos que estão posicionados abaixo da main
int particao(int vet[], int p, int u);
void troca(int vet[], int i, int j);

#define TAMANHOVETOR 100000

int main()
{
	int vet[TAMANHOVETOR] = { 0 }; //Com valor 0 todas as posições do vetor iniciarão com valor 0
	srand(time(NULL)); //Gera a semente aleatória

	//INSERÇÃO DE DADOS
	for (int i = 0; i < TAMANHOVETOR; i++)
		vet[i] = rand() % 100; //rand (de Random) gera os valores. % 100 serão números de 0 á 99

	printf("VETOR NAO ORDENADO: \n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf("%d\n", vet[i]);

	QuickSort(vet, 0, TAMANHOVETOR - 1); //Aqui a variável 'primeiro' está recebendo 0 e a variável 'ultimo' está recebendo 9 como parâmetros

	printf("VETOR ORDENADO CRESCENTE: \n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf("%d\n", vet[i]);

	system("pause");
	return 0;
}

void QuickSort(int vet[], int p, int u) //Procedimento sem retorno que recebe como parâmetro o vetor, uma variável inicial e uma final
{
	int meio; //Será o pivô para os cálculos
	if (p < u) { //Condição de parada para quando os vetores estiverem ordenados
		meio = particao(vet, p, u);
		QuickSort(vet, p, meio); // ESQUERDO
		QuickSort(vet, meio + 1, u); // DIREITO
	}

}

int particao(int vet[], int p, int u) //encontra o pivo, faz varreduras e trocas
{
	int pivo, pivo_pos, i, j;

	pivo_pos = (p + u) / 2;
	pivo = vet[pivo_pos];

	i = p - 1;
	j = u + 1;
	while (i < j)
	{
		do //testa os valores à direita
		{
			j--;
		} while (vet[j] > pivo);

		do //testa os valores à esquerda
		{
			i++;
		} while (vet[i] < pivo);

		if (i < j)
			troca(vet, i, j);
	}
	return j;

	// Para lista decrescente basta inverter os sinais de maior ">" e menor "<" das linhas 59 e 64 

}

void troca(int vet[], int i, int j)
{
	int aux;
	aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}
