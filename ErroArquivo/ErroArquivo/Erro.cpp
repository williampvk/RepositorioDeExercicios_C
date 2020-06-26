#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* arquivo;
	errno_t err;
	int numero;

	err = fopen_s(&arquivo, "uninter.txt", "r");
	//"r"(read) ir� ler um arquivo que j� exista dentro da pasta
	//Com "r+" ir� ler o arquivo e poder� ser escrito dentro do mesmo arquivo
	//Mudando para "w"(write), gera um novo arquivo na pasta ou escreve em cima do arquivo, caso j� exista
	//Mudando para "a"(anexar), ele abre o arquivo e escreve al�m do que j� est� escrito

	if (err == 0) {
		printf("Digite um numero inteiro: ");
		do {
			numero = getchar();
			fputc(numero, arquivo);
		} while (numero != '\n');

	}
	else
	{
		printf("ERRO!!! Arquivo nao foi aberto!\n\n");
	}

	if (arquivo) {
		err = fclose(arquivo);
		if (err = 0) {
			printf("\nArquivo fechado!\n\n");
		}
		else {
			printf("Arquivo nao foi fechado!\n\n");
		}
	}
	system("pause");
	return 0;

}