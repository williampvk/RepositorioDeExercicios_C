#include <stdio.h>
#include <stdlib.h>

int main() {

	FILE* arquivo;
	errno_t err;
	int numero;

	err = fopen_s(&arquivo, "uninter.txt", "r");
	//"r"(read) irá ler um arquivo que já exista dentro da pasta
	//Com "r+" irá ler o arquivo e poderá ser escrito dentro do mesmo arquivo
	//Mudando para "w"(write), gera um novo arquivo na pasta ou escreve em cima do arquivo, caso já exista
	//Mudando para "a"(anexar), ele abre o arquivo e escreve além do que já está escrito

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