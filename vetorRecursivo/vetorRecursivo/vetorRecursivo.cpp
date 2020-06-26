#include <stdio.h>
#include <stdlib.h>

#define NVETOR 5 //Declaração de constante MACRO

int somaVetor(int vetor[], int tamanho);

int main() {
	int vetor[NVETOR] = { 22, 5, 11, 3, 6 };
	int i, soma = 0;
	int resultado = somaVetor(vetor, NVETOR);

	printf("Impressao com funcao recursiva\n");
	printf("Soma = %i\n", resultado);
	printf("\n");

	for (i = 0; i < NVETOR; i++) {
		soma = soma + vetor[i];
	}

	printf("Impressao com funcao iterativa\n");
	printf("Soma = %d\n\n", soma);

	system("pause");
	return 0;

}

int somaVetor(int vetor[], int tamanho) {
	if (tamanho == 1)
		return vetor[0];
	else
		return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);

}
    