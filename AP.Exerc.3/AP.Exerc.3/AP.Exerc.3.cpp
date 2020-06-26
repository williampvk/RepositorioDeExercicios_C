#include <stdio.h>
#include <stdlib.h>

int main() {
	//Variáveis
	int n =3, i, j; 
	int mat[3][3]; //A matriz terá 3 linhas e 3 colunas
	int Diag1 = 0, Diag2 = 0;
	int Linha[3],Coluna[3];
	int TesteLin = 1, TesteCol = 1;

	printf("Digite 9 numeros (confirmando cada um com ENTER) para verificar a matriz\n");

	//Laço de repetição para inserir os números na matriz
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++) 
		{
			scanf_s("%i", &mat[i][j]);
		}
	}

	//Laço de repetição para exibir na tela a matriz digitada
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++)
		{
			printf("%i", mat [i][j]);
		}
		printf("\n");
	}

	//Soma da primeira diagonal
	for (i = 0; i < n; i++)
	{
		Diag1 += mat[i][i];
	}

	//Soma da segunda diagonal
	for (i = 0; i < n; i++)
	{
		Diag2 += mat[i][n - i - 1];
	}

	//Soma das linhas
	for (i = 0; i < n; i++)
	{
		Linha[i] = 0;
		for (j = 0; j < n; j++) 
		{
			Linha[i] += mat[i][j];
		}
	}

	//Soma das colunas	
	for (j = 0; j < n; j++) 
	{
		Coluna[j] = 0;
		for (i = 0; i < n; i++) 
		{
			Coluna[j] += mat[i][j];
		}
	}

	//Verificação do quadrado mágico
    for (i = 1; i < n; i++)
	{
		if (Linha[i] != Linha[i -1])
		{
			TesteLin = 0;
			break;
		}
		else if (Coluna[i] != Coluna[i -1]) 
		{
			TesteCol = 0;
			break;
		}
	}

	//Exibe a confirmação ou não do quadrado mágico
	if (TesteLin && TesteCol && Diag1 == Diag2 && Diag1 == Linha[0]) 
	{
		printf("A matriz eh um quadrado magico\n");
	}
	else 
	{
		printf("A matriz nao eh um quadrado magico\n");
	}

	system("pause");
	return 0;
}