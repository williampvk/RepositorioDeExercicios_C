#include <stdio.h>
#include <stdlib.h>

void imprimir_soma_valor(int *num);

 int main(){

   struct p_valor {
	int a, b;
    }; struct p_valor x, *px;

       px = &x;

	   px->a = 201;
	   px->b = 302;
	

	printf("VALORES ANTES DA CHAMADA DA FUNCAO\n");
	printf("Valor do componente 'a'= %d\n", px->a);
	printf("Valor do componente 'b'= %d\n\n", px->b);

	printf("VALORES NA CHAMADA DA FUNCAO\n");
	imprimir_soma_valor(&x.a);
	imprimir_soma_valor(&x.b);

	printf("\nVALORES DEPOIS DA CHAMADA DA FUNCAO\n");
	printf("Valor do componente 'a'= %d\n", x.a);
	printf("Valor do componente 'b'= %d\n\n", x.b);

	system("pause");
	return 0;
}

void imprimir_soma_valor(int *num) {
	int num1;
	num1 = *num + 3;
	printf("Valor %d alterado na funcao para = %d\n", *num, num1);
}