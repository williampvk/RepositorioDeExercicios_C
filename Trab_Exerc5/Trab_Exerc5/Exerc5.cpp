#include <stdio.h>
#include <stdlib.h>

void Funcao(int num1, int num2);//Identificação da função que está no final do código

//Variáveis de entrada dos números
int main() {
	int num1, num2;
	int i ;
	
	//Entrada dos valores que serão digitados pelo usuário
	printf("Digite um valor: ");
	scanf_s("%d", &num1);
	printf("\n");
	printf("Digite outro valor: ");
	scanf_s("%d", &num2);
	printf("\n\n");

	//Chamada da função recursiva
	printf("Impressao com funcao recursiva\n\n");
    Funcao(num1, num2);
	printf("\n\n");

	//Chamada da função iterativa
	printf("Impressao com funcao iterativa\n\n");
	for (i = num1; i <= num2; i++) 
	{
		printf("%d ", i);
	}
	printf("\n\n");

	system("pause");
	return 0;

}

void Funcao(int num1, int num2)//Função que será chamada 
{
	if (num1 <= num2)
	{
		printf("%d ", num1);
		Funcao(num1 + 1, num2);
	};
}
