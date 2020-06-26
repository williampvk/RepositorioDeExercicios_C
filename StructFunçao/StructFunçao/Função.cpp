#include <stdio.h>
#include <stdlib.h>

struct p_valor {
	int a, b;
};

void imprimir_soma_valor(int num);

int main() {

	struct p_valor pont1 = { 201,302 };

	printf("VALORES ANTES DA CHAMADA DA FUNCAO\n");
	printf("Valor do componente 'a'= %d\n", pont1.a);
	printf("Valor do componente 'b'= %d\n\n", pont1.b);

	printf("VALORES NA CHAMADA DA FUNCAO\n");
	imprimir_soma_valor(pont1.a);
	imprimir_soma_valor(pont1.b);

	printf("\nVALORES DEPOIS DA CHAMADA DA FUNCAO\n");
	printf("Valor do componente 'a'= %d\n", pont1.a);
	printf("Valor do componente 'b'= %d\n\n", pont1.b);

	system("pause");
	return 0;
}

    void imprimir_soma_valor(int num){
		int num1;
		num1 = num + 3;
		printf("Valor %d alterado na funcao para = %d\n", num, num1);
	}