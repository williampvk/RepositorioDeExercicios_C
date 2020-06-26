#include <stdio.h>
#include <stdlib.h>

void Funcao(int num1, int num2);//Identifica��o da fun��o que est� no final do c�digo

//Vari�veis de entrada dos n�meros
int main() {
	int num1, num2;
	int i ;
	
	//Entrada dos valores que ser�o digitados pelo usu�rio
	printf("Digite um valor: ");
	scanf_s("%d", &num1);
	printf("\n");
	printf("Digite outro valor: ");
	scanf_s("%d", &num2);
	printf("\n\n");

	//Chamada da fun��o recursiva
	printf("Impressao com funcao recursiva\n\n");
    Funcao(num1, num2);
	printf("\n\n");

	//Chamada da fun��o iterativa
	printf("Impressao com funcao iterativa\n\n");
	for (i = num1; i <= num2; i++) 
	{
		printf("%d ", i);
	}
	printf("\n\n");

	system("pause");
	return 0;

}

void Funcao(int num1, int num2)//Fun��o que ser� chamada 
{
	if (num1 <= num2)
	{
		printf("%d ", num1);
		Funcao(num1 + 1, num2);
	};
}
