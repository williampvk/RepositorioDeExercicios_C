#include<stdio.h>
#include<stdlib.h>

int main()
{
	//Vari�veis 
	int Nconta[50]; 
	float KwMes[50],KwTotal[50], soma = 0, MediaKw;
	int maior = 0, menor = 0, acima = 0, Qcontas;


	printf("**********CADASTRO DE CONSUMIDORES**********\n");
	

	printf("\n");
	printf("Digite a quantidade de contas a cadastrar: ");
	scanf_s("%d", &Qcontas); //Informa��o da quantidade de contas que o usu�rio ir� cadastrar
	printf("\n");
	printf("********************************************\n\n");

	for (int i = 0; i < Qcontas; i++) //La�o de repeti��o para o cadastro
	{
		printf("Digite o numero da conta: \n");
		scanf_s("%d%*c", &Nconta[i]); //Insere o n�mero da conta do cliente
		printf("Consumo mensal em KW: \n");
		scanf_s("%f", &KwMes[i]); //Insere a quantidade de Kilowatts consumidos
		KwTotal[i] = KwMes[i] * 1.75; //C�lculo do valor do consumo mensal 
		printf("Valor a pagar: %.2f", KwTotal[i]);
		printf(" reais\n");
		printf("--------------------------------------------\n\n");
	}


	for (int i = 0; i < Qcontas; i++) //La�o de repeti��o para demonstrar qual foi o maior e o menor consumo
	{
		
		{
			if (KwTotal[i] > KwTotal[maior]) 
			{
				maior = i;
			}
			if (KwTotal[i] < KwTotal[menor])
			{
				menor = i;
			}
		}
	}
	 
	for (int i = 0; i < Qcontas; i++) //La�o para demonstrar a m�dia entre os clientes
	{
		soma += KwTotal[i];
		MediaKw = soma / Qcontas;
	}

	for (int i = 0; i < Qcontas; i++) //La�o para demonstrar quantos clientes consumiram mais de 170 Kw
	{
		if (KwMes[i] > 170)
		{
			acima++;
		}
	}

	//Imprime na tela do usu�rio os resultados de conta de maior e menor consumo, m�dia de consumo na cidade e consumo acima de 170Kw
	printf("A conta %d teve o maior valor, consumiu %.0f KW e vai pagar %.2f reais\n", Nconta[maior], KwMes[maior], KwTotal[maior]);
	printf("********************************************\n");
	printf("A conta %d teve o menor valor, consumiu %.0f KW e vai pagar %.2f reais\n", Nconta[menor], KwMes[menor], KwTotal[menor]);
	printf("********************************************\n");
	printf("Media de consumo da cidade: %.2f reais\n", MediaKw);
	printf("********************************************\n");
	printf("Clientes acima do consumo de 170KW: %d\n", acima);
	printf("********************************************\n\n");


	system("pause");
	return 0;
}


