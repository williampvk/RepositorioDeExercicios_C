#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* arquivo;
	char locaMemoria[81];
	int i, ch;

	//Abrir arquivo para ler texto
	fopen_s(&arquivo, "uninter.txt", "r");
	if (arquivo == NULL)
		exit(0);

	//Aqui lê-se o arquivo de no maximo 80 caracteres e coloca em "locaMemoria"
	ch = fgetc(arquivo);

	/*feof verifica o indicador de fim de arquivo(EOF) do fluxo
	e retorna um valor diferente de zero se este indicador estiver setado*/
	
	for (i = 0; (i < 80) && (feof(arquivo) == 0); i++)
	{
		locaMemoria[i] = (char)ch;
		ch = fgetc(arquivo);
	}

	//Adicionar NULL ao final da string
	locaMemoria[i] = '\0';

	printf("%s\n\n\n", locaMemoria);
	fclose(arquivo);
	system("pause");

}
