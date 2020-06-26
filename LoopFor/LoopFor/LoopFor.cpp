#include<stdio.h>
#include<stdlib.h>

int main() {
	int num, cont ;  // O valor 1 da variavel cont é atribuído apenas no "for"

	printf("Digite quantas vezes repetir o loop: \n");
	scanf_s("%d", &num);

	printf("\n");

	for (cont = 1; cont <= num; cont++)  // Comando de looping "for"
	{
		printf("Repetiu %d vez(es)\n", cont);
	}
	printf("\n");

	system("pause");
	return 0;
}