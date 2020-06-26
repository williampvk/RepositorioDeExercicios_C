#include <stdio.h>
#include <stdlib.h>

int main() {
	int RU = 11;//Declara��o de um valor qualquer para associar a vari�vel que receber� os dois ultimos digitos do RU 
	float RUfloat = 22.22;//Declara��o de um valor qualquer para associar a vari�vel que receber� os quatro ultimos digitos do RU 
	char LetraNome = {'x'};//Declara��o de um caractere qualquer para associar a vari�vel que receber� a primeira letra do nome


	//Ponteiros que receber�o os endere�os das variaveis 
	int *RU_pont;
	float *RUfloat_pont;
	char *LetraNome_pont;


	//Imprime os valores antes das vari�veis serem alteradas
	printf("Variavel inteira antes da modificacao...: %d\n", RU);
	printf("Variavel real antes da modificacao......: %.2f\n", RUfloat);
	printf("Variavel caractere antes da modificacao.: %c\n\n\n", LetraNome);


	//Passa os endere�os das vari�veis para os ponteiros
	RU_pont = &RU;
	RUfloat_pont = &RUfloat;
	LetraNome_pont = &LetraNome;
	

	//Altera os valores das vari�veis atrav�s dos ponteiros
	*RU_pont = 55;
	*RUfloat_pont = 65.55;
	*LetraNome_pont = { 'w' };

	
	//Imprime os valores das vari�veis alteradas
	printf("Variavel inteira depois da modificacao...: %d\n", RU);
	printf("Variavel real depois da modificacao......: %.2f\n", RUfloat);
	printf("Variavel caractere depois da modificacao.: %c\n\n\n", LetraNome);
	

	system("pause");
	return 0;

}
