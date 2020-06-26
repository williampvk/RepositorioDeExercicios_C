#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int produto, sexo; //VARI�VEIS DE ENTRADA
	int contS = 0, contN = 0, contFem = 0, contMasc = 0; //VARI�VEIS DE CONTAGEM
	int contSimFem = 0, contSimMasc = 0, contNaoFem = 0, contNaoMasc = 0; //VARI�VEIS DE CONTAGEM
	float RespFem , RespMasc; //VARI�VEIS DE RESPOSTA EM FLOAT PARA N�MEROS COM V�RGULA


	for (int i = 1; i <= 150; i++) //SINTAXE DO LA�O DE REPETI��O (FOR), PARA REPETIR 150 VEZES
	{
		printf("Voce gostou do produto? Digite 1(sim) ou 2(nao): \n"); //INFORMA��O DA APROVA��O OU N�O DO PRODUTO
		scanf_s("%d", &produto); 
		printf("Qual eh o seu sexo? Digite 1(feminino) ou 2(masculino):  \n"); //INFORMA��O SOBRE O SEXO DO USU�RIO
		scanf_s("%d", &sexo);

		if (produto == 1) //SE A ESCOLHA FOR 1(SIM), SER� UTILIZADA ESTA CONDI��O 
		{
		  contS++; //ADICIONAR� 1 A ESTA VARIAVEL
			
			 if (sexo == 1)
			{ 
				contSimFem++; //CASO FEMININO, ADICIONAR� 1 A ESTA VARI�VEL
			}
			
			 if (sexo == 2)
			{
				contSimMasc++; //CASO MASCULINO, ADICIONAR� 1 A ESTA VARI�VEL
			}
		}
		else //SE A ESCOLHA FOR 2(N�O), SER� UTILIZADA ESTA CONDI��O
		{
		  contN++; //ADICIONAR� 1 A ESTA VARIAVEL
			
			if (sexo == 1)
			{
				contNaoFem++; //CASO FEMININO, ADICIONAR� 1 A ESTA VARI�VEL
			}
		    if(sexo == 2)
			    {
			    contNaoMasc++; //CASO MASCULINO, ADICIONAR� 1 A ESTA VARI�VEL
			    }

		}
	}
	contFem = contSimFem + contNaoFem ; //SOMA DE ESCOLHAS DO SEXO FEMININO
    contMasc = contSimMasc + contNaoMasc ; //SOMA DE ESCOLHAS DO SEXO MASCULINO
    
	RespFem = contSimFem * (100 / contFem); //C�LCULO DE PORCENTAGEM DE RESPOSTAS SIM DO SEXO FEMININO
	RespMasc = contNaoMasc * (100 / contMasc); //C�LCULO DE PORCENTAGEM DE N�O DO SEXO MASCULINO

		printf("\n");
		printf("Responderam SIM: %.d\n", contS); //IMPRIME O RESULTADO DE APROVA��O DO PRODUTO
		printf("\n");
		printf("Responderam NAO: %.d\n", contN); //IMPRIME O RESULTADO DE N�O APROVA��O DO PRODUTO
		printf("\n");
		printf("Mulheres que responderam SIM: %.2f", RespFem); //IMPRIME A PORCENTAGEM DE MULHERES QUE APROVARAM
		printf("% %\n");
		printf("\n");
		printf("Homens que responderam NAO: %.2f", RespMasc); //IMPRIME A PORCENTAGEM DE HOMENS QUE N�O APROVARAM
		printf("% %\n");
		printf("\n");

	system("pause");
	return 0;
}