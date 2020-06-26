#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Nconta[5];
	float KwMes[5], KwTotal[5], MediaKw;
	int maior = 0, menor = 0;


	printf("**********CADASTRO DE CONSUMIDORES**********");

	printf("\n");
	printf("Digite o numero da conta A: ");
	scanf_s("%d", &Nconta[0]);
	printf("Consumo mensal em KW: ");
	scanf_s("%f", &KwMes[0]);
	printf("\n");
	KwTotal[0] = KwMes[0] * 1.75;
	printf("O valor da conta %d", Nconta[0]);
	printf(" eh de: %.2f", KwTotal[0]);
	printf(" reais\n");
	printf("--------------------------------------------");



	printf("\n");
	printf("Digite o numero da conta B: ");
	scanf_s("%d", &Nconta[1]);
	printf("Consumo mensal em KW: ");
	scanf_s("%f", &KwMes[1]);
	printf("\n");
	KwTotal[1] = KwMes[1] * 1.75;
	printf("O valor da conta %d", Nconta[1]);
	printf(" eh de: %.2f", KwTotal[1]);
	printf(" reais\n");
	printf("--------------------------------------------");


	printf("\n");
	printf("Digite o numero da conta C: ");
	scanf_s("%d", &Nconta[2]);
	printf("Consumo mensal em KW: ");
	scanf_s("%f", &KwMes[2]);
	printf("\n");
	KwTotal[2] = KwMes[2] * 1.75;
	printf("O valor da conta %d", Nconta[2]);
	printf(" eh de: %.2f", KwTotal[2]);
	printf(" reais\n");
	printf("--------------------------------------------");



	printf("\n");
	printf("Digite o numero da conta D: ");
	scanf_s("%d", &Nconta[3]);
	printf("Consumo mensal em KW: ");
	scanf_s("%f", &KwMes[3]);
	printf("\n");
	KwTotal[3] = KwMes[3] * 1.75;
	printf("O valor da conta %d", Nconta[3]);
	printf(" eh de: %.2f", KwTotal[3]);
	printf(" reais\n");
	printf("--------------------------------------------");



	printf("\n");
	printf("Digite o numero da conta E: ");
	scanf_s("%d", &Nconta[4]);
	printf("Consumo mensal em KW: ");
	scanf_s("%f", &KwMes[4]);
	printf("\n");
	KwTotal[4] = KwMes[4] * 1.75;
	printf("O valor da conta %d", Nconta[4]);
	printf(" eh de: %.2f", KwTotal[4]);
	printf(" reais\n");
	printf("--------------------------------------------\n\n");


	  MediaKw = (KwTotal[0] + KwTotal[1] + KwTotal[2] + KwTotal[3] + KwTotal[4]) / 5;

	  
	  for (int i = 0; i < 5; i++) {
		  for (int j = 0; i < 5; i++) {
			  if (KwTotal[i] > KwTotal[maior]) {
				  maior = i;
			  }
			  if (KwTotal[i]< KwTotal[menor]) {
				  menor = i;
			  }  
		  }
	  }
	 

	  printf("Media de consumo entre os clientes: %.2f", MediaKw);
	  printf(" reais\n");
	  printf("********************************************\n");
	  printf("Conta de maior valor: %.2f", KwTotal[maior]);
	  printf(" reais\n");
	  printf("********************************************\n");
	  printf("Conta de menor valor: %.2f", KwTotal[menor]);
	  printf(" reais\n");
	  printf("********************************************\n\n");

   
	system("pause");
	return 0;
}