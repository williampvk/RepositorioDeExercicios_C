#include <stdio.h>
#include <stdlib.h>

struct calendario {
	int *dia;
	int *mes;
	int *ano;
}; struct calendario atual;

int main() {
	int diaT = 20;
	int mesT = 12;
	int anoT = 2019;

	atual.dia = &diaT;
	atual.mes = &mesT;
	atual.ano = &anoT;

	printf("Endereco das variaveis:\n\ndiaT:%p\nmesT:%p\nanoT:%p\n\n", &diaT, &mesT, &anoT);
	//Duas maneiras de printar a mesma coisa
	printf("Endereco da variavel diaT com ponteiro: %p\n", atual.dia);
	printf("Endereco da variavel mesT com ponteiro: %p\n", atual.mes);
	printf("Endereco da variavel anoT com ponteiro: %p\n\n\n", atual.ano);

	printf("Data com ponteiros:\n\n");
	printf("%d / %d / %d\n\n", *atual.dia, *atual.mes, *atual.ano);

	system("pause");
	return 0;




}