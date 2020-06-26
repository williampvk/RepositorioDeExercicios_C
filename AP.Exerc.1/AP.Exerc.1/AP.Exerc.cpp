#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int produto, sexo; //VARIÁVEIS DE ENTRADA
	int contS = 0, contN = 0, contFem = 0, contMasc = 0; //VARIÁVEIS DE CONTAGEM
	int contSimFem = 0, contSimMasc = 0, contNaoFem = 0, contNaoMasc = 0; //VARIÁVEIS DE CONTAGEM
	float RespFem , RespMasc; //VARIÁVEIS DE RESPOSTA EM FLOAT PARA NÚMEROS COM VÍRGULA


	for (int i = 1; i <= 150; i++) //SINTAXE DO LAÇO DE REPETIÇÃO (FOR), PARA REPETIR 150 VEZES
	{
		printf("Voce gostou do produto? Digite 1(sim) ou 2(nao): \n"); //INFORMAÇÃO DA APROVAÇÃO OU NÃO DO PRODUTO
		scanf_s("%d", &produto); 
		printf("Qual eh o seu sexo? Digite 1(feminino) ou 2(masculino):  \n"); //INFORMAÇÃO SOBRE O SEXO DO USUÁRIO
		scanf_s("%d", &sexo);

		if (produto == 1) //SE A ESCOLHA FOR 1(SIM), SERÁ UTILIZADA ESTA CONDIÇÃO 
		{
		  contS++; //ADICIONARÁ 1 A ESTA VARIAVEL
			
			 if (sexo == 1)
			{ 
				contSimFem++; //CASO FEMININO, ADICIONARÁ 1 A ESTA VARIÁVEL
			}
			
			 if (sexo == 2)
			{
				contSimMasc++; //CASO MASCULINO, ADICIONARÁ 1 A ESTA VARIÁVEL
			}
		}
		else //SE A ESCOLHA FOR 2(NÃO), SERÁ UTILIZADA ESTA CONDIÇÃO
		{
		  contN++; //ADICIONARÁ 1 A ESTA VARIAVEL
			
			if (sexo == 1)
			{
				contNaoFem++; //CASO FEMININO, ADICIONARÁ 1 A ESTA VARIÁVEL
			}
		    if(sexo == 2)
			    {
			    contNaoMasc++; //CASO MASCULINO, ADICIONARÁ 1 A ESTA VARIÁVEL
			    }

		}
	}
	contFem = contSimFem + contNaoFem ; //SOMA DE ESCOLHAS DO SEXO FEMININO
    contMasc = contSimMasc + contNaoMasc ; //SOMA DE ESCOLHAS DO SEXO MASCULINO
    
	RespFem = contSimFem * (100 / contFem); //CÁLCULO DE PORCENTAGEM DE RESPOSTAS SIM DO SEXO FEMININO
	RespMasc = contNaoMasc * (100 / contMasc); //CÁLCULO DE PORCENTAGEM DE NÃO DO SEXO MASCULINO

		printf("\n");
		printf("Responderam SIM: %.d\n", contS); //IMPRIME O RESULTADO DE APROVAÇÃO DO PRODUTO
		printf("\n");
		printf("Responderam NAO: %.d\n", contN); //IMPRIME O RESULTADO DE NÃO APROVAÇÃO DO PRODUTO
		printf("\n");
		printf("Mulheres que responderam SIM: %.2f", RespFem); //IMPRIME A PORCENTAGEM DE MULHERES QUE APROVARAM
		printf("% %\n");
		printf("\n");
		printf("Homens que responderam NAO: %.2f", RespMasc); //IMPRIME A PORCENTAGEM DE HOMENS QUE NÃO APROVARAM
		printf("% %\n");
		printf("\n");

	system("pause");
	return 0;
}