#include<stdio.h>
#include<stdlib.h>

int main() {
	int num, cont = 1; //Atribui-se o valor 1 à variável cont

	printf("Digite quantas vezes repetir o loop: \n");
	scanf_s("%d", &num);

	printf("\n");

	while (cont <= num)  // Comando de looping "while"
	{
		printf("Repetiu %d vez(es)\n", cont);
		cont++;  // Adiciona +1 à variável indicada
	}
	printf("\n");

	system("pause");
	return 0;
}