#include<stdio.h>
#include<stdlib.h>

int main()
{
	int opcao;

	printf("Digite um numero entre 1 e 7:  ");
	scanf_s("%d", &opcao);

	switch (opcao)
	{
	case 1:
		printf("O dia escolhido foi Domingo\n\n");
		break;
	case 2:
		printf("O dia escolhido foi Segunda-feira\n\n");
		break;
	case 3:
		printf("O dia escolhido foi Terca-feira\n\n");
		break;
	case 4:
		printf("O dia escolhido foi Quarta-feira\n\n");
		break;
	case 5:
		printf("O dia escolhido foi Quinta-feira\n\n");
		break;
	case 6:
		printf("O dia escolhido foi Sexta-feira\n\n");
		break;
	case 7:
		printf("O dia escolhido foi Sabado\n\n");
		break;

	default:
		printf("Nao existe dia da semana para o numero digitado\n");
		break;
	}

	system("pause");
	return 0;

}