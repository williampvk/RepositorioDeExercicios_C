#include <stdio.h>
#include <stdlib.h>

int main() {
	int RU = 11;//Declaração de um valor qualquer para associar a variável que receberá os dois ultimos digitos do RU 
	float RUfloat = 22.22;//Declaração de um valor qualquer para associar a variável que receberá os quatro ultimos digitos do RU 
	char LetraNome = {'x'};//Declaração de um caractere qualquer para associar a variável que receberá a primeira letra do nome


	//Ponteiros que receberão os endereços das variaveis 
	int *RU_pont;
	float *RUfloat_pont;
	char *LetraNome_pont;


	//Imprime os valores antes das variáveis serem alteradas
	printf("Variavel inteira antes da modificacao...: %d\n", RU);
	printf("Variavel real antes da modificacao......: %.2f\n", RUfloat);
	printf("Variavel caractere antes da modificacao.: %c\n\n\n", LetraNome);


	//Passa os endereços das variáveis para os ponteiros
	RU_pont = &RU;
	RUfloat_pont = &RUfloat;
	LetraNome_pont = &LetraNome;
	

	//Altera os valores das variáveis através dos ponteiros
	*RU_pont = 55;
	*RUfloat_pont = 65.55;
	*LetraNome_pont = { 'w' };

	
	//Imprime os valores das variáveis alteradas
	printf("Variavel inteira depois da modificacao...: %d\n", RU);
	printf("Variavel real depois da modificacao......: %.2f\n", RUfloat);
	printf("Variavel caractere depois da modificacao.: %c\n\n\n", LetraNome);
	

	system("pause");
	return 0;

}
