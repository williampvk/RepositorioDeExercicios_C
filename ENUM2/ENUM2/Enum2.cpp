#include <stdio.h>
#include <stdlib.h>

enum escapes { nova_linha = '\n', tabulacao = '\t', backspace = '\b'};

int main() {

	enum escapes esc = nova_linha;

	printf("Testando nova linha %c%c%c de %c%c%c", esc, esc, esc, esc, esc, esc);

	esc = tabulacao;

	printf("Testando%ctabulacao%cTestando%ctabulacao\n\n\n", esc, esc, esc);

	system("pause");
	return 0;
}