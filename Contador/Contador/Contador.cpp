#include<stdio.h>
#include<stdlib.h>

int main() {

	int cont;

	for (cont = 1; cont <= 30; cont += 3) { // Para mudar a condição de quantos números contar "+=" ou "-="
		printf("Contando %d\n", cont);
	}

	printf("\n");

	system("pause");
	return 0;
}