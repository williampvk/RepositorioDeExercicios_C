#include <stdio.h>
#include <stdlib.h>

int main() {

	int MinhaRU, RU;//Variáveis que receberão os valores das RU
	int *MinhaRU_pont, *RU_pont;//Ponteiros


	//Ponteiros apontam os endereços das variáveis 
	MinhaRU_pont = &MinhaRU;
	RU_pont = &RU;

    
	//Imprime os pedidos e armazena as informações
	printf("Digite o numero da sua RU: \n");
	scanf_s("%d", &MinhaRU);
	printf("\n");
	printf("Digite outro numero de RU: \n");
	scanf_s("%d", &RU);

	
	//Imprime os valores apontados das variáveis
	printf("\n");
	printf("A primeira RU digitada foi: %d\n", *MinhaRU_pont);
	printf("A segunda RU digitada foi: %d\n\n", *RU_pont);


	//Condição para determinar qual valor armazenado é maior
	if (*MinhaRU_pont > *RU_pont) {
		printf("A RU com maior valor eh a primeira: %d\n\n", *MinhaRU_pont);
	}
	else {
		printf("A RU com maior valor eh a segunda: %d\n\n", *RU_pont);
	}

	system("pause");
	return 0;
}