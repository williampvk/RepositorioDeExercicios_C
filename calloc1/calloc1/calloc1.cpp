#include <stdio.h>
#include <stdlib.h>

#define QTE 4
#define SAIR exit (1)

int main() {

	int* px;

	px = (int*)calloc(QTE, sizeof(int));
	if (px == NULL) {
		printf("ERRO! Nao tem memoria suficiente.");
		SAIR;
	}

	int i;

	printf("Digite os dados para o vetor de 4 posicoes:\n\n");
	for (i = 0; i < 4; i++) {
		printf("Digite px[%d]: ", i);
		scanf_s("%d", &px[i]);
	}
	printf("\nDADOS DO VETOR: \n\n");
	for (i = 0; i < 4; i++) {
		printf("Posicao [%d]= %d\n", i, px[i]);
	}
	printf("\n");

	free(px);

	system("pause");
	return 0;
}