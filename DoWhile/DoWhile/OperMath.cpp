#include<stdio.h>
#include<stdlib.h>

int main() {
	int num1, num2, soma, subtracao, multiplicacao, divisao;

	printf("Digite o primeiro numero: \n");
	scanf_s("%d", &num1);

	printf("Digite o segundo numero: \n");
	scanf_s("%d", &num2);

	soma = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;

	printf("\n");

	printf("RESULTADO DA SOMA: %d\n", soma);
	printf("RESULTADO DA SUBTRACAO: %d\n", subtracao);
	printf("RESULTADO DA MULTIPLICACAO: %d\n", multiplicacao);
	printf("RESULTADO DA DIVISAO: %d\n", divisao);

	printf("\n");

	system("pause");
	return 0;
}