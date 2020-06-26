#include <stdio.h>
#include <stdlib.h>

typedef int RU;
typedef float prova;

struct notasAluno
{
	RU matricula;
	prova nota1;
	prova nota2;

}; typedef struct notasAluno n_aluno;

int main(){

	n_aluno aluno;
	prova media = 0;

	printf("Digite a matricula do aluno: ");
	scanf_s("%d", &aluno.matricula);

	printf("\nDigite a primeira nota do aluno: ");
	scanf_s("%f", &aluno.nota1);

	printf("\nDigite a segunda nota do aluno: ");
	scanf_s("%f", &aluno.nota2);

	media = (aluno.nota1 + aluno.nota2) / 2;

	printf("\nMatricula do aluno: %d\n", aluno.matricula);
	printf("\nMedia das notas...: %.2f\n", media);

	system("pause");
	return 0;

}