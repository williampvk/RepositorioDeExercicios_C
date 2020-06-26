#include <stdio.h>
#include <stdlib.h>
#include <time.h> //Biblioteca para gerar a semente aleatória

void BubbleSort_Crescente(int vet[]);//Procedimentos que estão posicionados abaixo da main
void BubbleSort_Decrescente(int vet[]);
#define TAMANHOVETOR 10

int main()
{
	int vet[TAMANHOVETOR] = { 0 }; //Com valor 0 todas as posições do vetor iniciarão com valor 0
	int i ;
	srand(time(NULL)); //Gera a semente aleatória

	//INSERÇÃO DE DADOS
	for (int i = 0; i < TAMANHOVETOR; i++)
		vet[i] = rand() % 100; //rand (de Random) gera os valores. % 100 serão números de 0 á 99

	printf("VETOR NAO ORDENADO: \n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf("%d\n", vet[i]);

	BubbleSort_Crescente(vet);

	printf("VETOR ORDENADO CRESCENTE: \n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf("%d\n", vet[i]);

	BubbleSort_Decrescente(vet);

	printf_s("VETOR ORDENADO DECRESCENTE: \n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf("%d\n", vet[i]);

	system("pause");
	return 0;
}

void BubbleSort_Crescente(int vet[]) //Procedimento sem retorno, que recebe como parâmetro o vetor.
{
	int aux;
	for (int n = 1; n <= TAMANHOVETOR; n++) { //Laço externo. Executa a QUANTIDADE de vezes referente ao tamanho do vetor. Ou seja de 1 a 10.
		for (int i = 0; i < (TAMANHOVETOR - 1); i++) { //Laço interno. Executa varrendo as POSICÕES do vetor. Ou seja de 0 a 9.
			if (vet[i] > vet[i + 1]) { //CRESCENTE sinal '>' maior
				aux = vet[i]; //Coloca o valor da primeira posição em aux
				vet[i] = vet[i + 1]; //Coloca o valor da segunda posição na primeira
				vet[i + 1] = aux; //Coloca o valor aux na segunda posição
			}
		}
	}

}

void BubbleSort_Decrescente(int vet[]) 
{
	int aux;
	for (int n = 1; n <= TAMANHOVETOR; n++) { 
		for (int i = 0; i < (TAMANHOVETOR - 1); i++) { 
			if (vet[i] < vet[i + 1]) { //DECRESCENTE sinal '<' menor
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux; 
			}
		}
	}

}